/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/maps-with-incomplete-types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_data.h"
[[maybe_unused]] static constexpr std::string_view kModuleName = "module";


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::A>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::A>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache::thrift::test {

std::string_view A::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<A>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view A::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<A>::name;
}

A::A(const A&) = default;
A& A::operator=(const A&) = default;
A::A() {
}


A::~A() {}

A::A([[maybe_unused]] A&& other) noexcept :
    __fbthrift_field_some_map(std::move(other.__fbthrift_field_some_map)),
    __isset(other.__isset) {
}

A& A::operator=([[maybe_unused]] A&& other) noexcept {
    this->__fbthrift_field_some_map = std::move(other.__fbthrift_field_some_map);
    __isset = other.__isset;
    return *this;
}


A::A(apache::thrift::FragileConstructor, std::unordered_map<::std::int32_t, ::apache::thrift::test::B> some_map__arg) :
    __fbthrift_field_some_map(std::move(some_map__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void A::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_some_map.clear();
  __isset = {};
}

void A::__fbthrift_clear_terse_fields() {
}

bool A::__fbthrift_is_empty() const {
  return !(this->__isset.get(0));
}

bool A::operator==([[maybe_unused]] const A& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}


const std::unordered_map<::std::int32_t, ::apache::thrift::test::B>* A::get_some_map() const& {
  return some_map_ref().has_value() ? std::addressof(__fbthrift_field_some_map) : nullptr;
}

std::unordered_map<::std::int32_t, ::apache::thrift::test::B>* A::get_some_map() & {
  return some_map_ref().has_value() ? std::addressof(__fbthrift_field_some_map) : nullptr;
}

void swap([[maybe_unused]] A& a, [[maybe_unused]] A& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_some_map, b.__fbthrift_field_some_map);
  swap(a.__isset, b.__isset);
}

template void A::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t A::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void A::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t A::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        A,
        ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>,
        std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>,
    "inconsistent use of json option");

} // namespace apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::B>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::B>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache::thrift::test {

std::string_view B::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<B>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view B::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<B>::name;
}


B::B(apache::thrift::FragileConstructor, ::std::int32_t field__arg) :
    __fbthrift_field_field(std::move(field__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void B::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field = ::std::int32_t();
  __isset = {};
}

void B::__fbthrift_clear_terse_fields() {
}

bool B::__fbthrift_is_empty() const {
  return !(this->__isset.get(0));
}

bool B::operator==([[maybe_unused]] const B& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool B::operator<([[maybe_unused]] const B& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


const ::std::int32_t* B::get_field() const& {
  return field_ref().has_value() ? std::addressof(__fbthrift_field_field) : nullptr;
}

::std::int32_t* B::get_field() & {
  return field_ref().has_value() ? std::addressof(__fbthrift_field_field) : nullptr;
}

::std::int32_t& B::set_field(::std::int32_t field_) {
  field_ref() = field_;
  return __fbthrift_field_field;
}

void swap([[maybe_unused]] B& a, [[maybe_unused]] B& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_field, b.__fbthrift_field_field);
  swap(a.__isset, b.__isset);
}

template void B::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t B::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t B::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t B::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void B::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t B::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t B::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t B::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace apache::thrift::test

namespace apache::thrift::test { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace apache::thrift::test
namespace apache::thrift::detail::annotation {
}
