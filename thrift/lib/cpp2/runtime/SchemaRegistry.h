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

#pragma once

#include <unordered_set>
#include <folly/synchronization/RelaxedAtomic.h>
#include <thrift/lib/cpp2/runtime/BaseSchemaRegistry.h>
#include <thrift/lib/thrift/gen-cpp2/schema_types.h>

namespace apache::thrift {

class SchemaRegistry {
 public:
  // Access the global registry.
  static SchemaRegistry& get();

  using Ptr = std::shared_ptr<type::Schema>;

  // Access all data registered
  Ptr getMergedSchema();

  // Helpers for working with schemas.
  static type::Schema mergeSchemas(
      folly::Range<const std::string_view*> schemas);
  static type::Schema mergeSchemas(std::vector<type::Schema>&& schemas);

  explicit SchemaRegistry(BaseSchemaRegistry& base) : base_(base) {}

 private:
  BaseSchemaRegistry& base_;
  Ptr mergedSchema_;
  folly::relaxed_atomic<bool> mergedSchemaAccessed_{false};
  std::unordered_set<type::ProgramId> includedPrograms_;
};

} // namespace apache::thrift
