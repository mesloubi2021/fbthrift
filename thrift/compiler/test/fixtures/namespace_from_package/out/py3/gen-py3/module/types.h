/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include "thrift/compiler/test/fixtures/namespace_from_package/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/namespace_from_package/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/namespace_from_package/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::test::namespace_from_package::module::Foo>(
    ::test::namespace_from_package::module::Foo& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.MyInt_ref().copy_from(default_inst<::test::namespace_from_package::module::Foo>().MyInt_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::namespace_from_package::module::Foo>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
