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

#include <thrift/compiler/whisker/standard_library.h>

#include <thrift/compiler/whisker/dsl.h>

#include <fmt/core.h>

namespace w = whisker::make;

namespace whisker {

namespace {

map::value_type create_array_functions() {
  map array_functions;

  /**
   * Creates an array with the provided arguments in order. This function can
   * be used to form an "array literal".
   *
   * Name: array.of
   *
   * Arguments:
   *   0 or more objects (variadic)
   *
   * Returns:
   *   [array] provided arguments in order.
   */
  array_functions["of"] =
      dsl::make_function("array.of", [](dsl::function::context ctx) -> array {
        ctx.declare_named_arguments({});
        array result;
        result.reserve(ctx.arity());
        for (const object::ptr& arg : ctx.raw().positional_arguments()) {
          result.emplace_back(object(*arg));
        }
        return result;
      });

  /**
   * Produces the length of an array or array-like object.
   *
   * Name: array.len
   *
   * Arguments:
   *   - [array] — The array to find length of.
   *
   * Returns:
   *   [i64] length of the provided array.
   */
  array_functions["len"] =
      dsl::make_function("array.len", [](dsl::function::context ctx) -> i64 {
        ctx.declare_named_arguments({});
        ctx.declare_arity(1);
        return i64(ctx.argument<array>(0).size());
      });

  /**
   * Checks an array for emptiness.
   *
   * Name: array.empty?
   *
   * Arguments:
   *   - [array] — The array to check for emptiness.
   *
   * Returns:
   *   [boolean] indicating whether the array is empty.
   */
  array_functions["empty?"] = dsl::make_function(
      "array.empty?", [](dsl::function::context ctx) -> boolean {
        ctx.declare_named_arguments({});
        ctx.declare_arity(1);
        return ctx.argument<array>(0).size() == 0;
      });

  /**
   * Gets the object from an array at a given index. If the index is negative,
   * or larger than the size of the array, then an error is thrown.
   *
   * Name: array.at
   *
   * Arguments:
   *   - [whisker::array] — The array to get from
   *   - [i64] — The index of the item to get
   *
   * Returns:
   *   [object] the item at the given index.
   */
  array_functions["at"] = dsl::make_function(
      "array.at", [](dsl::function::context ctx) -> object::ptr {
        ctx.declare_named_arguments({});
        ctx.declare_arity(2);

        auto a = ctx.argument<array>(0);
        auto index = ctx.argument<i64>(1);

        if (index < 0 || std::size_t(index) >= a.size()) {
          throw ctx.make_error(
              "Index '{}' is out of bounds (size is {}).", index, a.size());
        }
        return a.at(index);
      });

  return map::value_type{"array", std::move(array_functions)};
}

map::value_type create_string_functions() {
  map string_functions;

  /**
   * Produces the length of string.
   *
   * Name: string.len
   *
   * Arguments:
   *   - [string] — The string to find length of.
   *
   * Returns:
   *   [i64] length of the provided string.
   */
  string_functions["len"] =
      dsl::make_function("string.len", [](dsl::function::context ctx) -> i64 {
        ctx.declare_named_arguments({});
        ctx.declare_arity(1);
        return i64(ctx.argument<string>(0)->length());
      });

  return map::value_type{"string", std::move(string_functions)};
}

map::value_type create_int_functions() {
  map int_functions;

  const auto make_i64_binary_predicate = [](std::string name,
                                            auto&& predicate) {
    using P = std::decay_t<decltype(predicate)>;
    return dsl::make_function(
        std::move(name),
        [p = P(predicate)](dsl::function::context ctx) -> boolean {
          ctx.declare_named_arguments({});
          ctx.declare_arity(2);
          return p(ctx.argument<i64>(0), ctx.argument<i64>(1));
        });
  };

  // The naming format used here matches the "operator" module in Python:
  //    https://docs.python.org/3/library/operator.html
  //
  // For functions returning boolean, "?" is added to the end of the name, as
  // convention for Whisker.

  /**
   * Checks if one i64 is lesser than another.
   *
   * Name: int.lt?
   *
   * Arguments:
   *   - [i64] — The left-hand side of the comparison.
   *   - [i64] — The right-hand side of the comparison.
   *
   * Returns:
   *   [boolean] indicating whether the first number is lesser than the
   *             second.
   */
  int_functions["lt?"] = make_i64_binary_predicate(
      "int.lt?", [](i64 lhs, i64 rhs) -> bool { return lhs < rhs; });

  /**
   * Checks if one i64 is lesser or equal to than another.
   *
   * Name: int.le?
   *
   * Arguments:
   *   - [i64] — The left-hand side of the comparison.
   *   - [i64] — The right-hand side of the comparison.
   *
   * Returns:
   *   [boolean] indicating whether the first number is lesser than or equal
   *             to the second.
   */
  int_functions["le?"] = make_i64_binary_predicate(
      "int.le?", [](i64 lhs, i64 rhs) -> bool { return lhs <= rhs; });

  /**
   * Checks two i64 values for equality.
   *
   * Name: int.eq?
   *
   * Arguments:
   *   - [i64] — The left-hand side of the comparison.
   *   - [i64] — The right-hand side of the comparison.
   *
   * Returns:
   *   [boolean] indicating whether the two values are equal.
   */
  int_functions["eq?"] = make_i64_binary_predicate(
      "int.eq?", [](i64 lhs, i64 rhs) -> bool { return lhs == rhs; });

  /**
   * Checks two i64 values for inequality.
   *
   * Name: int.ne?
   *
   * Arguments:
   *   - [i64] — The left-hand side of the comparison.
   *   - [i64] — The right-hand side of the comparison.
   *
   * Returns:
   *   [boolean] indicating whether the two values are not equal.
   */
  int_functions["ne?"] = make_i64_binary_predicate(
      "int.ne?", [](i64 lhs, i64 rhs) -> bool { return lhs != rhs; });

  /**
   * Checks if one i64 is greater or equal to than another.
   *
   * Name: int.ge?
   *
   * Arguments:
   *   - [i64] — The left-hand side of the comparison.
   *   - [i64] — The right-hand side of the comparison.
   *
   * Returns:
   *   [boolean] indicating whether the first number is greater than or equal
   *             to the second.
   */
  int_functions["ge?"] = make_i64_binary_predicate(
      "int.ge?", [](i64 lhs, i64 rhs) -> bool { return lhs >= rhs; });

  /**
   * Checks if one i64 is greater than another.
   *
   * Name: int.gt?
   *
   * Arguments:
   *   - [i64] — The left-hand side of the comparison.
   *   - [i64] — The right-hand side of the comparison.
   *
   * Returns:
   *   [boolean] indicating whether the first number is greater than the
   *             second.
   */
  int_functions["gt?"] = make_i64_binary_predicate(
      "int.gt?", [](i64 lhs, i64 rhs) -> bool { return lhs > rhs; });

  /**
   * Adds numbers together.
   *
   * Name: int.add
   *
   * Arguments:
   *   - [i64...] — numbers to add together.
   *
   * Returns:
   *   [i64] the sum of the provided numbers. If there are no arguments, then
   *         returns 0.
   */
  int_functions["add"] =
      dsl::make_function("int.add", [](dsl::function::context ctx) -> i64 {
        ctx.declare_named_arguments({});
        i64 result = 0;
        for (std::size_t i = 0; i < ctx.arity(); ++i) {
          result += ctx.argument<i64>(i);
        }
        return result;
      });

  /**
   * Negates the provided number.
   *
   * Name: int.neg
   *
   * Arguments:
   *   - [i64] — number to negate
   *
   * Returns:
   *   [i64] the negative of the provided number.
   */
  int_functions["neg"] =
      dsl::make_function("int.neg", [](dsl::function::context ctx) -> i64 {
        ctx.declare_named_arguments({});
        ctx.declare_arity(1);
        return -ctx.argument<i64>(0);
      });

  /**
   * Subtracts one number from another.
   *
   * Name: int.sub
   *
   * Arguments:
   *   - [i64] — number to subtract from.
   *   - [i64] — amount to subtract.
   *
   * Returns:
   *   [i64] the difference of the two numbers.
   */
  int_functions["sub"] =
      dsl::make_function("int.sub", [](dsl::function::context ctx) -> i64 {
        ctx.declare_named_arguments({});
        ctx.declare_arity(2);
        return ctx.argument<i64>(0) - ctx.argument<i64>(1);
      });

  return map::value_type{"int", std::move(int_functions)};
}

} // namespace

void load_standard_library(map& module) {
  module.emplace(create_array_functions());
  module.emplace(create_string_functions());
  module.emplace(create_int_functions());
}

} // namespace whisker
