/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/frozen-struct/src/include1.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include1_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>


#if FBTHRIFT_CAN_POPULATE_SCHEMA_LIST

#endif

namespace some::ns {
namespace include1_constants {


::std::string_view _fbthrift_schema_933b10759aaa870() {
  return "";
}
::folly::Range<const ::std::string_view*> _fbthrift_schema_933b10759aaa870_includes() {
#if FBTHRIFT_CAN_POPULATE_SCHEMA_LIST
  static const ::std::array<::std::string_view, 1> includes = {
    _fbthrift_schema_933b10759aaa870(),
  };
  return ::folly::range(includes);
#else
  return {};
#endif
}

} // namespace include1_constants
} // namespace some::ns
