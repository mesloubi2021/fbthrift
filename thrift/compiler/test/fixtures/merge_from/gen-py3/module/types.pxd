#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional
cimport facebook.thrift.annotation.meta.types as _facebook_thrift_annotation_meta_types
cimport foo.types as _foo_types

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "src/gen-py3/module/types.h":
  pass





cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cFields "::cpp2::Fields":
        cFields() except +
        cFields(const cFields&) except +
        bint operator==(cFields&)
        bint operator!=(cFields&)
        bint operator<(cFields&)
        bint operator>(cFields&)
        bint operator<=(cFields&)
        bint operator>=(cFields&)
        __field_ref[string] injected_field_ref()


    cdef cppclass cFieldsInjectedToEmptyStruct "::cpp2::FieldsInjectedToEmptyStruct":
        cFieldsInjectedToEmptyStruct() except +
        cFieldsInjectedToEmptyStruct(const cFieldsInjectedToEmptyStruct&) except +
        bint operator==(cFieldsInjectedToEmptyStruct&)
        bint operator!=(cFieldsInjectedToEmptyStruct&)
        bint operator<(cFieldsInjectedToEmptyStruct&)
        bint operator>(cFieldsInjectedToEmptyStruct&)
        bint operator<=(cFieldsInjectedToEmptyStruct&)
        bint operator>=(cFieldsInjectedToEmptyStruct&)
        __field_ref[string] injected_field_ref()


    cdef cppclass cFieldsInjectedToStruct "::cpp2::FieldsInjectedToStruct":
        cFieldsInjectedToStruct() except +
        cFieldsInjectedToStruct(const cFieldsInjectedToStruct&) except +
        bint operator==(cFieldsInjectedToStruct&)
        bint operator!=(cFieldsInjectedToStruct&)
        bint operator<(cFieldsInjectedToStruct&)
        bint operator>(cFieldsInjectedToStruct&)
        bint operator<=(cFieldsInjectedToStruct&)
        bint operator>=(cFieldsInjectedToStruct&)
        __field_ref[string] string_field_ref()
        __field_ref[string] injected_field_ref()


    cdef cppclass cFieldsInjectedWithIncludedStruct "::cpp2::FieldsInjectedWithIncludedStruct":
        cFieldsInjectedWithIncludedStruct() except +
        cFieldsInjectedWithIncludedStruct(const cFieldsInjectedWithIncludedStruct&) except +
        bint operator==(cFieldsInjectedWithIncludedStruct&)
        bint operator!=(cFieldsInjectedWithIncludedStruct&)
        bint operator<(cFieldsInjectedWithIncludedStruct&)
        bint operator>(cFieldsInjectedWithIncludedStruct&)
        bint operator<=(cFieldsInjectedWithIncludedStruct&)
        bint operator>=(cFieldsInjectedWithIncludedStruct&)
        __field_ref[string] string_field_ref()
        __field_ref[string] injected_field_ref()
        __optional_field_ref[string] injected_structured_annotation_field_ref()
        __optional_field_ref[string] injected_unstructured_annotation_field_ref()




cdef class Fields(thrift.py3.types.Struct):
    cdef shared_ptr[cFields] _cpp_obj
    cdef _fbthrift_types_fields.__Fields_FieldsSetter _fields_setter
    cdef inline object injected_field_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFields])



cdef class FieldsInjectedToEmptyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cFieldsInjectedToEmptyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__FieldsInjectedToEmptyStruct_FieldsSetter _fields_setter
    cdef inline object injected_field_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFieldsInjectedToEmptyStruct])



cdef class FieldsInjectedToStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cFieldsInjectedToStruct] _cpp_obj
    cdef _fbthrift_types_fields.__FieldsInjectedToStruct_FieldsSetter _fields_setter
    cdef inline object string_field_impl(self)
    cdef inline object injected_field_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFieldsInjectedToStruct])



cdef class FieldsInjectedWithIncludedStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cFieldsInjectedWithIncludedStruct] _cpp_obj
    cdef _fbthrift_types_fields.__FieldsInjectedWithIncludedStruct_FieldsSetter _fields_setter
    cdef inline object string_field_impl(self)
    cdef inline object injected_field_impl(self)
    cdef inline object injected_structured_annotation_field_impl(self)
    cdef inline object injected_unstructured_annotation_field_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFieldsInjectedWithIncludedStruct])



