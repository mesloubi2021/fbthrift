/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_metadata.h"

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

void EnumMetadata<::cpp2::MyEnumA>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("module.MyEnumA", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "module.MyEnumA";
  using EnumTraits = TEnumTraits<::cpp2::MyEnumA>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SmallStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.SmallStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SmallStruct = res.first->second;
  module_SmallStruct.name_ref() = "module.SmallStruct";
  module_SmallStruct.is_union_ref() = false;
  static const EncodedThriftField
  module_SmallStruct_fields[] = {
    {1, "small_A", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "small_B", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_SmallStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_SmallStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::containerStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.containerStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_containerStruct = res.first->second;
  module_containerStruct.name_ref() = "module.containerStruct";
  module_containerStruct.is_union_ref() = false;
  static const EncodedThriftField
  module_containerStruct_fields[] = {
    {1, "fieldA", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "fieldB", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)), std::vector<ThriftConstStruct>{}},
    {3, "fieldC", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
    {4, "fieldD", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "fieldE", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "fieldF", false, std::make_unique<List>(std::make_unique<List>(std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)))), std::vector<ThriftConstStruct>{}},
    {7, "fieldG", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)))), std::vector<ThriftConstStruct>{}},
    {8, "fieldH", false, std::make_unique<List>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))), std::vector<ThriftConstStruct>{}},
    {9, "fieldI", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {10, "fieldJ", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))), std::vector<ThriftConstStruct>{}},
    {11, "fieldK", false, std::make_unique<List>(std::make_unique<List>(std::make_unique<List>(std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))))), std::vector<ThriftConstStruct>{}},
    {12, "fieldL", false, std::make_unique<Set>(std::make_unique<Set>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)))), std::vector<ThriftConstStruct>{}},
    {13, "fieldM", false, std::make_unique<Map>(std::make_unique<Set>(std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))), std::make_unique<Map>(std::make_unique<List>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))), std::vector<ThriftConstStruct>{}},
    {14, "fieldN", false, std::make_unique<List>(std::make_unique<Typedef>("module.IndirectionA", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{})), std::vector<ThriftConstStruct>{}},
    {15, "fieldO", false, std::make_unique<List>(std::make_unique<Typedef>("module.IndirectionB", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{})), std::vector<ThriftConstStruct>{}},
    {16, "fieldP", false, std::make_unique<List>(std::make_unique<Typedef>("module.IndirectionC", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{})), std::vector<ThriftConstStruct>{}},
    {17, "fieldQ", false, std::make_unique<Enum<::cpp2::MyEnumA>>("module.MyEnumA"), std::vector<ThriftConstStruct>{}},
    {18, "fieldR", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)), std::vector<ThriftConstStruct>{}},
    {19, "fieldS", false, std::make_unique<Struct<::cpp2::SmallStruct>>("module.SmallStruct"), std::vector<ThriftConstStruct>{}},
    {20, "fieldT", false, std::make_unique<Struct<::cpp2::SmallStruct>>("module.SmallStruct"), std::vector<ThriftConstStruct>{}},
    {21, "fieldU", false, std::make_unique<Struct<::cpp2::SmallStruct>>("module.SmallStruct"), std::vector<ThriftConstStruct>{}},
    {23, "fieldX", false, std::make_unique<Struct<::cpp2::SmallStruct>>("module.SmallStruct"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_containerStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_containerStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
