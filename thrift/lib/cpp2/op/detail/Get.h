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

#include <thrift/lib/cpp/Field.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/type/Field.h>

namespace apache {
namespace thrift {
namespace op {
namespace detail {

// TODO(afuller): Add more overloads.
template <typename IdentTag, typename..., typename T>
FOLLY_ERASE constexpr decltype(auto) get(type::structured_c, T&& t) noexcept(
    noexcept(access_field<IdentTag>(static_cast<T&&>(t)))) {
  return access_field<IdentTag>(static_cast<T&&>(t));
}
template <
    FieldId Id,
    typename...,
    typename T,
    FieldOrdinal ord =
        type::ordinal<type::struct_t<folly::remove_cvref_t<T>>>(Id),
    typename IdentTag = thrift::detail::st::struct_private_access::ident<
        folly::remove_cvref_t<T>,
        std::integral_constant<FieldOrdinal, ord>>>
FOLLY_ERASE constexpr decltype(auto) get(type::structured_c, T&& t) noexcept(
    noexcept(access_field<IdentTag>(static_cast<T&&>(t)))) {
  return access_field<IdentTag>(static_cast<T&&>(t));
}

} // namespace detail
} // namespace op
} // namespace thrift
} // namespace apache
