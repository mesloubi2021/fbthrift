/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/field_interceptor/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/field_interceptor/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::InterceptedFields>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.InterceptedFields", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InterceptedFields = res.first->second;
  module_InterceptedFields.name() = "module.InterceptedFields";
  module_InterceptedFields.is_union() = false;
  static const auto* const
  module_InterceptedFields_fields = new std::array<EncodedThriftField, 6>{ {
    { 1, "access_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.FieldInterceptor", { {"name", cvString("my::FieldInterceptor") }, {"noinline", cvBool(true) } }).cv_struct_ref(), }},    { 2, "access_shared_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.FieldInterceptor", { {"name", cvString("my::FieldInterceptor") } }).cv_struct_ref(), *cvStruct("cpp.Ref", { {"type", cvInteger(2) } }).cv_struct_ref(), *cvStruct("cpp.AllowLegacyNonOptionalRef", {  }).cv_struct_ref(), }},    { 3, "access_optional_shared_field", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.FieldInterceptor", { {"name", cvString("my::FieldInterceptor") } }).cv_struct_ref(), *cvStruct("cpp.Ref", { {"type", cvInteger(2) } }).cv_struct_ref(), }},    { 4, "access_shared_const_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.FieldInterceptor", { {"name", cvString("my::FieldInterceptor") } }).cv_struct_ref(), *cvStruct("cpp.Ref", { {"type", cvInteger(1) } }).cv_struct_ref(), *cvStruct("cpp.AllowLegacyNonOptionalRef", {  }).cv_struct_ref(), }},    { 5, "access_optional_shared_const_field", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.FieldInterceptor", { {"name", cvString("my::FieldInterceptor") } }).cv_struct_ref(), *cvStruct("cpp.Ref", { {"type", cvInteger(1) } }).cv_struct_ref(), }},    { 6, "access_optional_boxed_field", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.FieldInterceptor", { {"name", cvString("my::FieldInterceptor") } }).cv_struct_ref(), *cvStruct("thrift.Box", {  }).cv_struct_ref(), }},  }};
  for (const auto& f : *module_InterceptedFields_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_InterceptedFields.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
