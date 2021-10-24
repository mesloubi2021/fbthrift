/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct fieldA;
struct req_fieldA;
struct opt_fieldA;
struct fieldB;
struct req_fieldB;
struct opt_fieldB;
struct fieldC;
struct req_fieldC;
struct opt_fieldC;
struct fieldD;
struct fieldE;
struct req_fieldE;
struct opt_fieldE;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_fieldA
#define APACHE_THRIFT_ACCESSOR_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldA
#define APACHE_THRIFT_ACCESSOR_req_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldA
#define APACHE_THRIFT_ACCESSOR_opt_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldB
#define APACHE_THRIFT_ACCESSOR_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldB
#define APACHE_THRIFT_ACCESSOR_req_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldB
#define APACHE_THRIFT_ACCESSOR_opt_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldC
#define APACHE_THRIFT_ACCESSOR_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldC
#define APACHE_THRIFT_ACCESSOR_req_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldC
#define APACHE_THRIFT_ACCESSOR_opt_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldD
#define APACHE_THRIFT_ACCESSOR_fieldD
APACHE_THRIFT_DEFINE_ACCESSOR(fieldD);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldE
#define APACHE_THRIFT_ACCESSOR_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(fieldE);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldE
#define APACHE_THRIFT_ACCESSOR_req_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldE);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldE
#define APACHE_THRIFT_ACCESSOR_opt_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldE);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace extra { namespace svc {
class containerStruct2;
}} // extra::svc
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace extra { namespace svc {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
}} // extra::svc
namespace extra { namespace svc {
class containerStruct2 final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = containerStruct2;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  containerStruct2();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  containerStruct2(apache::thrift::FragileConstructor, bool fieldA__arg, bool req_fieldA__arg, bool opt_fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::map<::std::string, bool> req_fieldB__arg, ::std::map<::std::string, bool> opt_fieldB__arg, ::std::set<::std::int32_t> fieldC__arg, ::std::set<::std::int32_t> req_fieldC__arg, ::std::set<::std::int32_t> opt_fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::string req_fieldE__arg, ::std::string opt_fieldE__arg);

  containerStruct2(containerStruct2&&) noexcept;

  containerStruct2(const containerStruct2& src);


  containerStruct2& operator=(containerStruct2&&) noexcept;
  containerStruct2& operator=(const containerStruct2& src);
  void __clear();

  ~containerStruct2();

 private:
  bool __fbthrift_field_fieldA;
 public:
  bool req_fieldA;
 private:
  bool __fbthrift_field_opt_fieldA;
 private:
  ::std::map<::std::string, bool> __fbthrift_field_fieldB;
 public:
  ::std::map<::std::string, bool> req_fieldB;
 private:
  ::std::map<::std::string, bool> __fbthrift_field_opt_fieldB;
 private:
  ::std::set<::std::int32_t> __fbthrift_field_fieldC;
 public:
  ::std::set<::std::int32_t> req_fieldC;
 private:
  ::std::set<::std::int32_t> __fbthrift_field_opt_fieldC;
 private:
  ::std::string __fbthrift_field_fieldD;
 private:
  ::std::string __fbthrift_field_fieldE;
 public:
  ::std::string req_fieldE;
 private:
  ::std::string __fbthrift_field_opt_fieldE;
private:
  apache::thrift::detail::isset_bitset<9> __isset;

 public:

