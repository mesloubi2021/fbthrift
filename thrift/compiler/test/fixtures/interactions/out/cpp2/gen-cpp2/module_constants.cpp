/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/shared_constants.h"

#if FBTHRIFT_CAN_POPULATE_SCHEMA_LIST

// shared.thrift
namespace thrift::shared_interactions {namespace shared_constants {
FOLLY_ATTR_WEAK ::std::string_view _fbthrift_schema_56e9941347408996();
FOLLY_ATTR_WEAK ::folly::Range<const ::std::string_view*> _fbthrift_schema_56e9941347408996_includes();
}} // namespace thrift::shared_interactions

#endif

namespace cpp2 {
namespace module_constants {


::std::string_view _fbthrift_schema_6e724513eec8785d() {
  return "";
}
::folly::Range<const ::std::string_view*> _fbthrift_schema_6e724513eec8785d_includes() {
#if FBTHRIFT_CAN_POPULATE_SCHEMA_LIST
  static const ::std::array<::std::string_view, 2> includes = {
    _fbthrift_schema_6e724513eec8785d(),
    ::apache::thrift::detail::mc::readSchema(::thrift::shared_interactions::shared_constants::_fbthrift_schema_56e9941347408996),
  };
  return ::folly::range(includes);
#else
  return {};
#endif
}

} // namespace module_constants
} // namespace cpp2
