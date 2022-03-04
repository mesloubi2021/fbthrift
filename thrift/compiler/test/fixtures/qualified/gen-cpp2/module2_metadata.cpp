/**
 * Autogenerated by Thrift for src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_metadata.h"

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
StructMetadata<::module2::Struct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module2.Struct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module2_Struct = res.first->second;
  module2_Struct.name_ref() = "module2.Struct";
  module2_Struct.is_union_ref() = false;
  static const EncodedThriftField
  module2_Struct_fields[] = {
    {1, "first", false, std::make_unique<Struct<::module0::Struct>>("module0.Struct"), std::vector<ThriftConstStruct>{}},
    {2, "second", false, std::make_unique<Struct<::module1::Struct>>("module1.Struct"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module2_Struct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module2_Struct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::module2::BigStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module2.BigStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module2_BigStruct = res.first->second;
  module2_BigStruct.name_ref() = "module2.BigStruct";
  module2_BigStruct.is_union_ref() = false;
  static const EncodedThriftField
  module2_BigStruct_fields[] = {
    {1, "s", false, std::make_unique<Struct<::module2::Struct>>("module2.Struct"), std::vector<ThriftConstStruct>{}},
    {2, "id", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module2_BigStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module2_BigStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
