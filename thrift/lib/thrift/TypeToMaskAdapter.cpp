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

#include <thrift/lib/thrift/TypeToMaskAdapter.h>

#include <thrift/lib/cpp2/protocol/DebugProtocol.h>

namespace apache::thrift::protocol::detail {

void validateTypeIsFull(const type::Type& type) {
  if (!type.isFull()) {
    folly::throw_exception<std::runtime_error>(
        "Type mask requires full type! Attempting to use: " +
        debugFormatType(type));
  }
}

std::string debugFormatType(const type::Type& type) {
  return debugStringViaEncode(type);
}

} // namespace apache::thrift::protocol::detail
