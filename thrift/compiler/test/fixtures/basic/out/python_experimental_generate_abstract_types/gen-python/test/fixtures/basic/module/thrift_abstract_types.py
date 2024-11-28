
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_abstract_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import abc as _abc
import typing as _typing

_fbthrift_property = property

import enum as _enum


import folly.iobuf as _fbthrift_iobuf
import thrift.python.abstract_types as _fbthrift_python_abstract_types

from test.fixtures.basic.module.thrift_enums import _fbthrift_compatible_with_MyEnum
from test.fixtures.basic.module.thrift_enums import _fbthrift_compatible_with_HackEnum

from test.fixtures.basic.module.thrift_enums import *
class MyStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def MyIntField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyStringField(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyDataField(self) -> MyDataItem: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myEnum(self) -> MyEnum: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def oneway(self) -> bool: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def readonly(self) -> bool: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def idempotent(self) -> bool: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def floatSet(self) -> _typing.AbstractSet[float]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def no_hack_codegen_field(self) -> str: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyDataItem, MyEnum, bool, bool, bool, _typing.AbstractSet[float], str]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore

class Containers(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def I32List(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def StringSet(self) -> _typing.AbstractSet[str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def StringToI64Map(self) -> _typing.Mapping[str, int]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[int], _typing.AbstractSet[str], _typing.Mapping[str, int]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.Containers": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.Containers": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "test.fixtures.basic.module.types.Containers": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.Containers": ...  # type: ignore

class MyDataItem(_abc.ABC):
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...  # type: ignore

class MyUnion(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def myEnum(self) -> MyEnum: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myStruct(self) -> MyStruct: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myDataItem(self) -> MyDataItem: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def floatSet(self) -> _typing.AbstractSet[float]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.MyUnion": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyUnion": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyUnion": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyUnion": ...  # type: ignore

    class FbThriftUnionFieldEnum(_enum.Enum):
        EMPTY = 0
        myEnum = 1
        myStruct = 2
        myDataItem = 3
        floatSet = 4

    FbThriftUnionFieldEnum.__name__ = "MyUnion"

    fbthrift_current_value: _typing.Final[_typing.Union[None, MyEnum, MyStruct, MyDataItem, _typing.AbstractSet[float]]]
    fbthrift_current_field: _typing.Final[FbThriftUnionFieldEnum]


class MyException(_fbthrift_python_abstract_types.AbstractGeneratedError):
    @_fbthrift_property
    def MyIntField(self) -> int: ...
    @_fbthrift_property
    def MyStringField(self) -> str: ...
    @_fbthrift_property
    def myStruct(self) -> MyStruct: ...
    @_fbthrift_property
    def myUnion(self) -> MyUnion: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyStruct, MyUnion]]]: ...
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.MyException": ...  # type: ignore
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyException": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyException": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyException": ...  # type: ignore

class MyExceptionWithMessage(_fbthrift_python_abstract_types.AbstractGeneratedError):
    @_fbthrift_property
    def MyIntField(self) -> int: ...
    @_fbthrift_property
    def MyStringField(self) -> str: ...
    @_fbthrift_property
    def myStruct(self) -> MyStruct: ...
    @_fbthrift_property
    def myUnion(self) -> MyUnion: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyStruct, MyUnion]]]: ...
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.MyExceptionWithMessage": ...  # type: ignore
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyExceptionWithMessage": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyExceptionWithMessage": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyExceptionWithMessage": ...  # type: ignore

class ReservedKeyword(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def reserved_field(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.ReservedKeyword": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.ReservedKeyword": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "test.fixtures.basic.module.types.ReservedKeyword": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ReservedKeyword": ...  # type: ignore

class UnionToBeRenamed(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def reserved_field(self) -> int: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "test.fixtures.basic.module.thrift_mutable_types.UnionToBeRenamed": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.UnionToBeRenamed": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "test.fixtures.basic.module.types.UnionToBeRenamed": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.UnionToBeRenamed": ...  # type: ignore

    class FbThriftUnionFieldEnum(_enum.Enum):
        EMPTY = 0
        reserved_field = 1

    FbThriftUnionFieldEnum.__name__ = "UnionToBeRenamed"

    fbthrift_current_value: _typing.Final[_typing.Union[None, int]]
    fbthrift_current_field: _typing.Final[FbThriftUnionFieldEnum]


MyEnumAlias = MyEnum
MyDataItemAlias = MyDataItem
