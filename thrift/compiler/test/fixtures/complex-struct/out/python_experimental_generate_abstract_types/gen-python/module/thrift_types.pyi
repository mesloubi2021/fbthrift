#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import module.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

class _fbthrift_compatible_with_MyEnum:
    pass


class MyEnum(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_MyEnum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...
    MyValue3: MyEnum = ...
    MyValue4: MyEnum = ...
    MyValue5: MyEnum = ...
    def _to_python(self) -> MyEnum: ...
    def _to_py3(self) -> "module.types.MyEnum": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...


class _fbthrift_compatible_with_MyStructFloatFieldThrowExp:
    pass


class MyStructFloatFieldThrowExp(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MyStructFloatFieldThrowExp, _fbthrift_python_abstract_types.MyStructFloatFieldThrowExp):
    myLongField: _typing.Final[int] = ...
    MyByteField: _typing.Final[int] = ...
    myStringField: _typing.Final[str] = ...
    myFloatField: _typing.Final[float] = ...
    def __init__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        MyByteField: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myFloatField: _typing.Optional[float]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        MyByteField: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myFloatField: _typing.Optional[float]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, str, float]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStructFloatFieldThrowExp": ...  # type: ignore
    def _to_py3(self) -> "module.types.MyStructFloatFieldThrowExp": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructFloatFieldThrowExp": ...  # type: ignore


class _fbthrift_compatible_with_MyStructMapFloatThrowExp:
    pass


class MyStructMapFloatThrowExp(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MyStructMapFloatThrowExp, _fbthrift_python_abstract_types.MyStructMapFloatThrowExp):
    myLongField: _typing.Final[int] = ...
    mapListOfFloats: _typing.Final[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]] = ...
    def __init__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        mapListOfFloats: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        mapListOfFloats: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, _typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStructMapFloatThrowExp": ...  # type: ignore
    def _to_py3(self) -> "module.types.MyStructMapFloatThrowExp": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructMapFloatThrowExp": ...  # type: ignore


class _fbthrift_compatible_with_MyStruct:
    pass


class MyStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MyStruct, _fbthrift_python_abstract_types.MyStruct):
    MyIntField: _typing.Final[int] = ...
    MyStringField: _typing.Final[str] = ...
    MyDataField: _typing.Final[MyDataItem] = ...
    myEnum: _typing.Final[MyEnum] = ...
    MyBoolField: _typing.Final[bool] = ...
    MyByteField: _typing.Final[int] = ...
    MyShortField: _typing.Final[int] = ...
    MyLongField: _typing.Final[int] = ...
    MyDoubleField: _typing.Final[float] = ...
    lDouble: _typing.Final[_typing.Sequence[float]] = ...
    lShort: _typing.Final[_typing.Sequence[int]] = ...
    lInteger: _typing.Final[_typing.Sequence[int]] = ...
    lLong: _typing.Final[_typing.Sequence[int]] = ...
    lString: _typing.Final[_typing.Sequence[str]] = ...
    lBool: _typing.Final[_typing.Sequence[bool]] = ...
    lByte: _typing.Final[_typing.Sequence[int]] = ...
    mShortString: _typing.Final[_typing.Mapping[int, str]] = ...
    mIntegerString: _typing.Final[_typing.Mapping[int, str]] = ...
    mStringMyStruct: _typing.Final[_typing.Mapping[str, MyStruct]] = ...
    mStringBool: _typing.Final[_typing.Mapping[str, bool]] = ...
    mIntegerInteger: _typing.Final[_typing.Mapping[int, int]] = ...
    mIntegerBool: _typing.Final[_typing.Mapping[int, bool]] = ...
    sShort: _typing.Final[_typing.AbstractSet[int]] = ...
    sMyStruct: _typing.Final[_typing.AbstractSet[MyStruct]] = ...
    sLong: _typing.Final[_typing.AbstractSet[int]] = ...
    sString: _typing.Final[_typing.AbstractSet[str]] = ...
    sByte: _typing.Final[_typing.AbstractSet[int]] = ...
    mListList: _typing.Final[_typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]] = ...
    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        MyBoolField: _typing.Optional[bool]=...,
        MyByteField: _typing.Optional[int]=...,
        MyShortField: _typing.Optional[int]=...,
        MyLongField: _typing.Optional[int]=...,
        MyDoubleField: _typing.Optional[float]=...,
        lDouble: _typing.Optional[_typing.Sequence[float]]=...,
        lShort: _typing.Optional[_typing.Sequence[int]]=...,
        lInteger: _typing.Optional[_typing.Sequence[int]]=...,
        lLong: _typing.Optional[_typing.Sequence[int]]=...,
        lString: _typing.Optional[_typing.Sequence[str]]=...,
        lBool: _typing.Optional[_typing.Sequence[bool]]=...,
        lByte: _typing.Optional[_typing.Sequence[int]]=...,
        mShortString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mIntegerString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mStringMyStruct: _typing.Optional[_typing.Mapping[str, _fbthrift_compatible_with_MyStruct]]=...,
        mStringBool: _typing.Optional[_typing.Mapping[str, bool]]=...,
        mIntegerInteger: _typing.Optional[_typing.Mapping[int, int]]=...,
        mIntegerBool: _typing.Optional[_typing.Mapping[int, bool]]=...,
        sShort: _typing.Optional[_typing.AbstractSet[int]]=...,
        sMyStruct: _typing.Optional[_typing.AbstractSet[_fbthrift_compatible_with_MyStruct]]=...,
        sLong: _typing.Optional[_typing.AbstractSet[int]]=...,
        sString: _typing.Optional[_typing.AbstractSet[str]]=...,
        sByte: _typing.Optional[_typing.AbstractSet[int]]=...,
        mListList: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        MyBoolField: _typing.Optional[bool]=...,
        MyByteField: _typing.Optional[int]=...,
        MyShortField: _typing.Optional[int]=...,
        MyLongField: _typing.Optional[int]=...,
        MyDoubleField: _typing.Optional[float]=...,
        lDouble: _typing.Optional[_typing.Sequence[float]]=...,
        lShort: _typing.Optional[_typing.Sequence[int]]=...,
        lInteger: _typing.Optional[_typing.Sequence[int]]=...,
        lLong: _typing.Optional[_typing.Sequence[int]]=...,
        lString: _typing.Optional[_typing.Sequence[str]]=...,
        lBool: _typing.Optional[_typing.Sequence[bool]]=...,
        lByte: _typing.Optional[_typing.Sequence[int]]=...,
        mShortString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mIntegerString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mStringMyStruct: _typing.Optional[_typing.Mapping[str, _fbthrift_compatible_with_MyStruct]]=...,
        mStringBool: _typing.Optional[_typing.Mapping[str, bool]]=...,
        mIntegerInteger: _typing.Optional[_typing.Mapping[int, int]]=...,
        mIntegerBool: _typing.Optional[_typing.Mapping[int, bool]]=...,
        sShort: _typing.Optional[_typing.AbstractSet[int]]=...,
        sMyStruct: _typing.Optional[_typing.AbstractSet[_fbthrift_compatible_with_MyStruct]]=...,
        sLong: _typing.Optional[_typing.AbstractSet[int]]=...,
        sString: _typing.Optional[_typing.AbstractSet[str]]=...,
        sByte: _typing.Optional[_typing.AbstractSet[int]]=...,
        mListList: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyDataItem, MyEnum, bool, int, int, int, float, _typing.Sequence[float], _typing.Sequence[int], _typing.Sequence[int], _typing.Sequence[int], _typing.Sequence[str], _typing.Sequence[bool], _typing.Sequence[int], _typing.Mapping[int, str], _typing.Mapping[int, str], _typing.Mapping[str, MyStruct], _typing.Mapping[str, bool], _typing.Mapping[int, int], _typing.Mapping[int, bool], _typing.AbstractSet[int], _typing.AbstractSet[MyStruct], _typing.AbstractSet[int], _typing.AbstractSet[str], _typing.AbstractSet[int], _typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStruct": ...  # type: ignore
    def _to_py3(self) -> "module.types.MyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore


class _fbthrift_compatible_with_SimpleStruct:
    pass


class SimpleStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_SimpleStruct, _fbthrift_python_abstract_types.SimpleStruct):
    age: _typing.Final[int] = ...
    name: _typing.Final[str] = ...
    def __init__(
        self, *,
        age: _typing.Optional[int]=...,
        name: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        age: _typing.Optional[int]=...,
        name: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.SimpleStruct": ...  # type: ignore
    def _to_py3(self) -> "module.types.SimpleStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.SimpleStruct": ...  # type: ignore


class _fbthrift_compatible_with_defaultStruct:
    pass


class defaultStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_defaultStruct, _fbthrift_python_abstract_types.defaultStruct):
    myLongDFset: _typing.Final[int] = ...
    myLongDF: _typing.Final[int] = ...
    portDFset: _typing.Final[int] = ...
    portNum: _typing.Final[int] = ...
    myBinaryDFset: _typing.Final[bytes] = ...
    myBinary: _typing.Final[bytes] = ...
    myByteDFSet: _typing.Final[int] = ...
    myByte: _typing.Final[int] = ...
    myDoubleDFset: _typing.Final[float] = ...
    myDoubleDFZero: _typing.Final[float] = ...
    myDouble: _typing.Final[float] = ...
    field3: _typing.Final[_typing.Mapping[int, str]] = ...
    myList: _typing.Final[_typing.Sequence[MyEnum]] = ...
    mySet: _typing.Final[_typing.AbstractSet[str]] = ...
    simpleStruct: _typing.Final[SimpleStruct] = ...
    listStructDFset: _typing.Final[_typing.Sequence[SimpleStruct]] = ...
    myUnion: _typing.Final[MyUnion] = ...
    listUnionDFset: _typing.Final[_typing.Sequence[MyUnion]] = ...
    mapNestlistStructDfSet: _typing.Final[_typing.Mapping[int, _typing.Sequence[SimpleStruct]]] = ...
    mapJavaTypeDFset: _typing.Final[_typing.Mapping[int, str]] = ...
    emptyMap: _typing.Final[_typing.Mapping[int, int]] = ...
    enumMapDFset: _typing.Final[_typing.Mapping[str, _typing.Mapping[int, MyEnum]]] = ...
    def __init__(
        self, *,
        myLongDFset: _typing.Optional[int]=...,
        myLongDF: _typing.Optional[int]=...,
        portDFset: _typing.Optional[int]=...,
        portNum: _typing.Optional[int]=...,
        myBinaryDFset: _typing.Optional[bytes]=...,
        myBinary: _typing.Optional[bytes]=...,
        myByteDFSet: _typing.Optional[int]=...,
        myByte: _typing.Optional[int]=...,
        myDoubleDFset: _typing.Optional[float]=...,
        myDoubleDFZero: _typing.Optional[float]=...,
        myDouble: _typing.Optional[float]=...,
        field3: _typing.Optional[_typing.Mapping[int, str]]=...,
        myList: _typing.Optional[_typing.Sequence[_fbthrift_compatible_with_MyEnum]]=...,
        mySet: _typing.Optional[_typing.AbstractSet[str]]=...,
        simpleStruct: _typing.Optional[_fbthrift_compatible_with_SimpleStruct]=...,
        listStructDFset: _typing.Optional[_typing.Sequence[_fbthrift_compatible_with_SimpleStruct]]=...,
        myUnion: _typing.Optional[_fbthrift_compatible_with_MyUnion]=...,
        listUnionDFset: _typing.Optional[_typing.Sequence[_fbthrift_compatible_with_MyUnion]]=...,
        mapNestlistStructDfSet: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_fbthrift_compatible_with_SimpleStruct]]]=...,
        mapJavaTypeDFset: _typing.Optional[_typing.Mapping[int, str]]=...,
        emptyMap: _typing.Optional[_typing.Mapping[int, int]]=...,
        enumMapDFset: _typing.Optional[_typing.Mapping[str, _typing.Mapping[int, _fbthrift_compatible_with_MyEnum]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongDFset: _typing.Optional[int]=...,
        myLongDF: _typing.Optional[int]=...,
        portDFset: _typing.Optional[int]=...,
        portNum: _typing.Optional[int]=...,
        myBinaryDFset: _typing.Optional[bytes]=...,
        myBinary: _typing.Optional[bytes]=...,
        myByteDFSet: _typing.Optional[int]=...,
        myByte: _typing.Optional[int]=...,
        myDoubleDFset: _typing.Optional[float]=...,
        myDoubleDFZero: _typing.Optional[float]=...,
        myDouble: _typing.Optional[float]=...,
        field3: _typing.Optional[_typing.Mapping[int, str]]=...,
        myList: _typing.Optional[_typing.Sequence[_fbthrift_compatible_with_MyEnum]]=...,
        mySet: _typing.Optional[_typing.AbstractSet[str]]=...,
        simpleStruct: _typing.Optional[_fbthrift_compatible_with_SimpleStruct]=...,
        listStructDFset: _typing.Optional[_typing.Sequence[_fbthrift_compatible_with_SimpleStruct]]=...,
        myUnion: _typing.Optional[_fbthrift_compatible_with_MyUnion]=...,
        listUnionDFset: _typing.Optional[_typing.Sequence[_fbthrift_compatible_with_MyUnion]]=...,
        mapNestlistStructDfSet: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_fbthrift_compatible_with_SimpleStruct]]]=...,
        mapJavaTypeDFset: _typing.Optional[_typing.Mapping[int, str]]=...,
        emptyMap: _typing.Optional[_typing.Mapping[int, int]]=...,
        enumMapDFset: _typing.Optional[_typing.Mapping[str, _typing.Mapping[int, _fbthrift_compatible_with_MyEnum]]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int, int, bytes, bytes, int, int, float, float, float, _typing.Mapping[int, str], _typing.Sequence[MyEnum], _typing.AbstractSet[str], SimpleStruct, _typing.Sequence[SimpleStruct], MyUnion, _typing.Sequence[MyUnion], _typing.Mapping[int, _typing.Sequence[SimpleStruct]], _typing.Mapping[int, str], _typing.Mapping[int, int], _typing.Mapping[str, _typing.Mapping[int, MyEnum]]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.defaultStruct": ...  # type: ignore
    def _to_py3(self) -> "module.types.defaultStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.defaultStruct": ...  # type: ignore


class _fbthrift_compatible_with_MyStructTypeDef:
    pass


class MyStructTypeDef(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MyStructTypeDef, _fbthrift_python_abstract_types.MyStructTypeDef):
    myLongField: _typing.Final[int] = ...
    myLongTypeDef: _typing.Final[int] = ...
    myStringField: _typing.Final[str] = ...
    myStringTypedef: _typing.Final[str] = ...
    myMapField: _typing.Final[_typing.Mapping[int, str]] = ...
    myMapTypedef: _typing.Final[_typing.Mapping[int, str]] = ...
    myListField: _typing.Final[_typing.Sequence[float]] = ...
    myListTypedef: _typing.Final[_typing.Sequence[float]] = ...
    myMapListOfTypeDef: _typing.Final[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]] = ...
    def __init__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        myLongTypeDef: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myStringTypedef: _typing.Optional[str]=...,
        myMapField: _typing.Optional[_typing.Mapping[int, str]]=...,
        myMapTypedef: _typing.Optional[_typing.Mapping[int, str]]=...,
        myListField: _typing.Optional[_typing.Sequence[float]]=...,
        myListTypedef: _typing.Optional[_typing.Sequence[float]]=...,
        myMapListOfTypeDef: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        myLongTypeDef: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myStringTypedef: _typing.Optional[str]=...,
        myMapField: _typing.Optional[_typing.Mapping[int, str]]=...,
        myMapTypedef: _typing.Optional[_typing.Mapping[int, str]]=...,
        myListField: _typing.Optional[_typing.Sequence[float]]=...,
        myListTypedef: _typing.Optional[_typing.Sequence[float]]=...,
        myMapListOfTypeDef: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, str, str, _typing.Mapping[int, str], _typing.Mapping[int, str], _typing.Sequence[float], _typing.Sequence[float], _typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStructTypeDef": ...  # type: ignore
    def _to_py3(self) -> "module.types.MyStructTypeDef": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructTypeDef": ...  # type: ignore


class _fbthrift_compatible_with_MyDataItem:
    pass


class MyDataItem(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MyDataItem, _fbthrift_python_abstract_types.MyDataItem):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyDataItem": ...  # type: ignore
    def _to_py3(self) -> "module.types.MyDataItem": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...  # type: ignore


class _fbthrift_compatible_with_MyUnion:
    pass


class MyUnion(_fbthrift_python_types.Union, _fbthrift_compatible_with_MyUnion, _fbthrift_python_abstract_types.MyUnion):
    myEnum: _typing.Final[MyEnum] = ...
    myStruct: _typing.Final[MyStruct] = ...
    myDataItem: _typing.Final[MyDataItem] = ...
    complexNestedStruct: _typing.Final[ComplexNestedStruct] = ...
    longValue: _typing.Final[int] = ...
    intValue: _typing.Final[int] = ...
    def __init__(
        self, *,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        myStruct: _typing.Optional[_fbthrift_compatible_with_MyStruct]=...,
        myDataItem: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        complexNestedStruct: _typing.Optional[_fbthrift_compatible_with_ComplexNestedStruct]=...,
        longValue: _typing.Optional[int]=...,
        intValue: _typing.Optional[int]=...
    ) -> None: ...


    Type = _fbthrift_python_abstract_types.MyUnion.FbThriftUnionFieldEnum

    @classmethod
    def fromValue(cls, value: _typing.Union[None, MyEnum, MyStruct, MyDataItem, ComplexNestedStruct, int, int]) -> MyUnion: ...
    value: _typing.Final[_typing.Union[None, MyEnum, MyStruct, MyDataItem, ComplexNestedStruct, int, int]]
    type: _typing.Final[_fbthrift_python_abstract_types.MyUnion.FbThriftUnionFieldEnum]
    def get_type(self) -> _fbthrift_python_abstract_types.MyUnion.FbThriftUnionFieldEnum: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyUnion": ...  # type: ignore
    def _to_py3(self) -> "module.types.MyUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyUnion": ...  # type: ignore


