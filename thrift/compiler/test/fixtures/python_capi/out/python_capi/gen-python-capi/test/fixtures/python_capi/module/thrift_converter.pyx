
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from thrift.python.capi.cpp_converter cimport cpp_to_python, python_to_cpp
from libcpp.utility cimport move as cmove

cdef extern from "thrift/compiler/test/fixtures/python_capi/gen-python-capi/module/thrift_types_capi.h":
    pass

cdef cMyStruct MyStruct_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cMyStruct](inst))

cdef object MyStruct_from_cpp(const cMyStruct& c_struct):
    return cpp_to_python[cMyStruct](c_struct)

cdef cMyDataItem MyDataItem_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cMyDataItem](inst))

cdef object MyDataItem_from_cpp(const cMyDataItem& c_struct):
    return cpp_to_python[cMyDataItem](c_struct)

cdef cTransitiveDoubler TransitiveDoubler_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cTransitiveDoubler](inst))

cdef object TransitiveDoubler_from_cpp(const cTransitiveDoubler& c_struct):
    return cpp_to_python[cTransitiveDoubler](c_struct)

cdef cDoubledPair DoubledPair_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cDoubledPair](inst))

cdef object DoubledPair_from_cpp(const cDoubledPair& c_struct):
    return cpp_to_python[cDoubledPair](c_struct)

cdef cStringPair StringPair_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cStringPair](inst))

cdef object StringPair_from_cpp(const cStringPair& c_struct):
    return cpp_to_python[cStringPair](c_struct)

cdef cEmptyStruct EmptyStruct_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cEmptyStruct](inst))

cdef object EmptyStruct_from_cpp(const cEmptyStruct& c_struct):
    return cpp_to_python[cEmptyStruct](c_struct)

cdef cPrimitiveStruct PrimitiveStruct_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cPrimitiveStruct](inst))

cdef object PrimitiveStruct_from_cpp(const cPrimitiveStruct& c_struct):
    return cpp_to_python[cPrimitiveStruct](c_struct)

cdef cAdaptedFields AdaptedFields_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cAdaptedFields](inst))

cdef object AdaptedFields_from_cpp(const cAdaptedFields& c_struct):
    return cpp_to_python[cAdaptedFields](c_struct)

cdef cListStruct ListStruct_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cListStruct](inst))

cdef object ListStruct_from_cpp(const cListStruct& c_struct):
    return cpp_to_python[cListStruct](c_struct)

cdef cSetStruct SetStruct_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cSetStruct](inst))

cdef object SetStruct_from_cpp(const cSetStruct& c_struct):
    return cpp_to_python[cSetStruct](c_struct)

cdef cMapStruct MapStruct_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cMapStruct](inst))

cdef object MapStruct_from_cpp(const cMapStruct& c_struct):
    return cpp_to_python[cMapStruct](c_struct)

cdef cComposeStruct ComposeStruct_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cComposeStruct](inst))

cdef object ComposeStruct_from_cpp(const cComposeStruct& c_struct):
    return cpp_to_python[cComposeStruct](c_struct)

cdef cOnion Onion_convert_to_cpp(object inst) except *:
    return cmove(python_to_cpp[cOnion](inst))

cdef object Onion_from_cpp(const cOnion& c_struct):
    return cpp_to_python[cOnion](c_struct)

