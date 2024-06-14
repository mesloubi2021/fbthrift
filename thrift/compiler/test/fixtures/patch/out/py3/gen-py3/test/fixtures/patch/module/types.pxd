#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/patch/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_map cimport unordered_map as cumap
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.exceptions cimport cTException
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.python.common cimport cThriftMetadata as __fbthrift_cThriftMetadata
cimport apache.thrift.op.patch.types as _apache_thrift_op_patch_types
cimport apache.thrift.type.standard.types as _apache_thrift_type_standard_types
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport test.fixtures.patch.module.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/patch/gen-py3/module/types.h":
  pass


cdef extern from "thrift/compiler/test/fixtures/patch/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/patch/gen-cpp2/module_types.h" namespace "::test::fixtures::patch":
    cdef cppclass cMyEnum "::test::fixtures::patch::MyEnum":
        pass





cdef class MyEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "thrift/compiler/test/fixtures/patch/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/patch/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/patch/gen-cpp2/module_types_custom_protocol.h" namespace "::test::fixtures::patch":

    cdef cppclass cMyData "::test::fixtures::patch::MyData":
        cMyData() except +
        cMyData(const cMyData&) except +
        bint operator==(cMyData&)
        bint operator!=(cMyData&)
        bint operator<(cMyData&)
        bint operator>(cMyData&)
        bint operator<=(cMyData&)
        bint operator>=(cMyData&)
        __terse_field_ref[string] data1_ref "data1_ref" ()
        __terse_field_ref[cint32_t] data2_ref "data2_ref" ()


    cdef cppclass cMyDataWithCustomDefault "::test::fixtures::patch::MyDataWithCustomDefault":
        cMyDataWithCustomDefault() except +
        cMyDataWithCustomDefault(const cMyDataWithCustomDefault&) except +
        bint operator==(cMyDataWithCustomDefault&)
        bint operator!=(cMyDataWithCustomDefault&)
        bint operator<(cMyDataWithCustomDefault&)
        bint operator>(cMyDataWithCustomDefault&)
        bint operator<=(cMyDataWithCustomDefault&)
        bint operator>=(cMyDataWithCustomDefault&)
        __terse_field_ref[string] data1_ref "data1_ref" ()
        __terse_field_ref[cint32_t] data2_ref "data2_ref" ()

    cdef enum cInnerUnion__type "::test::fixtures::patch::InnerUnion::Type":
        cInnerUnion__type___EMPTY__ "::test::fixtures::patch::InnerUnion::Type::__EMPTY__",
        cInnerUnion__type_innerOption "::test::fixtures::patch::InnerUnion::Type::innerOption",

    cdef cppclass cInnerUnion "::test::fixtures::patch::InnerUnion":
        cInnerUnion() except +
        cInnerUnion(const cInnerUnion&) except +
        bint operator==(cInnerUnion&)
        bint operator!=(cInnerUnion&)
        bint operator<(cInnerUnion&)
        bint operator>(cInnerUnion&)
        bint operator<=(cInnerUnion&)
        bint operator>=(cInnerUnion&)
        cInnerUnion__type getType() const
        const string& get_innerOption "get_innerOption" () const
        string& set_innerOption "set_innerOption" (const string&)

    cdef enum cMyUnion__type "::test::fixtures::patch::MyUnion::Type":
        cMyUnion__type___EMPTY__ "::test::fixtures::patch::MyUnion::Type::__EMPTY__",
        cMyUnion__type_option1 "::test::fixtures::patch::MyUnion::Type::option1",
        cMyUnion__type_option2 "::test::fixtures::patch::MyUnion::Type::option2",
        cMyUnion__type_option3 "::test::fixtures::patch::MyUnion::Type::option3",

    cdef cppclass cMyUnion "::test::fixtures::patch::MyUnion":
        cMyUnion() except +
        cMyUnion(const cMyUnion&) except +
        bint operator==(cMyUnion&)
        bint operator!=(cMyUnion&)
        bint operator<(cMyUnion&)
        bint operator>(cMyUnion&)
        bint operator<=(cMyUnion&)
        bint operator>=(cMyUnion&)
        cMyUnion__type getType() const
        const string& get_option1 "get_option1" () const
        string& set_option1 "set_option1" (const string&)
        const cint32_t& get_option2 "get_option2" () const
        cint32_t& set_option2 "set_option2" (const cint32_t&)
        const cInnerUnion& get_option3 "get_option3" () const
        cInnerUnion& set_option3 "set_option3" (const cInnerUnion&)


    cdef cppclass cMyStruct "::test::fixtures::patch::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        bint operator!=(cMyStruct&)
        bint operator<(cMyStruct&)
        bint operator>(cMyStruct&)
        bint operator<=(cMyStruct&)
        bint operator>=(cMyStruct&)
        __terse_field_ref[cbool] boolVal_ref "boolVal_ref" ()
        __terse_field_ref[cint8_t] byteVal_ref "byteVal_ref" ()
        __terse_field_ref[cint16_t] i16Val_ref "i16Val_ref" ()
        __terse_field_ref[cint32_t] i32Val_ref "i32Val_ref" ()
        __terse_field_ref[cint64_t] i64Val_ref "i64Val_ref" ()
        __terse_field_ref[float] floatVal_ref "floatVal_ref" ()
        __terse_field_ref[double] doubleVal_ref "doubleVal_ref" ()
        __terse_field_ref[string] stringVal_ref "stringVal_ref" ()
        __terse_field_ref[_fbthrift_iobuf.cIOBuf] binaryVal_ref "binaryVal_ref" ()
        __terse_field_ref[cMyEnum] enumVal_ref "enumVal_ref" ()
        __terse_field_ref[cMyData] structVal_ref "structVal_ref" ()
        __terse_field_ref[cMyUnion] unionVal_ref "unionVal_ref" ()
        __terse_field_ref[cLateDefStruct] lateStructVal_ref "lateStructVal_ref" ()
        __optional_field_ref[cbool] optBoolVal_ref "optBoolVal_ref" ()
        __optional_field_ref[cint8_t] optByteVal_ref "optByteVal_ref" ()
        __optional_field_ref[cint16_t] optI16Val_ref "optI16Val_ref" ()
        __optional_field_ref[cint32_t] optI32Val_ref "optI32Val_ref" ()
        __optional_field_ref[cint64_t] optI64Val_ref "optI64Val_ref" ()
        __optional_field_ref[float] optFloatVal_ref "optFloatVal_ref" ()
        __optional_field_ref[double] optDoubleVal_ref "optDoubleVal_ref" ()
        __optional_field_ref[string] optStringVal_ref "optStringVal_ref" ()
        __optional_field_ref[_fbthrift_iobuf.cIOBuf] optBinaryVal_ref "optBinaryVal_ref" ()
        __optional_field_ref[cMyEnum] optEnumVal_ref "optEnumVal_ref" ()
        __optional_field_ref[cMyData] optStructVal_ref "optStructVal_ref" ()
        __optional_field_ref[cLateDefStruct] optLateStructVal_ref "optLateStructVal_ref" ()
        __optional_field_ref[vector[cint16_t]] optListVal_ref "optListVal_ref" ()
        __optional_field_ref[cset[string]] optSetVal_ref "optSetVal_ref" ()
        __optional_field_ref[cmap[string,string]] optMapVal_ref "optMapVal_ref" ()
        __terse_field_ref[vector[cmap[string,cint32_t]]] listMap_ref "listMap_ref" ()
        __terse_field_ref[cmap[string,cmap[string,cint32_t]]] mapMap_ref "mapMap_ref" ()
        __terse_field_ref[cint32_t] i32WithCustomDefault_ref "i32WithCustomDefault_ref" ()
        __terse_field_ref[cMyDataWithCustomDefault] structWithCustomDefault_ref "structWithCustomDefault_ref" ()
        __terse_field_ref[cMyData] structWithFieldCustomDefault_ref "structWithFieldCustomDefault_ref" ()


    cdef cppclass cLateDefStruct "::test::fixtures::patch::LateDefStruct":
        cLateDefStruct() except +
        cLateDefStruct(const cLateDefStruct&) except +
        bint operator==(cLateDefStruct&)
        bint operator!=(cLateDefStruct&)
        bint operator<(cLateDefStruct&)
        bint operator>(cLateDefStruct&)
        bint operator<=(cLateDefStruct&)
        bint operator>=(cLateDefStruct&)


    cdef cppclass cRecursive "::test::fixtures::patch::Recursive":
        cRecursive() except +
        cRecursive(const cRecursive&) except +
        bint operator==(cRecursive&)
        bint operator!=(cRecursive&)
        bint operator<(cRecursive&)
        bint operator>(cRecursive&)
        bint operator<=(cRecursive&)
        bint operator>=(cRecursive&)
        __terse_field_ref[cmap[string,cRecursive]] nodes_ref "nodes_ref" ()


    cdef cppclass cBar "::test::fixtures::patch::Bar":
        cBar() except +
        cBar(const cBar&) except +
        bint operator==(cBar&)
        bint operator!=(cBar&)
        bint operator<(cBar&)
        bint operator>(cBar&)
        bint operator<=(cBar&)
        bint operator>=(cBar&)
        unique_ptr[cLoop] loop_ref "loop_ref" ()


    cdef cppclass cLoop "::test::fixtures::patch::Loop":
        cLoop() except +
        cLoop(const cLoop&) except +
        bint operator==(cLoop&)
        bint operator!=(cLoop&)
        bint operator<(cLoop&)
        bint operator>(cLoop&)
        bint operator<=(cLoop&)
        bint operator>=(cLoop&)
        __terse_field_ref[cBar] bar_ref "bar_ref" ()


    cdef cppclass cRefFields "::test::fixtures::patch::RefFields":
        cRefFields() except +
        cRefFields(const cRefFields&) except +
        bint operator==(cRefFields&)
        bint operator!=(cRefFields&)
        bint operator<(cRefFields&)
        bint operator>(cRefFields&)
        bint operator<=(cRefFields&)
        bint operator>=(cRefFields&)
        unique_ptr[vector[cint32_t]] unique_ref "unique_ref" ()
        shared_ptr[const vector[cint32_t]] shared_const_ref "shared_const_ref" ()
        shared_ptr[vector[cint32_t]] shared_mustable_ref "shared_mustable_ref" ()
        unique_ptr[vector[cint32_t]] opt_unique_ref "opt_unique_ref" ()
        shared_ptr[const vector[cint32_t]] opt_shared_const_ref "opt_shared_const_ref" ()
        shared_ptr[vector[cint32_t]] opt_shared_mustable_ref "opt_shared_mustable_ref" ()
        __optional_field_ref[vector[cint32_t]] opt_box_ref "opt_box_ref" ()




cdef class MyData(thrift.py3.types.Struct):
    cdef shared_ptr[cMyData] _cpp_obj
    cdef _fbthrift_types_fields.__MyData_FieldsSetter _fields_setter
    cdef inline object data1_impl(self)
    cdef inline object data2_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cMyData])



cdef class MyDataWithCustomDefault(thrift.py3.types.Struct):
    cdef shared_ptr[cMyDataWithCustomDefault] _cpp_obj
    cdef _fbthrift_types_fields.__MyDataWithCustomDefault_FieldsSetter _fields_setter
    cdef inline object data1_impl(self)
    cdef inline object data2_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cMyDataWithCustomDefault])

cdef class __InnerUnionType(thrift.py3.types.CompiledEnum):
    pass




cdef class InnerUnion(thrift.py3.types.Union):
    cdef shared_ptr[cInnerUnion] _cpp_obj
    cdef readonly __InnerUnionType type
    cdef readonly object value
    cdef _load_cache(InnerUnion self)

    @staticmethod
    cdef unique_ptr[cInnerUnion] _make_instance(
        cInnerUnion* base_instance,
        bytes innerOption
    ) except *

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cInnerUnion])

cdef class __MyUnionType(thrift.py3.types.CompiledEnum):
    pass




cdef class MyUnion(thrift.py3.types.Union):
    cdef shared_ptr[cMyUnion] _cpp_obj
    cdef readonly __MyUnionType type
    cdef readonly object value
    cdef _load_cache(MyUnion self)

    @staticmethod
    cdef unique_ptr[cMyUnion] _make_instance(
        cMyUnion* base_instance,
        str option1,
        object option2,
        InnerUnion option3
    ) except *

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cMyUnion])



cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object boolVal_impl(self)
    cdef inline object byteVal_impl(self)
    cdef inline object i16Val_impl(self)
    cdef inline object i32Val_impl(self)
    cdef inline object i64Val_impl(self)
    cdef inline object floatVal_impl(self)
    cdef inline object doubleVal_impl(self)
    cdef inline object stringVal_impl(self)
    cdef inline object binaryVal_impl(self)
    cdef inline object enumVal_impl(self)
    cdef inline object structVal_impl(self)
    cdef inline object unionVal_impl(self)
    cdef inline object lateStructVal_impl(self)
    cdef inline object optBoolVal_impl(self)
    cdef inline object optByteVal_impl(self)
    cdef inline object optI16Val_impl(self)
    cdef inline object optI32Val_impl(self)
    cdef inline object optI64Val_impl(self)
    cdef inline object optFloatVal_impl(self)
    cdef inline object optDoubleVal_impl(self)
    cdef inline object optStringVal_impl(self)
    cdef inline object optBinaryVal_impl(self)
    cdef inline object optEnumVal_impl(self)
    cdef inline object optStructVal_impl(self)
    cdef inline object optLateStructVal_impl(self)
    cdef inline object optListVal_impl(self)
    cdef inline object optSetVal_impl(self)
    cdef inline object optMapVal_impl(self)
    cdef inline object listMap_impl(self)
    cdef inline object mapMap_impl(self)
    cdef inline object i32WithCustomDefault_impl(self)
    cdef inline object structWithCustomDefault_impl(self)
    cdef inline object structWithFieldCustomDefault_impl(self)
    cdef _fbthrift_iobuf.IOBuf __fbthrift_cached_binaryVal
    cdef object __fbthrift_cached_enumVal
    cdef MyData __fbthrift_cached_structVal
    cdef MyUnion __fbthrift_cached_unionVal
    cdef LateDefStruct __fbthrift_cached_lateStructVal
    cdef _fbthrift_iobuf.IOBuf __fbthrift_cached_optBinaryVal
    cdef object __fbthrift_cached_optEnumVal
    cdef MyData __fbthrift_cached_optStructVal
    cdef LateDefStruct __fbthrift_cached_optLateStructVal
    cdef List__i16 __fbthrift_cached_optListVal
    cdef Set__string __fbthrift_cached_optSetVal
    cdef Map__string_string __fbthrift_cached_optMapVal
    cdef List__Map__string_i32 __fbthrift_cached_listMap
    cdef Map__string_Map__string_i32 __fbthrift_cached_mapMap
    cdef MyDataWithCustomDefault __fbthrift_cached_structWithCustomDefault
    cdef MyData __fbthrift_cached_structWithFieldCustomDefault

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cMyStruct])



