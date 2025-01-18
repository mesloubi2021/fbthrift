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

#include <thrift/lib/cpp2/Flags.h>

#include <thrift/lib/python/server/flagged/EnableResourcePoolsForPython.h>

THRIFT_FLAG_DEFINE_bool(enable_resource_pools_for_python, true);

namespace thrift::python::detail {

bool areResourcePoolsEnabledForPython() {
  return THRIFT_FLAG(enable_resource_pools_for_python);
}

} // namespace thrift::python::detail
