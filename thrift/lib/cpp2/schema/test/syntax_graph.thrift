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

include "thrift/annotation/scope.thrift"
include "thrift/annotation/thrift.thrift"

namespace cpp2 apache.thrift.schema.test

@thrift.Uri{value = "meta.com/thrift_test/TestEnum"}
enum TestEnum {
  UNSET = 0,
  VALUE_1 = 1,
  VALUE_2 = 2,
}

struct TestStruct {
  1: i32 field1 = 10;
  2: optional TestEnum field2;
}

struct TestRecursiveStruct {
  @thrift.Box
  1: optional TestRecursiveStruct myself;
}

@thrift.Uri{value = "meta.com/thrift_test/TestStructuredAnnotation"}
@scope.Definition
struct TestStructuredAnnotation {
  1: i64 field1;
}

typedef list<TestStruct> ListOfTestStruct
typedef ListOfTestStruct TypedefToListOfTestStruct

@TestStructuredAnnotation{field1 = 3}
union TestUnion {
  1: TestStruct s;
  2: TestEnum e;
}

exception TestException {
  1: binary blob;
}

const TestStruct testConst = TestStruct{field1 = 2, field2 = VALUE_1};

interaction TestInteraction {
  i32 foo(1: TestRecursiveStruct input);
}

service TestService {
  TestStruct foo(1: i32 input);
  TestInteraction createInteraction();
  i32, stream<i32> createStream();
  TestInteraction, i32, stream<i32> createInteractionAndStream();
}
