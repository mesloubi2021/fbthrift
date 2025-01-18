#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
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
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.std_libcpp cimport string_view as __cstring_view
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    StructFieldsSetter as __StructFieldsSetter
)
from thrift.python.protocol cimport Protocol as __Protocol
from folly.optional cimport cOptional as __cOptional


cimport test.namespace_from_package_without_module_name.module.types as _test_namespace_from_package_without_module_name_module_types
cimport test.namespace_from_package_without_module_name.module.cbindings as _test_namespace_from_package_without_module_name_module_cbindings



ctypedef void (*__Foo_FieldsSetterFunc)(__Foo_FieldsSetter, object) except *

cdef class __Foo_FieldsSetter(__StructFieldsSetter):
    cdef _test_namespace_from_package_without_module_name_module_cbindings.cFoo* _struct_cpp_obj
    cdef cumap[__cstring_view, __Foo_FieldsSetterFunc] _setters

    @staticmethod
    cdef __Foo_FieldsSetter _fbthrift_create(_test_namespace_from_package_without_module_name_module_cbindings.cFoo* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *

