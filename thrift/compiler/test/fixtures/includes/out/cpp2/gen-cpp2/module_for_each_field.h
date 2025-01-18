/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::cpp2::MyStruct> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).MyIncludedField_ref()...);
    f(1, static_cast<T&&>(t).MyOtherIncludedField_ref()...);
    f(2, static_cast<T&&>(t).MyIncludedInt_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
