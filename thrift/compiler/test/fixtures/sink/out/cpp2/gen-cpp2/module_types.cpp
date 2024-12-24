/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/sink/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_data.h"
[[maybe_unused]] static constexpr std::string_view kModuleName = "module";


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::InitialResponse>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::InitialResponse>;
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

std::string_view InitialResponse::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<InitialResponse>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view InitialResponse::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<InitialResponse>::name;
}

InitialResponse::InitialResponse(const InitialResponse&) = default;
InitialResponse& InitialResponse::operator=(const InitialResponse&) = default;
InitialResponse::InitialResponse() {
}


InitialResponse::~InitialResponse() {}

InitialResponse::InitialResponse([[maybe_unused]] InitialResponse&& other) noexcept :
    __fbthrift_field_content(std::move(other.__fbthrift_field_content)),
    __isset(other.__isset) {
}

InitialResponse& InitialResponse::operator=([[maybe_unused]] InitialResponse&& other) noexcept {
    this->__fbthrift_field_content = std::move(other.__fbthrift_field_content);
    __isset = other.__isset;
    return *this;
}


InitialResponse::InitialResponse(apache::thrift::FragileConstructor, ::std::string content__arg) :
    __fbthrift_field_content(std::move(content__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void InitialResponse::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_content = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void InitialResponse::__fbthrift_clear_terse_fields() {
}

bool InitialResponse::__fbthrift_is_empty() const {
  return false;
}

bool InitialResponse::operator==([[maybe_unused]] const InitialResponse& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool InitialResponse::operator<([[maybe_unused]] const InitialResponse& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


const ::std::string& InitialResponse::get_content() const& {
  return __fbthrift_field_content;
}

::std::string InitialResponse::get_content() && {
  return static_cast<::std::string&&>(__fbthrift_field_content);
}

void swap([[maybe_unused]] InitialResponse& a, [[maybe_unused]] InitialResponse& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_content, b.__fbthrift_field_content);
  swap(a.__isset, b.__isset);
}

template void InitialResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t InitialResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t InitialResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t InitialResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void InitialResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t InitialResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t InitialResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t InitialResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FinalResponse>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FinalResponse>;
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

std::string_view FinalResponse::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<FinalResponse>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view FinalResponse::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<FinalResponse>::name;
}

FinalResponse::FinalResponse(const FinalResponse&) = default;
FinalResponse& FinalResponse::operator=(const FinalResponse&) = default;
FinalResponse::FinalResponse() {
}


FinalResponse::~FinalResponse() {}

FinalResponse::FinalResponse([[maybe_unused]] FinalResponse&& other) noexcept :
    __fbthrift_field_content(std::move(other.__fbthrift_field_content)),
    __isset(other.__isset) {
}

FinalResponse& FinalResponse::operator=([[maybe_unused]] FinalResponse&& other) noexcept {
    this->__fbthrift_field_content = std::move(other.__fbthrift_field_content);
    __isset = other.__isset;
    return *this;
}


FinalResponse::FinalResponse(apache::thrift::FragileConstructor, ::std::string content__arg) :
    __fbthrift_field_content(std::move(content__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void FinalResponse::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_content = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void FinalResponse::__fbthrift_clear_terse_fields() {
}

bool FinalResponse::__fbthrift_is_empty() const {
  return false;
}

bool FinalResponse::operator==([[maybe_unused]] const FinalResponse& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool FinalResponse::operator<([[maybe_unused]] const FinalResponse& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


const ::std::string& FinalResponse::get_content() const& {
  return __fbthrift_field_content;
}

::std::string FinalResponse::get_content() && {
  return static_cast<::std::string&&>(__fbthrift_field_content);
}

void swap([[maybe_unused]] FinalResponse& a, [[maybe_unused]] FinalResponse& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_content, b.__fbthrift_field_content);
  swap(a.__isset, b.__isset);
}

template void FinalResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FinalResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FinalResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FinalResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FinalResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FinalResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FinalResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FinalResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SinkPayload>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SinkPayload>;
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

std::string_view SinkPayload::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<SinkPayload>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view SinkPayload::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<SinkPayload>::name;
}

SinkPayload::SinkPayload(const SinkPayload&) = default;
SinkPayload& SinkPayload::operator=(const SinkPayload&) = default;
SinkPayload::SinkPayload() {
}


SinkPayload::~SinkPayload() {}

SinkPayload::SinkPayload([[maybe_unused]] SinkPayload&& other) noexcept :
    __fbthrift_field_content(std::move(other.__fbthrift_field_content)),
    __isset(other.__isset) {
}

SinkPayload& SinkPayload::operator=([[maybe_unused]] SinkPayload&& other) noexcept {
    this->__fbthrift_field_content = std::move(other.__fbthrift_field_content);
    __isset = other.__isset;
    return *this;
}


SinkPayload::SinkPayload(apache::thrift::FragileConstructor, ::std::string content__arg) :
    __fbthrift_field_content(std::move(content__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void SinkPayload::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_content = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void SinkPayload::__fbthrift_clear_terse_fields() {
}

bool SinkPayload::__fbthrift_is_empty() const {
  return false;
}

bool SinkPayload::operator==([[maybe_unused]] const SinkPayload& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool SinkPayload::operator<([[maybe_unused]] const SinkPayload& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


const ::std::string& SinkPayload::get_content() const& {
  return __fbthrift_field_content;
}

::std::string SinkPayload::get_content() && {
  return static_cast<::std::string&&>(__fbthrift_field_content);
}

void swap([[maybe_unused]] SinkPayload& a, [[maybe_unused]] SinkPayload& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_content, b.__fbthrift_field_content);
  swap(a.__isset, b.__isset);
}

template void SinkPayload::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkPayload::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkPayload::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkPayload::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkPayload::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkPayload::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkPayload::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkPayload::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::CompatibleWithKeywordSink>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::CompatibleWithKeywordSink>;
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

std::string_view CompatibleWithKeywordSink::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<CompatibleWithKeywordSink>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view CompatibleWithKeywordSink::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<CompatibleWithKeywordSink>::name;
}

CompatibleWithKeywordSink::CompatibleWithKeywordSink(const CompatibleWithKeywordSink&) = default;
CompatibleWithKeywordSink& CompatibleWithKeywordSink::operator=(const CompatibleWithKeywordSink&) = default;
CompatibleWithKeywordSink::CompatibleWithKeywordSink() {
}


CompatibleWithKeywordSink::~CompatibleWithKeywordSink() {}

CompatibleWithKeywordSink::CompatibleWithKeywordSink([[maybe_unused]] CompatibleWithKeywordSink&& other) noexcept :
    __fbthrift_field_sink(std::move(other.__fbthrift_field_sink)),
    __isset(other.__isset) {
}

CompatibleWithKeywordSink& CompatibleWithKeywordSink::operator=([[maybe_unused]] CompatibleWithKeywordSink&& other) noexcept {
    this->__fbthrift_field_sink = std::move(other.__fbthrift_field_sink);
    __isset = other.__isset;
    return *this;
}


CompatibleWithKeywordSink::CompatibleWithKeywordSink(apache::thrift::FragileConstructor, ::std::string sink__arg) :
    __fbthrift_field_sink(std::move(sink__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void CompatibleWithKeywordSink::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_sink = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void CompatibleWithKeywordSink::__fbthrift_clear_terse_fields() {
}

bool CompatibleWithKeywordSink::__fbthrift_is_empty() const {
  return false;
}

bool CompatibleWithKeywordSink::operator==([[maybe_unused]] const CompatibleWithKeywordSink& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool CompatibleWithKeywordSink::operator<([[maybe_unused]] const CompatibleWithKeywordSink& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


const ::std::string& CompatibleWithKeywordSink::get_sink() const& {
  return __fbthrift_field_sink;
}

::std::string CompatibleWithKeywordSink::get_sink() && {
  return static_cast<::std::string&&>(__fbthrift_field_sink);
}

void swap([[maybe_unused]] CompatibleWithKeywordSink& a, [[maybe_unused]] CompatibleWithKeywordSink& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_sink, b.__fbthrift_field_sink);
  swap(a.__isset, b.__isset);
}

template void CompatibleWithKeywordSink::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t CompatibleWithKeywordSink::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t CompatibleWithKeywordSink::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t CompatibleWithKeywordSink::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void CompatibleWithKeywordSink::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t CompatibleWithKeywordSink::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t CompatibleWithKeywordSink::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t CompatibleWithKeywordSink::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::InitialException>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::InitialException>;
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

std::string_view InitialException::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<InitialException>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view InitialException::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<InitialException>::name;
}

InitialException::InitialException(const InitialException&) = default;
InitialException& InitialException::operator=(const InitialException&) = default;
InitialException::InitialException() {
}


InitialException::~InitialException() {}

InitialException::InitialException([[maybe_unused]] InitialException&& other) noexcept :
    __fbthrift_field_reason(std::move(other.__fbthrift_field_reason)),
    __isset(other.__isset) {
}

InitialException& InitialException::operator=([[maybe_unused]] InitialException&& other) noexcept {
    this->__fbthrift_field_reason = std::move(other.__fbthrift_field_reason);
    __isset = other.__isset;
    return *this;
}


InitialException::InitialException(apache::thrift::FragileConstructor, ::std::string reason__arg) :
    __fbthrift_field_reason(std::move(reason__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void InitialException::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_reason = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void InitialException::__fbthrift_clear_terse_fields() {
}

bool InitialException::__fbthrift_is_empty() const {
  return false;
}

bool InitialException::operator==([[maybe_unused]] const InitialException& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool InitialException::operator<([[maybe_unused]] const InitialException& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


const ::std::string& InitialException::get_reason() const& {
  return __fbthrift_field_reason;
}

::std::string InitialException::get_reason() && {
  return static_cast<::std::string&&>(__fbthrift_field_reason);
}

void swap([[maybe_unused]] InitialException& a, [[maybe_unused]] InitialException& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_reason, b.__fbthrift_field_reason);
  swap(a.__isset, b.__isset);
}

template void InitialException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t InitialException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t InitialException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t InitialException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void InitialException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t InitialException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t InitialException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t InitialException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SinkException1>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SinkException1>;
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

std::string_view SinkException1::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<SinkException1>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view SinkException1::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<SinkException1>::name;
}

SinkException1::SinkException1(const SinkException1&) = default;
SinkException1& SinkException1::operator=(const SinkException1&) = default;
SinkException1::SinkException1() {
}


SinkException1::~SinkException1() {}

SinkException1::SinkException1([[maybe_unused]] SinkException1&& other) noexcept :
    __fbthrift_field_reason(std::move(other.__fbthrift_field_reason)),
    __isset(other.__isset) {
}

SinkException1& SinkException1::operator=([[maybe_unused]] SinkException1&& other) noexcept {
    this->__fbthrift_field_reason = std::move(other.__fbthrift_field_reason);
    __isset = other.__isset;
    return *this;
}


SinkException1::SinkException1(apache::thrift::FragileConstructor, ::std::string reason__arg) :
    __fbthrift_field_reason(std::move(reason__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void SinkException1::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_reason = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void SinkException1::__fbthrift_clear_terse_fields() {
}

bool SinkException1::__fbthrift_is_empty() const {
  return false;
}

bool SinkException1::operator==([[maybe_unused]] const SinkException1& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool SinkException1::operator<([[maybe_unused]] const SinkException1& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


const ::std::string& SinkException1::get_reason() const& {
  return __fbthrift_field_reason;
}

::std::string SinkException1::get_reason() && {
  return static_cast<::std::string&&>(__fbthrift_field_reason);
}

void swap([[maybe_unused]] SinkException1& a, [[maybe_unused]] SinkException1& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_reason, b.__fbthrift_field_reason);
  swap(a.__isset, b.__isset);
}

template void SinkException1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkException1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkException1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkException1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkException1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkException1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkException1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkException1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SinkException2>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SinkException2>;
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

std::string_view SinkException2::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<SinkException2>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view SinkException2::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<SinkException2>::name;
}

SinkException2::SinkException2(const SinkException2&) = default;
SinkException2& SinkException2::operator=(const SinkException2&) = default;
SinkException2::SinkException2() :
    __fbthrift_field_reason() {
}


SinkException2::~SinkException2() {}

SinkException2::SinkException2([[maybe_unused]] SinkException2&& other) noexcept :
    __fbthrift_field_reason(std::move(other.__fbthrift_field_reason)),
    __isset(other.__isset) {
}

SinkException2& SinkException2::operator=([[maybe_unused]] SinkException2&& other) noexcept {
    this->__fbthrift_field_reason = std::move(other.__fbthrift_field_reason);
    __isset = other.__isset;
    return *this;
}


SinkException2::SinkException2(apache::thrift::FragileConstructor, ::std::int64_t reason__arg) :
    __fbthrift_field_reason(std::move(reason__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void SinkException2::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_reason = ::std::int64_t();
  __isset = {};
}

void SinkException2::__fbthrift_clear_terse_fields() {
}

bool SinkException2::__fbthrift_is_empty() const {
  return false;
}

bool SinkException2::operator==([[maybe_unused]] const SinkException2& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool SinkException2::operator<([[maybe_unused]] const SinkException2& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


::std::int64_t SinkException2::get_reason() const {
  return __fbthrift_field_reason;
}

::std::int64_t& SinkException2::set_reason(::std::int64_t reason_) {
  reason_ref() = reason_;
  return __fbthrift_field_reason;
}

void swap([[maybe_unused]] SinkException2& a, [[maybe_unused]] SinkException2& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_reason, b.__fbthrift_field_reason);
  swap(a.__isset, b.__isset);
}

template void SinkException2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkException2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkException2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkException2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkException2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkException2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkException2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkException2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace cpp2 { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace cpp2
namespace apache::thrift::detail::annotation {
}
