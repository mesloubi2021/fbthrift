/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/int_limits/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/int_limits/gen-cpp2/module_types.h"

namespace cpp2 {
/** Glean {"file": "thrift/compiler/test/fixtures/int_limits/src/module.thrift"} */
namespace module_constants {

  /** Glean {"constant": "max_i64_const"} */
  constexpr ::std::int64_t const max_i64_const_ = static_cast<::std::int64_t>(9223372036854775807);
  /** Glean {"constant": "max_i64_const"} */
  constexpr ::std::int64_t max_i64_const() {
    return max_i64_const_;
  }

  /** Glean {"constant": "min_i64_const"} */
  constexpr ::std::int64_t const min_i64_const_ = static_cast<::std::int64_t>(-9223372036854775808);
  /** Glean {"constant": "min_i64_const"} */
  constexpr ::std::int64_t min_i64_const() {
    return min_i64_const_;
  }

  /** Glean {"constant": "max_i32_const"} */
  constexpr ::std::int32_t const max_i32_const_ = static_cast<::std::int32_t>(2147483647);
  /** Glean {"constant": "max_i32_const"} */
  constexpr ::std::int32_t max_i32_const() {
    return max_i32_const_;
  }

  /** Glean {"constant": "min_i32_const"} */
  constexpr ::std::int32_t const min_i32_const_ = static_cast<::std::int32_t>(-2147483648);
  /** Glean {"constant": "min_i32_const"} */
  constexpr ::std::int32_t min_i32_const() {
    return min_i32_const_;
  }

  /** Glean {"constant": "max_i16_const"} */
  constexpr ::std::int16_t const max_i16_const_ = static_cast<::std::int16_t>(32767);
  /** Glean {"constant": "max_i16_const"} */
  constexpr ::std::int16_t max_i16_const() {
    return max_i16_const_;
  }

  /** Glean {"constant": "min_i16_const"} */
  constexpr ::std::int16_t const min_i16_const_ = static_cast<::std::int16_t>(-32768);
  /** Glean {"constant": "min_i16_const"} */
  constexpr ::std::int16_t min_i16_const() {
    return min_i16_const_;
  }

  /** Glean {"constant": "max_byte_const"} */
  constexpr ::std::int8_t const max_byte_const_ = static_cast<::std::int8_t>(127);
  /** Glean {"constant": "max_byte_const"} */
  constexpr ::std::int8_t max_byte_const() {
    return max_byte_const_;
  }

  /** Glean {"constant": "min_byte_const"} */
  constexpr ::std::int8_t const min_byte_const_ = static_cast<::std::int8_t>(-128);
  /** Glean {"constant": "min_byte_const"} */
  constexpr ::std::int8_t min_byte_const() {
    return min_byte_const_;
  }

  FOLLY_EXPORT ::std::string_view _fbthrift_schema_6a92e1732fe1f98d();
  FOLLY_EXPORT ::folly::Range<const ::std::string_view*> _fbthrift_schema_6a92e1732fe1f98d_includes();

} // namespace module_constants
} // namespace cpp2
