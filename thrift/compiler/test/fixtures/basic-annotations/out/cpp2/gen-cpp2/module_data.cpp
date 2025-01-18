/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyStructNestedAnnotation>::name = "MyStructNestedAnnotation";
THRIFT_DATA_MEMBER const std::array<std::string_view, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::fields_names = { {
  "name"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::fields_ids = { {
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::fields_types = { {
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::storage_names = { {
  "__fbthrift_field_name"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::isset_indexes = { {
  0,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::detail::YourUnion>::name = "MyUnion";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::detail::YourUnion>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::detail::YourUnion>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::detail::YourUnion>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::detail::YourUnion>::storage_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::detail::YourUnion>::isset_indexes = { {
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::detail::YourException>::name = "MyException";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::detail::YourException>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::detail::YourException>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::detail::YourException>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::detail::YourException>::storage_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::detail::YourException>::isset_indexes = { {
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::detail::YourStruct>::name = "MyStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 9> TStructDataStorage<::cpp2::detail::YourStruct>::fields_names = { {
  "major"sv,
  "abstract"sv,
  "annotation_with_quote"sv,
  "class_"sv,
  "annotation_with_trailing_comma"sv,
  "empty_annotations"sv,
  "my_enum"sv,
  "cpp_type_annotation"sv,
  "my_union"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 9> TStructDataStorage<::cpp2::detail::YourStruct>::fields_ids = { {
  2,
  1,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 9> TStructDataStorage<::cpp2::detail::YourStruct>::fields_types = { {
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 9> TStructDataStorage<::cpp2::detail::YourStruct>::storage_names = { {
  "__fbthrift_field_majorVer"sv,
  "__fbthrift_field_abstract"sv,
  "__fbthrift_field_annotation_with_quote"sv,
  "__fbthrift_field_class_"sv,
  "__fbthrift_field_annotation_with_trailing_comma"sv,
  "__fbthrift_field_empty_annotations"sv,
  "__fbthrift_field_my_enum"sv,
  "__fbthrift_field_cpp_type_annotation"sv,
  "__fbthrift_field_my_union"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 9> TStructDataStorage<::cpp2::detail::YourStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::SecretStruct>::name = "SecretStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::SecretStruct>::fields_names = { {
  "id"sv,
  "password"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::SecretStruct>::fields_ids = { {
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::SecretStruct>::fields_types = { {
  TType::T_I64,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::SecretStruct>::storage_names = { {
  "__fbthrift_field_id"sv,
  "__fbthrift_field_password"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::SecretStruct>::isset_indexes = { {
  0,
  1,
}};

} // namespace thrift
} // namespace apache
