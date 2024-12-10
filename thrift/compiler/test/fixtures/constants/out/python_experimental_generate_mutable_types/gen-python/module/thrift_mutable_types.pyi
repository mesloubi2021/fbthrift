#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

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
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers
from module.thrift_enums import _fbthrift_compatible_with_EmptyEnum
from module.thrift_enums import EmptyEnum as _fbthrift_EmptyEnum
from module.thrift_enums import _fbthrift_compatible_with_City
from module.thrift_enums import City as _fbthrift_City
from module.thrift_enums import _fbthrift_compatible_with_Company
from module.thrift_enums import Company as _fbthrift_Company

from module.thrift_enums import *


class _fbthrift_compatible_with_Internship:
    pass


class Internship(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Internship, _fbthrift_python_abstract_types.Internship):

    @property
    def weeks(self) -> int: ...
    @weeks.setter
    def weeks(self, value: int) -> None: ...


    @property
    def title(self) -> str: ...
    @title.setter
    def title(self, value: str) -> None: ...


    @property
    def employer(self) -> _typing.Optional[_fbthrift_Company]: ...
    @employer.setter
    def employer(self, value: _typing.Optional[_fbthrift_Company]) -> None: ...


    @property
    def compensation(self) -> _typing.Optional[float]: ...
    @compensation.setter
    def compensation(self, value: _typing.Optional[float]) -> None: ...


    @property
    def school(self) -> _typing.Optional[str]: ...
    @school.setter
    def school(self, value: _typing.Optional[str]) -> None: ...

    def __init__(
        self, *,
        weeks: _typing.Optional[int]=...,
        title: _typing.Optional[str]=...,
        employer: _typing.Optional[_fbthrift_compatible_with_Company]=...,
        compensation: _typing.Optional[float]=...,
        school: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        weeks: _typing.Optional[int]=...,
        title: _typing.Optional[str]=...,
        employer: _typing.Optional[_fbthrift_compatible_with_Company]=...,
        compensation: _typing.Optional[float]=...,
        school: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, _fbthrift_Company, float, str]]]: ...
    def _to_python(self) -> "module.thrift_types.Internship": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.Internship": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Internship": ...  # type: ignore
_fbthrift_Internship = Internship

class _fbthrift_compatible_with_Range:
    pass


class Range(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Range, _fbthrift_python_abstract_types.Range):

    @property
    def min(self) -> int: ...
    @min.setter
    def min(self, value: int) -> None: ...


    @property
    def max(self) -> int: ...
    @max.setter
    def max(self, value: int) -> None: ...

    def __init__(
        self, *,
        min: _typing.Optional[int]=...,
        max: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        min: _typing.Optional[int]=...,
        max: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...
    def _to_python(self) -> "module.thrift_types.Range": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.Range": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Range": ...  # type: ignore
_fbthrift_Range = Range

class _fbthrift_compatible_with_struct1:
    pass


class struct1(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_struct1, _fbthrift_python_abstract_types.struct1):

    @property
    def a(self) -> int: ...
    @a.setter
    def a(self, value: int) -> None: ...


    @property
    def b(self) -> str: ...
    @b.setter
    def b(self, value: str) -> None: ...

    def __init__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str]]]: ...
    def _to_python(self) -> "module.thrift_types.struct1": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct1": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct1": ...  # type: ignore
_fbthrift_struct1 = struct1

class _fbthrift_compatible_with_struct2:
    pass


class struct2(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_struct2, _fbthrift_python_abstract_types.struct2):

    @property
    def a(self) -> int: ...
    @a.setter
    def a(self, value: int) -> None: ...


    @property
    def b(self) -> str: ...
    @b.setter
    def b(self, value: str) -> None: ...


    @property
    def c(self) -> _fbthrift_struct1: ...
    @c.setter
    def c(self, value: _fbthrift_struct1) -> None: ...


    @property
    def d(self) -> _fbthrift_python_mutable_containers.MutableList[int]: ...
    @d.setter
    def d(self, value: _fbthrift_python_mutable_containers.MutableList[int] | _fbthrift_python_mutable_types._ThriftListWrapper) -> None: ...

    def __init__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[str]=...,
        c: _typing.Optional[_fbthrift_compatible_with_struct1]=...,
        d: _typing.Optional[_fbthrift_python_mutable_containers.MutableList[int] | _fbthrift_python_mutable_types._ThriftListWrapper]=...
    ) -> None: ...

    def __call__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[str]=...,
        c: _typing.Optional[_fbthrift_compatible_with_struct1]=...,
        d: _typing.Optional[_fbthrift_python_mutable_containers.MutableList[int] | _fbthrift_python_mutable_types._ThriftListWrapper]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, _fbthrift_struct1, _fbthrift_python_mutable_containers.MutableList[int]]]]: ...
    def _to_python(self) -> "module.thrift_types.struct2": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct2": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct2": ...  # type: ignore