class _fbthrift_compatible_with_MyUnionFloatFieldThrowExp:
    pass


class MyUnionFloatFieldThrowExp(_fbthrift_python_types.Union, _fbthrift_compatible_with_MyUnionFloatFieldThrowExp, _fbthrift_python_abstract_types.MyUnionFloatFieldThrowExp):
    myEnum: _typing.Final[MyEnum] = ...
    setFloat: _typing.Final[_typing.Sequence[_typing.Sequence[float]]] = ...
    myDataItem: _typing.Final[MyDataItem] = ...
    complexNestedStruct: _typing.Final[ComplexNestedStruct] = ...
    def __init__(
        self, *,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        setFloat: _typing.Optional[_typing.Sequence[_typing.Sequence[float]]]=...,
        myDataItem: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        complexNestedStruct: _typing.Optional[_fbthrift_compatible_with_ComplexNestedStruct]=...
    ) -> None: ...


    Type = _fbthrift_python_abstract_types.MyUnionFloatFieldThrowExp.FbThriftUnionFieldEnum

    @classmethod
    def fromValue(cls, value: _typing.Union[None, MyEnum, _typing.Sequence[_typing.Sequence[float]], MyDataItem, ComplexNestedStruct]) -> MyUnionFloatFieldThrowExp: ...
    value: _typing.Final[_typing.Union[None, MyEnum, _typing.Sequence[_typing.Sequence[float]], MyDataItem, ComplexNestedStruct]]
    type: _typing.Final[_fbthrift_python_abstract_types.MyUnionFloatFieldThrowExp.FbThriftUnionFieldEnum]
    def get_type(self) -> _fbthrift_python_abstract_types.MyUnionFloatFieldThrowExp.FbThriftUnionFieldEnum: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyUnionFloatFieldThrowExp": ...  # type: ignore
    def _to_py3(self) -> "module.types.MyUnionFloatFieldThrowExp": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyUnionFloatFieldThrowExp": ...  # type: ignore


