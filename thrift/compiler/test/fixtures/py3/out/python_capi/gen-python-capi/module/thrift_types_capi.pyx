
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.utility cimport move as __move
from folly.iobuf cimport (
    from_unique_ptr as __IOBuf_from_unique_ptr,
    IOBuf as __IOBuf,
)
from thrift.python.serializer import (
    deserialize as __deserialize,
    Protocol as __Protocol,
    serialize_iobuf as __serialize_iobuf,
)
import module.thrift_types as __thrift_types

cdef api int can_extract__module__SimpleException(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.SimpleException) else 0


cdef api object init__module__SimpleException(object data):
    return __thrift_types.SimpleException._fbthrift_create(data)

cdef api int can_extract__module__OptionalRefStruct(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.OptionalRefStruct) else 0


cdef api object init__module__OptionalRefStruct(object data):
    return __thrift_types.OptionalRefStruct._fbthrift_create(data)

cdef api int can_extract__module__SimpleStruct(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.SimpleStruct) else 0


cdef api object init__module__SimpleStruct(object data):
    return __thrift_types.SimpleStruct._fbthrift_create(data)

cdef api int can_extract__module__HiddenTypeFieldsStruct(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.HiddenTypeFieldsStruct) else 0

cdef api __cIOBuf* extract__module__HiddenTypeFieldsStruct(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__module__HiddenTypeFieldsStruct(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.HiddenTypeFieldsStruct,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__module__HiddenTypeFieldsStruct(object data):
    return __thrift_types.HiddenTypeFieldsStruct._fbthrift_create(data)

cdef api int can_extract__module__AdaptedUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.AdaptedUnion) else 0


cdef api object init__module__AdaptedUnion(object data):
    return __thrift_types.AdaptedUnion._fbthrift_create(data)

cdef api int can_extract__module__HiddenException(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.HiddenException) else 0


cdef api object init__module__HiddenException(object data):
    return __thrift_types.HiddenException._fbthrift_create(data)

cdef api int can_extract__module__ComplexStruct(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.ComplexStruct) else 0

cdef api __cIOBuf* extract__module__ComplexStruct(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__module__ComplexStruct(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.ComplexStruct,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__module__ComplexStruct(object data):
    return __thrift_types.ComplexStruct._fbthrift_create(data)

cdef api int can_extract__module__BinaryUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.BinaryUnion) else 0


cdef api object init__module__BinaryUnion(object data):
    return __thrift_types.BinaryUnion._fbthrift_create(data)

cdef api int can_extract__module__BinaryUnionStruct(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.BinaryUnionStruct) else 0


cdef api object init__module__BinaryUnionStruct(object data):
    return __thrift_types.BinaryUnionStruct._fbthrift_create(data)

cdef api int can_extract__module__CustomFields(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.CustomFields) else 0

cdef api __cIOBuf* extract__module__CustomFields(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__module__CustomFields(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.CustomFields,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__module__CustomFields(object data):
    return __thrift_types.CustomFields._fbthrift_create(data)

cdef api int can_extract__module__CustomTypedefFields(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.CustomTypedefFields) else 0

cdef api __cIOBuf* extract__module__CustomTypedefFields(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__module__CustomTypedefFields(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.CustomTypedefFields,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__module__CustomTypedefFields(object data):
    return __thrift_types.CustomTypedefFields._fbthrift_create(data)

cdef api int can_extract__module__AdaptedTypedefFields(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.AdaptedTypedefFields) else 0

cdef api __cIOBuf* extract__module__AdaptedTypedefFields(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__module__AdaptedTypedefFields(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.AdaptedTypedefFields,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__module__AdaptedTypedefFields(object data):
    return __thrift_types.AdaptedTypedefFields._fbthrift_create(data)

cdef api int can_extract__module__AnEnum(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.AnEnum) else 0

cdef api object construct__module__AnEnum(int64_t __val):
    return __thrift_types.AnEnum(__val)

cdef api int can_extract__module__AnEnumRenamed(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.AnEnumRenamed) else 0

cdef api object construct__module__AnEnumRenamed(int64_t __val):
    return __thrift_types.AnEnumRenamed(__val)

cdef api int can_extract__module__Flags(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.Flags) else 0

cdef api object construct__module__Flags(int64_t __val):
    return __thrift_types.Flags(__val)