_fbthrift_struct2 = struct2

class _fbthrift_compatible_with_struct3:
    pass


class struct3(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_struct3, _fbthrift_python_abstract_types.struct3):

    @property
    def a(self) -> str: ...
    @a.setter
    def a(self, value: str) -> None: ...


    @property
    def b(self) -> int: ...
    @b.setter
    def b(self, value: int) -> None: ...


    @property
    def c(self) -> _fbthrift_struct2: ...
    @c.setter
    def c(self, value: _fbthrift_struct2) -> None: ...

    def __init__(
        self, *,
        a: _typing.Optional[str]=...,
        b: _typing.Optional[int]=...,
        c: _typing.Optional[_fbthrift_compatible_with_struct2]=...
    ) -> None: ...

    def __call__(
        self, *,
        a: _typing.Optional[str]=...,
        b: _typing.Optional[int]=...,
        c: _typing.Optional[_fbthrift_compatible_with_struct2]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, _fbthrift_struct2]]]: ...
    def _to_python(self) -> "module.thrift_types.struct3": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct3": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct3": ...  # type: ignore
_fbthrift_struct3 = struct3

class _fbthrift_compatible_with_struct4:
    pass


class struct4(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_struct4, _fbthrift_python_abstract_types.struct4):

    @property
    def a(self) -> int: ...
    @a.setter
    def a(self, value: int) -> None: ...


    @property
    def b(self) -> _typing.Optional[float]: ...
    @b.setter
    def b(self, value: _typing.Optional[float]) -> None: ...


    @property
    def c(self) -> _typing.Optional[int]: ...
    @c.setter
    def c(self, value: _typing.Optional[int]) -> None: ...

    def __init__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[float]=...,
        c: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[float]=...,
        c: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, float, int]]]: ...
    def _to_python(self) -> "module.thrift_types.struct4": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct4": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct4": ...  # type: ignore
_fbthrift_struct4 = struct4

class _fbthrift_compatible_with_union1:
    pass


class union1(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_union1, _fbthrift_python_abstract_types.union1):

    @property
    def i(self) -> int: ...
    @i.setter
    def i(self, value: int) -> None: ...


    @property
    def d(self) -> float: ...
    @d.setter
    def d(self, value: float) -> None: ...

    def __init__(
        self, *,
        i: _typing.Optional[int]=...,
        d: _typing.Optional[float]=...
    ) -> None: ...



    class FbThriftUnionFieldEnum(enum.Enum):
        EMPTY: union1.FbThriftUnionFieldEnum = ...
        i: union1.FbThriftUnionFieldEnum = ...
        d: union1.FbThriftUnionFieldEnum = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, int, float]]
    fbthrift_current_field: _typing.Final[FbThriftUnionFieldEnum]
    def get_type(self) -> FbThriftUnionFieldEnum: ...
    def _to_python(self) -> "module.thrift_types.union1": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.union1": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.union1": ...  # type: ignore
_fbthrift_union1 = union1

class _fbthrift_compatible_with_union2:
    pass