class _fbthrift_compatible_with_ComplexNestedStruct:
    pass


class ComplexNestedStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_ComplexNestedStruct, _fbthrift_python_abstract_types.ComplexNestedStruct):
    setOfSetOfInt: _typing.Final[_typing.AbstractSet[_typing.AbstractSet[int]]] = ...
    listofListOfListOfListOfEnum: _typing.Final[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[MyEnum]]]]] = ...
    listOfListOfMyStruct: _typing.Final[_typing.Sequence[_typing.Sequence[MyStruct]]] = ...
    setOfListOfListOfLong: _typing.Final[_typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]]] = ...
    setOfSetOfsetOfLong: _typing.Final[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]]] = ...
    mapStructListOfListOfLong: _typing.Final[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[MyStruct]]]] = ...
    mKeyStructValInt: _typing.Final[_typing.Mapping[MyStruct, int]] = ...
    listOfMapKeyIntValInt: _typing.Final[_typing.Sequence[_typing.Mapping[int, int]]] = ...
    listOfMapKeyStrValList: _typing.Final[_typing.Sequence[_typing.Mapping[str, _typing.Sequence[MyStruct]]]] = ...
    mapKeySetValLong: _typing.Final[_typing.Mapping[_typing.AbstractSet[int], int]] = ...
    mapKeyListValLong: _typing.Final[_typing.Mapping[_typing.Sequence[str], int]] = ...
    mapKeyMapValMap: _typing.Final[_typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]]] = ...
    mapKeySetValMap: _typing.Final[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]] = ...
    NestedMaps: _typing.Final[_typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]]] = ...
    mapKeyIntValList: _typing.Final[_typing.Mapping[int, _typing.Sequence[MyStruct]]] = ...
    mapKeyIntValSet: _typing.Final[_typing.Mapping[int, _typing.AbstractSet[bool]]] = ...
    mapKeySetValInt: _typing.Final[_typing.Mapping[_typing.AbstractSet[bool], MyEnum]] = ...
    mapKeyListValSet: _typing.Final[_typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]] = ...
    def __init__(
        self, *,
        setOfSetOfInt: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[int]]]=...,
        listofListOfListOfListOfEnum: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[_fbthrift_compatible_with_MyEnum]]]]]=...,
        listOfListOfMyStruct: _typing.Optional[_typing.Sequence[_typing.Sequence[_fbthrift_compatible_with_MyStruct]]]=...,
        setOfListOfListOfLong: _typing.Optional[_typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]]]=...,
        setOfSetOfsetOfLong: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]]]=...,
        mapStructListOfListOfLong: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[_fbthrift_compatible_with_MyStruct]]]]=...,
        mKeyStructValInt: _typing.Optional[_typing.Mapping[MyStruct, int]]=...,
        listOfMapKeyIntValInt: _typing.Optional[_typing.Sequence[_typing.Mapping[int, int]]]=...,
        listOfMapKeyStrValList: _typing.Optional[_typing.Sequence[_typing.Mapping[str, _typing.Sequence[_fbthrift_compatible_with_MyStruct]]]]=...,
        mapKeySetValLong: _typing.Optional[_typing.Mapping[_typing.AbstractSet[int], int]]=...,
        mapKeyListValLong: _typing.Optional[_typing.Mapping[_typing.Sequence[str], int]]=...,
        mapKeyMapValMap: _typing.Optional[_typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]]]=...,
        mapKeySetValMap: _typing.Optional[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]]=...,
        NestedMaps: _typing.Optional[_typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]]]=...,
        mapKeyIntValList: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_fbthrift_compatible_with_MyStruct]]]=...,
        mapKeyIntValSet: _typing.Optional[_typing.Mapping[int, _typing.AbstractSet[bool]]]=...,
        mapKeySetValInt: _typing.Optional[_typing.Mapping[_typing.AbstractSet[bool], _fbthrift_compatible_with_MyEnum]]=...,
        mapKeyListValSet: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        setOfSetOfInt: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[int]]]=...,
        listofListOfListOfListOfEnum: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[_fbthrift_compatible_with_MyEnum]]]]]=...,
        listOfListOfMyStruct: _typing.Optional[_typing.Sequence[_typing.Sequence[_fbthrift_compatible_with_MyStruct]]]=...,
        setOfListOfListOfLong: _typing.Optional[_typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]]]=...,
        setOfSetOfsetOfLong: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]]]=...,
        mapStructListOfListOfLong: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[_fbthrift_compatible_with_MyStruct]]]]=...,
        mKeyStructValInt: _typing.Optional[_typing.Mapping[MyStruct, int]]=...,
        listOfMapKeyIntValInt: _typing.Optional[_typing.Sequence[_typing.Mapping[int, int]]]=...,
        listOfMapKeyStrValList: _typing.Optional[_typing.Sequence[_typing.Mapping[str, _typing.Sequence[_fbthrift_compatible_with_MyStruct]]]]=...,
        mapKeySetValLong: _typing.Optional[_typing.Mapping[_typing.AbstractSet[int], int]]=...,
        mapKeyListValLong: _typing.Optional[_typing.Mapping[_typing.Sequence[str], int]]=...,
        mapKeyMapValMap: _typing.Optional[_typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]]]=...,
        mapKeySetValMap: _typing.Optional[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]]=...,
        NestedMaps: _typing.Optional[_typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]]]=...,
        mapKeyIntValList: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_fbthrift_compatible_with_MyStruct]]]=...,
        mapKeyIntValSet: _typing.Optional[_typing.Mapping[int, _typing.AbstractSet[bool]]]=...,
        mapKeySetValInt: _typing.Optional[_typing.Mapping[_typing.AbstractSet[bool], _fbthrift_compatible_with_MyEnum]]=...,
        mapKeyListValSet: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.AbstractSet[_typing.AbstractSet[int]], _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[MyEnum]]]], _typing.Sequence[_typing.Sequence[MyStruct]], _typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]], _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]], _typing.Mapping[int, _typing.Sequence[_typing.Sequence[MyStruct]]], _typing.Mapping[MyStruct, int], _typing.Sequence[_typing.Mapping[int, int]], _typing.Sequence[_typing.Mapping[str, _typing.Sequence[MyStruct]]], _typing.Mapping[_typing.AbstractSet[int], int], _typing.Mapping[_typing.Sequence[str], int], _typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]], _typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]], _typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]], _typing.Mapping[int, _typing.Sequence[MyStruct]], _typing.Mapping[int, _typing.AbstractSet[bool]], _typing.Mapping[_typing.AbstractSet[bool], MyEnum], _typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.ComplexNestedStruct": ...  # type: ignore
    def _to_py3(self) -> "module.types.ComplexNestedStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ComplexNestedStruct": ...  # type: ignore


