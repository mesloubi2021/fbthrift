#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport unique_ptr, shared_ptr
from thrift.py3.types cimport assign_unique_ptr, assign_shared_ptr, assign_shared_const_ptr, make_unique

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast, BadEnum as _fbthrift_BadEnum


@__cython.auto_pickle(False)
cdef class __MyStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __MyStruct_FieldsSetter _fbthrift_create(_module_types.cMyStruct* struct_cpp_obj):
        cdef __MyStruct_FieldsSetter __fbthrift_inst = __MyStruct_FieldsSetter.__new__(__MyStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"MyIncludedField")] = __MyStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"MyOtherIncludedField")] = __MyStruct_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"MyIncludedInt")] = __MyStruct_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__MyStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __MyStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field MyIncludedField
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _includes_types.Included):
            raise TypeError(f'MyIncludedField is not a { _includes_types.Included !r}.')
        deref(self._struct_cpp_obj).MyIncludedField_ref().assign(deref((<_includes_types.Included?> _fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field MyOtherIncludedField
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyStruct](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _includes_types.Included):
            raise TypeError(f'MyOtherIncludedField is not a { _includes_types.Included !r}.')
        deref(self._struct_cpp_obj).MyOtherIncludedField_ref().assign(deref((<_includes_types.Included?> _fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field MyIncludedInt
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyStruct](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'MyIncludedInt is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).MyIncludedInt_ref().assign(_fbthrift_value)