  bool operator==(const containerStruct2&) const;
  bool operator<(const containerStruct2&) const;

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA_ref() const& {
    return {this->__fbthrift_field_fieldA, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA_ref() const&& {
    return {std::move(this->__fbthrift_field_fieldA), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA_ref() & {
    return {this->__fbthrift_field_fieldA, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA_ref() && {
    return {std::move(this->__fbthrift_field_fieldA), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA() & {
    return fieldA_ref();
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA() const& {
    return fieldA_ref();
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA() && {
    return fieldA_ref();
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA() const&& {
    return fieldA_ref();
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> req_fieldA_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> req_fieldA_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldA)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> req_fieldA_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> req_fieldA_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldA)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldA_ref() const& {
    return {this->__fbthrift_field_opt_fieldA, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldA_ref() const&& {
    return {std::move(this->__fbthrift_field_opt_fieldA), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldA_ref() & {
    return {this->__fbthrift_field_opt_fieldA, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldA_ref() && {
    return {std::move(this->__fbthrift_field_opt_fieldA), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldA() & {
    return opt_fieldA_ref();
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldA() const& {
    return opt_fieldA_ref();
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldA() && {
    return opt_fieldA_ref();
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldA() const&& {
    return opt_fieldA_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldB_ref() const& {
    return {this->__fbthrift_field_fieldB, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldB_ref() const&& {
    return {std::move(this->__fbthrift_field_fieldB), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldB_ref() & {
    return {this->__fbthrift_field_fieldB, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldB_ref() && {
    return {std::move(this->__fbthrift_field_fieldB), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldB() & {
    return fieldB_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldB() const& {
    return fieldB_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldB() && {
    return fieldB_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldB() const&& {
    return fieldB_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> req_fieldB_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> req_fieldB_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldB)};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> req_fieldB_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> req_fieldB_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldB)};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldB_ref() const& {
    return {this->__fbthrift_field_opt_fieldB, __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldB_ref() const&& {
    return {std::move(this->__fbthrift_field_opt_fieldB), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldB_ref() & {
    return {this->__fbthrift_field_opt_fieldB, __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldB_ref() && {
    return {std::move(this->__fbthrift_field_opt_fieldB), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldB() & {
    return opt_fieldB_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldB() const& {
    return opt_fieldB_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldB() && {
    return opt_fieldB_ref();
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldB() const&& {
    return opt_fieldB_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldC_ref() const& {
    return {this->__fbthrift_field_fieldC, __isset.__fbthrift_at(folly::index_constant<4>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldC_ref() const&& {
    return {std::move(this->__fbthrift_field_fieldC), __isset.__fbthrift_at(folly::index_constant<4>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldC_ref() & {
    return {this->__fbthrift_field_fieldC, __isset.__fbthrift_at(folly::index_constant<4>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldC_ref() && {
    return {std::move(this->__fbthrift_field_fieldC), __isset.__fbthrift_at(folly::index_constant<4>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldC() & {
    return fieldC_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldC() const& {
    return fieldC_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldC() && {
    return fieldC_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldC() const&& {
    return fieldC_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> req_fieldC_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldC};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> req_fieldC_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldC)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> req_fieldC_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldC};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> req_fieldC_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldC)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldC_ref() const& {
    return {this->__fbthrift_field_opt_fieldC, __isset.__fbthrift_at(folly::index_constant<5>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldC_ref() const&& {
    return {std::move(this->__fbthrift_field_opt_fieldC), __isset.__fbthrift_at(folly::index_constant<5>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldC_ref() & {
    return {this->__fbthrift_field_opt_fieldC, __isset.__fbthrift_at(folly::index_constant<5>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldC_ref() && {
    return {std::move(this->__fbthrift_field_opt_fieldC), __isset.__fbthrift_at(folly::index_constant<5>())};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldC() & {
    return opt_fieldC_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldC() const& {
    return opt_fieldC_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldC() && {
    return opt_fieldC_ref();
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldC() const&& {
    return opt_fieldC_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldD_ref() const& {
    return {this->__fbthrift_field_fieldD, __isset.__fbthrift_at(folly::index_constant<6>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldD_ref() const&& {
    return {std::move(this->__fbthrift_field_fieldD), __isset.__fbthrift_at(folly::index_constant<6>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldD_ref() & {
    return {this->__fbthrift_field_fieldD, __isset.__fbthrift_at(folly::index_constant<6>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldD_ref() && {
    return {std::move(this->__fbthrift_field_fieldD), __isset.__fbthrift_at(folly::index_constant<6>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldD() & {
    return fieldD_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldD() const& {
    return fieldD_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldD() && {
    return fieldD_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldD() const&& {
    return fieldD_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldE_ref() const& {
    return {this->__fbthrift_field_fieldE, __isset.__fbthrift_at(folly::index_constant<7>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldE_ref() const&& {
    return {std::move(this->__fbthrift_field_fieldE), __isset.__fbthrift_at(folly::index_constant<7>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldE_ref() & {
    return {this->__fbthrift_field_fieldE, __isset.__fbthrift_at(folly::index_constant<7>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldE_ref() && {
    return {std::move(this->__fbthrift_field_fieldE), __isset.__fbthrift_at(folly::index_constant<7>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldE() & {
    return fieldE_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldE() const& {
    return fieldE_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldE() && {
    return fieldE_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldE() const&& {
    return fieldE_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> req_fieldE_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> req_fieldE_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldE)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> req_fieldE_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> req_fieldE_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldE)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldE_ref() const& {
    return {this->__fbthrift_field_opt_fieldE, __isset.__fbthrift_at(folly::index_constant<8>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldE_ref() const&& {
    return {std::move(this->__fbthrift_field_opt_fieldE), __isset.__fbthrift_at(folly::index_constant<8>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldE_ref() & {
    return {this->__fbthrift_field_opt_fieldE, __isset.__fbthrift_at(folly::index_constant<8>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldE_ref() && {
    return {std::move(this->__fbthrift_field_opt_fieldE), __isset.__fbthrift_at(folly::index_constant<8>())};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldE() & {
    return opt_fieldE_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldE() const& {
    return opt_fieldE_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldE() && {
    return opt_fieldE_ref();
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldE() const&& {
    return opt_fieldE_ref();
  }

  bool get_fieldA() const {
    return __fbthrift_field_fieldA;
  }

  [[deprecated("Use `FOO.fieldA_ref() = BAR;` instead of `FOO.set_fieldA(BAR);`")]]
  bool& set_fieldA(bool fieldA_) {
    fieldA_ref() = fieldA_;
    return __fbthrift_field_fieldA;
  }

  bool get_req_fieldA() const {
    return req_fieldA;
  }

  [[deprecated("Use `FOO.req_fieldA_ref() = BAR;` instead of `FOO.set_req_fieldA(BAR);`")]]
  bool& set_req_fieldA(bool req_fieldA_) {
    req_fieldA_ref() = req_fieldA_;
    return req_fieldA;
  }

  const bool* get_opt_fieldA() const& {
    return opt_fieldA_ref() ? std::addressof(__fbthrift_field_opt_fieldA) : nullptr;
  }

  bool* get_opt_fieldA() & {
    return opt_fieldA_ref() ? std::addressof(__fbthrift_field_opt_fieldA) : nullptr;
  }
  bool* get_opt_fieldA() && = delete;

  [[deprecated("Use `FOO.opt_fieldA_ref() = BAR;` instead of `FOO.set_opt_fieldA(BAR);`")]]
  bool& set_opt_fieldA(bool opt_fieldA_) {
    opt_fieldA_ref() = opt_fieldA_;
    return __fbthrift_field_opt_fieldA;
  }
  const ::std::map<::std::string, bool>& get_fieldB() const&;
  ::std::map<::std::string, bool> get_fieldB() &&;

  template <typename T_containerStruct2_fieldB_struct_setter = ::std::map<::std::string, bool>>
  [[deprecated("Use `FOO.fieldB_ref() = BAR;` instead of `FOO.set_fieldB(BAR);`")]]
  ::std::map<::std::string, bool>& set_fieldB(T_containerStruct2_fieldB_struct_setter&& fieldB_) {
    fieldB_ref() = std::forward<T_containerStruct2_fieldB_struct_setter>(fieldB_);
    return __fbthrift_field_fieldB;
  }
  const ::std::map<::std::string, bool>& get_req_fieldB() const&;
  ::std::map<::std::string, bool> get_req_fieldB() &&;

  template <typename T_containerStruct2_req_fieldB_struct_setter = ::std::map<::std::string, bool>>
  [[deprecated("Use `FOO.req_fieldB_ref() = BAR;` instead of `FOO.set_req_fieldB(BAR);`")]]
  ::std::map<::std::string, bool>& set_req_fieldB(T_containerStruct2_req_fieldB_struct_setter&& req_fieldB_) {
    req_fieldB_ref() = std::forward<T_containerStruct2_req_fieldB_struct_setter>(req_fieldB_);
    return req_fieldB;
  }
  const ::std::map<::std::string, bool>* get_opt_fieldB() const&;
  ::std::map<::std::string, bool>* get_opt_fieldB() &;
  ::std::map<::std::string, bool>* get_opt_fieldB() && = delete;

  template <typename T_containerStruct2_opt_fieldB_struct_setter = ::std::map<::std::string, bool>>
  [[deprecated("Use `FOO.opt_fieldB_ref() = BAR;` instead of `FOO.set_opt_fieldB(BAR);`")]]
  ::std::map<::std::string, bool>& set_opt_fieldB(T_containerStruct2_opt_fieldB_struct_setter&& opt_fieldB_) {
    opt_fieldB_ref() = std::forward<T_containerStruct2_opt_fieldB_struct_setter>(opt_fieldB_);
    return __fbthrift_field_opt_fieldB;
  }
  const ::std::set<::std::int32_t>& get_fieldC() const&;
  ::std::set<::std::int32_t> get_fieldC() &&;

  template <typename T_containerStruct2_fieldC_struct_setter = ::std::set<::std::int32_t>>
  [[deprecated("Use `FOO.fieldC_ref() = BAR;` instead of `FOO.set_fieldC(BAR);`")]]
  ::std::set<::std::int32_t>& set_fieldC(T_containerStruct2_fieldC_struct_setter&& fieldC_) {
    fieldC_ref() = std::forward<T_containerStruct2_fieldC_struct_setter>(fieldC_);
    return __fbthrift_field_fieldC;
  }
  const ::std::set<::std::int32_t>& get_req_fieldC() const&;
  ::std::set<::std::int32_t> get_req_fieldC() &&;

  template <typename T_containerStruct2_req_fieldC_struct_setter = ::std::set<::std::int32_t>>
  [[deprecated("Use `FOO.req_fieldC_ref() = BAR;` instead of `FOO.set_req_fieldC(BAR);`")]]
  ::std::set<::std::int32_t>& set_req_fieldC(T_containerStruct2_req_fieldC_struct_setter&& req_fieldC_) {
    req_fieldC_ref() = std::forward<T_containerStruct2_req_fieldC_struct_setter>(req_fieldC_);
    return req_fieldC;
  }
  const ::std::set<::std::int32_t>* get_opt_fieldC() const&;
  ::std::set<::std::int32_t>* get_opt_fieldC() &;
  ::std::set<::std::int32_t>* get_opt_fieldC() && = delete;

  template <typename T_containerStruct2_opt_fieldC_struct_setter = ::std::set<::std::int32_t>>
  [[deprecated("Use `FOO.opt_fieldC_ref() = BAR;` instead of `FOO.set_opt_fieldC(BAR);`")]]
  ::std::set<::std::int32_t>& set_opt_fieldC(T_containerStruct2_opt_fieldC_struct_setter&& opt_fieldC_) {
    opt_fieldC_ref() = std::forward<T_containerStruct2_opt_fieldC_struct_setter>(opt_fieldC_);
    return __fbthrift_field_opt_fieldC;
  }

  const ::std::string& get_fieldD() const& {
    return __fbthrift_field_fieldD;
  }

  ::std::string get_fieldD() && {
    return std::move(__fbthrift_field_fieldD);
  }

  template <typename T_containerStruct2_fieldD_struct_setter = ::std::string>
  [[deprecated("Use `FOO.fieldD_ref() = BAR;` instead of `FOO.set_fieldD(BAR);`")]]
  ::std::string& set_fieldD(T_containerStruct2_fieldD_struct_setter&& fieldD_) {
    fieldD_ref() = std::forward<T_containerStruct2_fieldD_struct_setter>(fieldD_);
    return __fbthrift_field_fieldD;
  }

  const ::std::string& get_fieldE() const& {
    return __fbthrift_field_fieldE;
  }

  ::std::string get_fieldE() && {
    return std::move(__fbthrift_field_fieldE);
  }

  template <typename T_containerStruct2_fieldE_struct_setter = ::std::string>
  [[deprecated("Use `FOO.fieldE_ref() = BAR;` instead of `FOO.set_fieldE(BAR);`")]]
  ::std::string& set_fieldE(T_containerStruct2_fieldE_struct_setter&& fieldE_) {
    fieldE_ref() = std::forward<T_containerStruct2_fieldE_struct_setter>(fieldE_);
    return __fbthrift_field_fieldE;
  }

  const ::std::string& get_req_fieldE() const& {
    return req_fieldE;
  }

  ::std::string get_req_fieldE() && {
    return std::move(req_fieldE);
  }

  template <typename T_containerStruct2_req_fieldE_struct_setter = ::std::string>
  [[deprecated("Use `FOO.req_fieldE_ref() = BAR;` instead of `FOO.set_req_fieldE(BAR);`")]]
  ::std::string& set_req_fieldE(T_containerStruct2_req_fieldE_struct_setter&& req_fieldE_) {
    req_fieldE_ref() = std::forward<T_containerStruct2_req_fieldE_struct_setter>(req_fieldE_);
    return req_fieldE;
  }

  const ::std::string* get_opt_fieldE() const& {
    return opt_fieldE_ref() ? std::addressof(__fbthrift_field_opt_fieldE) : nullptr;
  }

  ::std::string* get_opt_fieldE() & {
    return opt_fieldE_ref() ? std::addressof(__fbthrift_field_opt_fieldE) : nullptr;
  }
  ::std::string* get_opt_fieldE() && = delete;

  template <typename T_containerStruct2_opt_fieldE_struct_setter = ::std::string>
  [[deprecated("Use `FOO.opt_fieldE_ref() = BAR;` instead of `FOO.set_opt_fieldE(BAR);`")]]
  ::std::string& set_opt_fieldE(T_containerStruct2_opt_fieldE_struct_setter&& opt_fieldE_) {
    opt_fieldE_ref() = std::forward<T_containerStruct2_opt_fieldE_struct_setter>(opt_fieldE_);
    return __fbthrift_field_opt_fieldE;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<containerStruct2>;
  friend void swap(containerStruct2& a, containerStruct2& b);
};

template <class Protocol_>
uint32_t containerStruct2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}} // extra::svc
