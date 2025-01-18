/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <folly/portability/GMock.h>
#include <folly/portability/GTest.h>

#include <thrift/compiler/whisker/eval_context.h>

#include <cassert>
#include <map>

#include <fmt/core.h>

namespace w = whisker::make;

namespace whisker {

namespace {
/**
 * An object with no properties.
 */
class empty_native_object : public native_object {};

/**
 * When looking up a property, always returns a whisker::string that is the
 * property name repeated twice.
 */
class double_property_name
    : public native_object,
      public native_object::map_like,
      public std::enable_shared_from_this<double_property_name> {
 public:
  native_object::map_like::ptr as_map_like() const override {
    return shared_from_this();
  }

  object::ptr lookup_property(std::string_view id) const override {
    if (auto cached = cached_.find(id); cached != cached_.end()) {
      return manage_as_static(cached->second);
    }
    auto [result, inserted] =
        cached_.insert({std::string(id), w::string(fmt::format("{0}{0}", id))});
    assert(inserted);
    return manage_as_static(result->second);
  }

  mutable std::map<std::string, object, std::less<>> cached_;
};

/**
 * When looking up a property, always returns the same whisker::object as a
 * reference.
 */
class delegate_to : public native_object,
                    public native_object::map_like,
                    public std::enable_shared_from_this<delegate_to> {
 public:
  explicit delegate_to(whisker::object delegate)
      : delegate_(std::move(delegate)) {}

 private:
  native_object::map_like::ptr as_map_like() const override {
    return shared_from_this();
  }

  object::ptr lookup_property(std::string_view) const override {
    return manage_as_static(delegate_);
  }

  whisker::object delegate_;
};
} // namespace

TEST(EvalContextTest, basic_name_resolution) {
  auto root =
      w::map({{"foo", w::map({{"bar", w::i64(3)}, {"baz", w::i64(4)}})}});
  auto ctx = eval_context::with_root_scope(root);
  EXPECT_EQ(**ctx.lookup_object({"foo", "bar"}), i64(3));
  EXPECT_EQ(**ctx.lookup_object({"foo", "baz"}), i64(4));
  EXPECT_EQ(
      **ctx.lookup_object({"foo"}),
      w::map({{"bar", w::i64(3)}, {"baz", w::i64(4)}}));
  EXPECT_EQ(**ctx.lookup_object({}), root);
}

TEST(EvalContextTest, parent_scope) {
  object root = w::map(
      {{"foo", w::map({{"bar", w::i64(3)}, {"baz", w::i64(4)}})},
       {"parent", w::string("works")}});
  object child_1 = w::map({{"foo", w::map({{"abc", w::i64(5)}})}});
  object child_2 = w::map({{"bar", w::map({{"baz", w::boolean(true)}})}});
  auto ctx = eval_context::with_root_scope(manage_as_static(root));
  ctx.push_scope(manage_as_static(child_1));
  ctx.push_scope(manage_as_static(child_2));

  // Unknown top-level name should fail
  {
    auto err = get_error<eval_scope_lookup_error>(
        ctx.lookup_object({"unknown", "bar"}));
    EXPECT_EQ(err.property_name(), "unknown");
    EXPECT_EQ(
        err.searched_scopes(),
        std::vector<object::ptr>(
            {manage_as_static(child_2),
             manage_as_static(child_1),
             manage_as_static(root),
             ctx.global_scope()}));
  }

  EXPECT_EQ(**ctx.lookup_object({}), child_2);
  EXPECT_EQ(**ctx.lookup_object({"foo", "abc"}), i64(5));
  // child_1 should shadow `foo` from root
  {
    auto err = get_error<eval_property_lookup_error>(
        ctx.lookup_object({"foo", "bar"}));
    EXPECT_EQ(*err.missing_from(), w::map({{"abc", w::i64(5)}}));
    EXPECT_EQ(err.property_name(), "bar");
    EXPECT_EQ(err.success_path(), std::vector<std::string>{"foo"});
  }
  // Unshadowed names from root should still be accessible
  EXPECT_EQ(**ctx.lookup_object({"parent"}), "works");
  // Subobjects from shadowed names should be accessible
  EXPECT_EQ(**ctx.lookup_object({"bar", "baz"}), true);

  // Should still be shadowing after popping unrelated scope
  ctx.pop_scope();
  EXPECT_EQ(**ctx.lookup_object({}), child_1);
  EXPECT_TRUE(
      has_error<eval_property_lookup_error>(ctx.lookup_object({"foo", "bar"})));

  // Shadowing should stop
  ctx.pop_scope();
  EXPECT_EQ(**ctx.lookup_object({}), root);
  EXPECT_EQ(**ctx.lookup_object({"foo", "bar"}), i64(3));
}

TEST(EvalContextTest, locals) {
  object root = w::map(
      {{"foo", w::map({{"bar", w::i64(3)}, {"baz", w::i64(4)}})},
       {"foo-2", w::f64(2.0)}});
  object child_1 = w::map({{"foo-2", w::string("shadowed")}});

  auto ctx = eval_context::with_root_scope(root);
  ctx.push_scope(manage_as_static(child_1));

  EXPECT_EQ(**ctx.lookup_object({"foo-2"}), "shadowed");
  // Locals shadow objects in current scope.
  ctx.bind_local("foo-2", manage_owned<object>(w::string("local"))).value();
  EXPECT_EQ(**ctx.lookup_object({"foo-2"}), "local");

  // Locals shadow objects in parent scopes.
  ctx.bind_local("foo", manage_owned<object>(w::string("local"))).value();
  EXPECT_EQ(**ctx.lookup_object({"foo"}), "local");

  // Locals are unbound when the current scope is popped.
  ctx.pop_scope();
  EXPECT_EQ(
      **ctx.lookup_object({"foo"}),
      w::map({{"bar", w::i64(3)}, {"baz", w::i64(4)}}));
  EXPECT_EQ(**ctx.lookup_object({"foo-2"}), 2.0);
}

TEST(EvalContextTest, self_reference) {
  const std::vector<object> objects = {
      w::i64(1),
      w::f64(2.0),
      w::string("foo"),
      w::boolean(true),
      w::null,
      w::array({w::i64(1), w::f64(2.0), w::string("foo"), w::boolean(true)}),
      w::map({{"foo", w::i64(1)}, {"bar", w::f64(2.0)}}),
      w::native_object(std::make_shared<empty_native_object>())};

  for (const auto& obj : objects) {
    auto ctx = eval_context::with_root_scope(obj);
    EXPECT_EQ(**ctx.lookup_object({}), obj);
  }
}

TEST(EvalContextTest, native_object_basic) {
  auto o = w::make_native_object<double_property_name>();
  auto ctx = eval_context::with_root_scope(o);
  EXPECT_EQ(**ctx.lookup_object({"foo"}), string("foofoo"));
  EXPECT_EQ(**ctx.lookup_object({"bar"}), string("barbar"));
}

TEST(EvalContextTest, native_object_delegator) {
  native_object::ptr doubler_ref = std::make_shared<double_property_name>();

  object doubler = w::native_object(doubler_ref);
  object delegator = w::make_native_object<delegate_to>(doubler);

  auto ctx = eval_context::with_root_scope(delegator);
  EXPECT_EQ(**ctx.lookup_object({"foo"}), doubler);
  EXPECT_EQ(**ctx.lookup_object({"foo", "bar"}), string("barbar"));

  ctx.push_scope(manage_as_static(delegator));
  EXPECT_EQ(**ctx.lookup_object({"foo"}), doubler);
  EXPECT_EQ(**ctx.lookup_object({"foo", "bar"}), string("barbar"));

  ctx.push_scope(manage_as_static(doubler));
  EXPECT_EQ(**ctx.lookup_object({"foo"}), "foofoo");
}

TEST(EvalContextTest, globals) {
  map globals{{"global", w::i64(1)}};
  object root;

  auto ctx = eval_context::with_root_scope(root, globals);
  EXPECT_EQ(**ctx.lookup_object({"global"}), i64(1));

  object shadowing = w::map({{"global", w::i64(2)}});
  ctx.push_scope(manage_as_static(shadowing));
  EXPECT_EQ(**ctx.lookup_object({"global"}), i64(2));

  ctx.pop_scope();
  EXPECT_EQ(**ctx.lookup_object({"global"}), i64(1));
}

} // namespace whisker