cdef class LateDefStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cLateDefStruct] _cpp_obj
    cdef _fbthrift_types_fields.__LateDefStruct_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cLateDefStruct])



cdef class Recursive(thrift.py3.types.Struct):
    cdef shared_ptr[cRecursive] _cpp_obj
    cdef _fbthrift_types_fields.__Recursive_FieldsSetter _fields_setter
    cdef inline object nodes_impl(self)
    cdef Map__string_Recursive __fbthrift_cached_nodes

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cRecursive])



cdef class Bar(thrift.py3.types.Struct):
    cdef shared_ptr[cBar] _cpp_obj
    cdef _fbthrift_types_fields.__Bar_FieldsSetter _fields_setter
    cdef inline object loop_impl(self)
    cdef Loop __fbthrift_cached_loop

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cBar])



cdef class Loop(thrift.py3.types.Struct):
    cdef shared_ptr[cLoop] _cpp_obj
    cdef _fbthrift_types_fields.__Loop_FieldsSetter _fields_setter
    cdef inline object bar_impl(self)
    cdef Bar __fbthrift_cached_bar

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cLoop])



cdef class RefFields(thrift.py3.types.Struct):
    cdef shared_ptr[cRefFields] _cpp_obj
    cdef _fbthrift_types_fields.__RefFields_FieldsSetter _fields_setter
    cdef inline object unique_impl(self)
    cdef inline object shared_const_impl(self)
    cdef inline object shared_mustable_impl(self)
    cdef inline object opt_unique_impl(self)
    cdef inline object opt_shared_const_impl(self)
    cdef inline object opt_shared_mustable_impl(self)
    cdef inline object opt_box_impl(self)
    cdef List__i32 __fbthrift_cached_unique
    cdef List__i32 __fbthrift_cached_shared_const
    cdef List__i32 __fbthrift_cached_shared_mustable
    cdef List__i32 __fbthrift_cached_opt_unique
    cdef List__i32 __fbthrift_cached_opt_shared_const
    cdef List__i32 __fbthrift_cached_opt_shared_mustable
    cdef List__i32 __fbthrift_cached_opt_box

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cRefFields])


cdef class List__i16(thrift.py3.types.List):
    cdef shared_ptr[vector[cint16_t]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[cint16_t]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cint16_t]] List__i16__make_instance(object items) except *

cdef class Set__string(thrift.py3.types.Set):
    cdef shared_ptr[cset[string]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cset[string]])

cdef shared_ptr[cset[string]] Set__string__make_instance(object items) except *

cdef class Map__string_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,string]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,string]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,string]] Map__string_string__make_instance(object items) except *

cdef class Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cint32_t]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,cint32_t]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,cint32_t]] Map__string_i32__make_instance(object items) except *

cdef class List__Map__string_i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[string,cint32_t]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[cmap[string,cint32_t]]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cmap[string,cint32_t]]] List__Map__string_i32__make_instance(object items) except *

cdef class Map__string_Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,cmap[string,cint32_t]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] Map__string_Map__string_i32__make_instance(object items) except *

cdef class Map__string_Recursive(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cRecursive]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,cRecursive]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,cRecursive]] Map__string_Recursive__make_instance(object items) except *

cdef class List__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cint32_t]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[cint32_t]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cint32_t]] List__i32__make_instance(object items) except *


