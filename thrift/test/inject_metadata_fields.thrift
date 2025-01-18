/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

include "thrift/annotation/cpp.thrift"
include "thrift/annotation/internal.thrift"
include "thrift/test/clear.thrift"
include "thrift/test/inject_metadata_fields_annot.thrift"
include "thrift/annotation/thrift.thrift"

namespace cpp2 apache.thrift.test.inject_metadata_fields

enum MyEnum {
  ME0 = 0,
  ME1 = 1,
}

struct MyStruct {
  1: i32 int_field;
}

struct Struct {
  8: string string_field;
  9: binary binary_field;
  10: MyEnum enum_field;
  11: list<i16> list_field;
  12: set<i16> set_field;
  13: map<i16, i16> map_field;
  14: MyStruct struct_field;
}

// A struct that inejcts fields from another struct in the same program.
@internal.InjectMetadataFields{type = "Struct"}
struct InjectedEmptyStruct1 {
  1: bool bool_field;
  2: byte byte_field;
  3: i16 short_field;
  4: i32 int_field;
  5: i64 long_field;
  6: float float_field;
  7: double double_field;
}

// A struct that inejcts fields from another struct in a different program.
@internal.InjectMetadataFields{type = "clear.StructWithNoDefaultStruct"}
struct InjectedEmptyStruct2 {}

struct FieldsWithAnnotation {
  @thrift.Box
  1: optional i64 structured_boxed_field;
  @thrift.Box
  2: optional i64 unstructured_boxed_field;
}

@internal.InjectMetadataFields{type = "FieldsWithAnnotation"}
struct InjectedEmptyStruct3 {}

@inject_metadata_fields_annot.TransitiveInjectMetadataFields
struct InjectedEmptyStruct4 {}
