/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/encode/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/encode/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>


#if FBTHRIFT_CAN_POPULATE_SCHEMA_LIST

#endif

namespace facebook::thrift::test {
namespace module_constants {


::std::string_view _fbthrift_schema_c06a47e52851962b() {
  return "";
}
::folly::Range<const ::std::string_view*> _fbthrift_schema_c06a47e52851962b_includes() {
#if FBTHRIFT_CAN_POPULATE_SCHEMA_LIST
  static const ::std::array<::std::string_view, 1> includes = {
    _fbthrift_schema_c06a47e52851962b(),
  };
  return ::folly::range(includes);
#else
  return {};
#endif
}

} // namespace module_constants
} // namespace facebook::thrift::test
