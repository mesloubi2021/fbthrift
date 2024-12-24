/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/split/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/split/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/split/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/split/gen-cpp2/module_data.h"
[[maybe_unused]] static constexpr std::string_view kModuleName = "module";


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStruct>;
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

namespace cpp2 {

std::string_view MyStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view MyStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyStruct>::name;
}

MyStruct::MyStruct(const MyStruct&) = default;
MyStruct& MyStruct::operator=(const MyStruct&) = default;
MyStruct::MyStruct() :
    __fbthrift_field_MyIntField(),
    __fbthrift_field_myEnum(),
    __fbthrift_field_oneway(),
    __fbthrift_field_readonly(),
    __fbthrift_field_idempotent() {
}


MyStruct::~MyStruct() {}

MyStruct::MyStruct([[maybe_unused]] MyStruct&& other) noexcept :
    __fbthrift_field_MyIntField(std::move(other.__fbthrift_field_MyIntField)),
    __fbthrift_field_MyStringField(std::move(other.__fbthrift_field_MyStringField)),
    __fbthrift_field_MyDataField(std::move(other.__fbthrift_field_MyDataField)),
    __fbthrift_field_myEnum(std::move(other.__fbthrift_field_myEnum)),
    __fbthrift_field_oneway(std::move(other.__fbthrift_field_oneway)),
    __fbthrift_field_readonly(std::move(other.__fbthrift_field_readonly)),
    __fbthrift_field_idempotent(std::move(other.__fbthrift_field_idempotent)),
    __isset(other.__isset) {
}

MyStruct& MyStruct::operator=([[maybe_unused]] MyStruct&& other) noexcept {
    this->__fbthrift_field_MyIntField = std::move(other.__fbthrift_field_MyIntField);
    this->__fbthrift_field_MyStringField = std::move(other.__fbthrift_field_MyStringField);
    this->__fbthrift_field_MyDataField = std::move(other.__fbthrift_field_MyDataField);
    this->__fbthrift_field_myEnum = std::move(other.__fbthrift_field_myEnum);
    this->__fbthrift_field_oneway = std::move(other.__fbthrift_field_oneway);
    this->__fbthrift_field_readonly = std::move(other.__fbthrift_field_readonly);
    this->__fbthrift_field_idempotent = std::move(other.__fbthrift_field_idempotent);
    __isset = other.__isset;
    return *this;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::std::string MyStringField__arg, ::cpp2::MyDataItem MyDataField__arg, ::cpp2::MyEnum myEnum__arg, bool oneway__arg, bool readonly__arg, bool idempotent__arg) :
    __fbthrift_field_MyIntField(std::move(MyIntField__arg)),
    __fbthrift_field_MyStringField(std::move(MyStringField__arg)),
    __fbthrift_field_MyDataField(std::move(MyDataField__arg)),
    __fbthrift_field_myEnum(std::move(myEnum__arg)),
    __fbthrift_field_oneway(std::move(oneway__arg)),
    __fbthrift_field_readonly(std::move(readonly__arg)),
    __fbthrift_field_idempotent(std::move(idempotent__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
}


void MyStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_MyIntField = ::std::int64_t();
  this->__fbthrift_field_MyStringField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_myEnum = ::cpp2::MyEnum();
  this->__fbthrift_field_oneway = bool();
  this->__fbthrift_field_readonly = bool();
  this->__fbthrift_field_idempotent = bool();
  __isset = {};
}

void MyStruct::__fbthrift_clear_terse_fields() {
}

bool MyStruct::__fbthrift_is_empty() const {
  return false;
}

bool MyStruct::operator==([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool MyStruct::operator<([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


::std::int64_t MyStruct::get_MyIntField() const {
  return __fbthrift_field_MyIntField;
}

::std::int64_t& MyStruct::set_MyIntField(::std::int64_t MyIntField_) {
  MyIntField_ref() = MyIntField_;
  return __fbthrift_field_MyIntField;
}

const ::std::string& MyStruct::get_MyStringField() const& {
  return __fbthrift_field_MyStringField;
}

::std::string MyStruct::get_MyStringField() && {
  return static_cast<::std::string&&>(__fbthrift_field_MyStringField);
}

const ::cpp2::MyDataItem& MyStruct::get_MyDataField() const& {
  return __fbthrift_field_MyDataField;
}

::cpp2::MyDataItem MyStruct::get_MyDataField() && {
  return static_cast<::cpp2::MyDataItem&&>(__fbthrift_field_MyDataField);
}

::cpp2::MyEnum MyStruct::get_myEnum() const {
  return __fbthrift_field_myEnum;
}

::cpp2::MyEnum& MyStruct::set_myEnum(::cpp2::MyEnum myEnum_) {
  myEnum_ref() = myEnum_;
  return __fbthrift_field_myEnum;
}

bool MyStruct::get_oneway() const {
  return __fbthrift_field_oneway;
}

bool& MyStruct::set_oneway(bool oneway_) {
  oneway_ref() = oneway_;
  return __fbthrift_field_oneway;
}

bool MyStruct::get_readonly() const {
  return __fbthrift_field_readonly;
}

bool& MyStruct::set_readonly(bool readonly_) {
  readonly_ref() = readonly_;
  return __fbthrift_field_readonly;
}

bool MyStruct::get_idempotent() const {
  return __fbthrift_field_idempotent;
}

bool& MyStruct::set_idempotent(bool idempotent_) {
  idempotent_ref() = idempotent_;
  return __fbthrift_field_idempotent;
}

void swap([[maybe_unused]] MyStruct& a, [[maybe_unused]] MyStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_MyIntField, b.__fbthrift_field_MyIntField);
  swap(a.__fbthrift_field_MyStringField, b.__fbthrift_field_MyStringField);
  swap(a.__fbthrift_field_MyDataField, b.__fbthrift_field_MyDataField);
  swap(a.__fbthrift_field_myEnum, b.__fbthrift_field_myEnum);
  swap(a.__fbthrift_field_oneway, b.__fbthrift_field_oneway);
  swap(a.__fbthrift_field_readonly, b.__fbthrift_field_readonly);
  swap(a.__fbthrift_field_idempotent, b.__fbthrift_field_idempotent);
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyDataItem>,
    "inconsistent use of json option");

} // namespace cpp2

namespace cpp2 { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace cpp2
namespace apache::thrift::detail::annotation {
}