class _fbthrift_compatible_with_TypeRemapped:
    pass


class TypeRemapped(_fbthrift_python_types.Struct, _fbthrift_compatible_with_TypeRemapped, _fbthrift_python_abstract_types.TypeRemapped):
    lsMap: _typing.Final[_typing.Mapping[int, str]] = ...
    ioMap: _typing.Final[_typing.Mapping[int, _typing.Mapping[int, int]]] = ...
    BigInteger: _typing.Final[int] = ...
    binaryTestBuffer: _typing.Final[bytes] = ...
    def __init__(
        self, *,
        lsMap: _typing.Optional[_typing.Mapping[int, str]]=...,
        ioMap: _typing.Optional[_typing.Mapping[int, _typing.Mapping[int, int]]]=...,
        BigInteger: _typing.Optional[int]=...,
        binaryTestBuffer: _typing.Optional[bytes]=...
    ) -> None: ...

    def __call__(
        self, *,
        lsMap: _typing.Optional[_typing.Mapping[int, str]]=...,
        ioMap: _typing.Optional[_typing.Mapping[int, _typing.Mapping[int, int]]]=...,
        BigInteger: _typing.Optional[int]=...,
        binaryTestBuffer: _typing.Optional[bytes]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[int, str], _typing.Mapping[int, _typing.Mapping[int, int]], int, bytes]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.TypeRemapped": ...  # type: ignore
    def _to_py3(self) -> "module.types.TypeRemapped": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.TypeRemapped": ...  # type: ignore


