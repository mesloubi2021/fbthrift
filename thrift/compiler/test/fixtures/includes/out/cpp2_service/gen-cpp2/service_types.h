/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;

/** Glean {"file": "thrift/compiler/test/fixtures/includes/src/service.thrift", "name": "IncludesIncluded", "kind": "typedef" } */
typedef ::cpp2::Included IncludesIncluded;
/** Glean {"file": "thrift/compiler/test/fixtures/includes/src/service.thrift", "name": "IncludesTransitiveFoo", "kind": "typedef" } */
typedef ::cpp2::TransitiveFoo IncludesTransitiveFoo;

} // namespace cpp2