class union2(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_union2, _fbthrift_python_abstract_types.union2):

    @property
    def i(self) -> int: ...
    @i.setter
    def i(self, value: int) -> None: ...


    @property
    def d(self) -> float: ...
    @d.setter
    def d(self, value: float) -> None: ...


    @property
    def s(self) -> _fbthrift_struct1: ...
    @s.setter
    def s(self, value: _fbthrift_struct1) -> None: ...


    @property
    def u(self) -> _fbthrift_union1: ...
    @u.setter
    def u(self, value: _fbthrift_union1) -> None: ...

    def __init__(
        self, *,
        i: _typing.Optional[int]=...,
        d: _typing.Optional[float]=...,
        s: _typing.Optional[_fbthrift_compatible_with_struct1]=...,
        u: _typing.Optional[_fbthrift_compatible_with_union1]=...
    ) -> None: ...



    class FbThriftUnionFieldEnum(enum.Enum):
        EMPTY: union2.FbThriftUnionFieldEnum = ...
        i: union2.FbThriftUnionFieldEnum = ...
        d: union2.FbThriftUnionFieldEnum = ...
        s: union2.FbThriftUnionFieldEnum = ...
        u: union2.FbThriftUnionFieldEnum = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, int, float, _fbthrift_struct1, _fbthrift_union1]]
    fbthrift_current_field: _typing.Final[FbThriftUnionFieldEnum]
    def get_type(self) -> FbThriftUnionFieldEnum: ...
    def _to_python(self) -> "module.thrift_types.union2": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.union2": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.union2": ...  # type: ignore
_fbthrift_union2 = union2


myInt: int = ...

name: str = ...

multi_line_string: str = ...

states: _typing.List[_fbthrift_python_mutable_containers.MutableMap[str, int]] = ...

x: float = ...

y: float = ...

z: float = ...

zeroDoubleValue: float = ...

longDoubleValue: float = ...

bin: bytes = ...

my_company: _fbthrift_Company = ...

foo: str = ...

bar: int = ...

mymap: _typing.Dict[str, str] = ...

my_apps: _typing.List[_fbthrift_Company] = ...

instagram: _fbthrift_Internship = ...

partial_const: _fbthrift_Internship = ...

kRanges: _typing.List[_fbthrift_Range] = ...

internList: _typing.List[_fbthrift_Internship] = ...

pod_0: _fbthrift_struct1 = ...

pod_s_0: _fbthrift_struct1 = ...

pod_1: _fbthrift_struct1 = ...

pod_s_1: _fbthrift_struct1 = ...

pod_2: _fbthrift_struct2 = ...

pod_trailing_commas: _fbthrift_struct2 = ...

pod_s_2: _fbthrift_struct2 = ...

pod_3: _fbthrift_struct3 = ...

pod_s_3: _fbthrift_struct3 = ...

pod_4: _fbthrift_struct4 = ...

u_1_1: _fbthrift_union1 = ...

u_1_2: _fbthrift_union1 = ...

u_1_3: _fbthrift_union1 = ...

u_2_1: _fbthrift_union2 = ...

u_2_2: _fbthrift_union2 = ...

u_2_3: _fbthrift_union2 = ...

u_2_4: _fbthrift_union2 = ...

u_2_5: _fbthrift_union2 = ...

u_2_6: _fbthrift_union2 = ...

apostrophe: str = ...

tripleApostrophe: str = ...

quotationMark: str = ...

backslash: str = ...

escaped_a: str = ...

char2ascii: _typing.Dict[str, int] = ...

escaped_strings: _typing.List[str] = ...

false_c: bool = ...

true_c: bool = ...

zero_byte: int = ...

zero16: int = ...

zero32: int = ...

zero64: int = ...

zero_dot_zero: float = ...

empty_string: str = ...

empty_int_list: _typing.List[int] = ...

empty_string_list: _typing.List[str] = ...

empty_int_set: _typing.Set[int] = ...

empty_string_set: _typing.Set[str] = ...

empty_int_int_map: _typing.Dict[int, int] = ...

empty_int_string_map: _typing.Dict[int, str] = ...

empty_string_int_map: _typing.Dict[str, int] = ...

empty_string_string_map: _typing.Dict[str, str] = ...

maxIntDec: int = ...

maxIntOct: int = ...

maxIntHex: int = ...

maxIntBin: int = ...

maxDub: float = ...

minDub: float = ...

minSDub: float = ...

maxPIntDec: int = ...

maxPIntOct: int = ...

maxPIntHex: int = ...

maxPIntBin: int = ...

maxPDub: float = ...

minPDub: float = ...

minPSDub: float = ...

minIntDec: int = ...

minIntOct: int = ...

minIntHex: int = ...

minIntBin: int = ...

maxNDub: float = ...

minNDub: float = ...

minNSDub: float = ...

I2B: _typing.Dict[int, bool] = ...

I2B_REF: _typing.Dict[int, bool] = ...

MyCompany = _fbthrift_Company
MyStringIdentifier = str
MyIntIdentifier = int
MyMapIdentifier = _typing.Dict[str, str]