class _fbthrift_compatible_with_emptyXcep:
    pass


class emptyXcep(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_emptyXcep, _fbthrift_python_abstract_types.emptyXcep):
    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.emptyXcep": ...  # type: ignore
    def _to_py3(self) -> "module.types.emptyXcep": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.emptyXcep": ...  # type: ignore


class _fbthrift_compatible_with_reqXcep:
    pass


class reqXcep(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_reqXcep, _fbthrift_python_abstract_types.reqXcep):
    message: _typing.Final[str] = ...
    errorCode: _typing.Final[int] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        errorCode: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.reqXcep": ...  # type: ignore
    def _to_py3(self) -> "module.types.reqXcep": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.reqXcep": ...  # type: ignore


class _fbthrift_compatible_with_optXcep:
    pass


class optXcep(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_optXcep, _fbthrift_python_abstract_types.optXcep):
    message: _typing.Final[_typing.Optional[str]] = ...
    errorCode: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        errorCode: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.optXcep": ...  # type: ignore
    def _to_py3(self) -> "module.types.optXcep": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.optXcep": ...  # type: ignore


class _fbthrift_compatible_with_complexException:
    pass


class complexException(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_complexException, _fbthrift_python_abstract_types.complexException):
    message: _typing.Final[str] = ...
    listStrings: _typing.Final[_typing.Sequence[str]] = ...
    errorEnum: _typing.Final[MyEnum] = ...
    unionError: _typing.Final[_typing.Optional[MyUnion]] = ...
    structError: _typing.Final[MyStruct] = ...
    lsMap: _typing.Final[_typing.Mapping[int, str]] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        listStrings: _typing.Optional[_typing.Sequence[str]]=...,
        errorEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        unionError: _typing.Optional[_fbthrift_compatible_with_MyUnion]=...,
        structError: _typing.Optional[_fbthrift_compatible_with_MyStruct]=...,
        lsMap: _typing.Optional[_typing.Mapping[int, str]]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, _typing.Sequence[str], MyEnum, MyUnion, MyStruct, _typing.Mapping[int, str]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.complexException": ...  # type: ignore
    def _to_py3(self) -> "module.types.complexException": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.complexException": ...  # type: ignore


DEFAULT_PORT_NUM: int = ...

constEnumUnion: MyUnion = ...

stringTypedef = str
longTypeDef = int
mapTypedef = _typing.Dict[int, str]
listTypedef = _typing.List[float]
floatTypedef = float
FMap = _typing.Dict[int, int]
binary_4918 = bytes
i32_1194 = int
map_i32_FMap_6797 = _typing.Dict[int, _typing.Mapping[int, int]]
map_i64_string_5732 = _typing.Dict[int, str]
