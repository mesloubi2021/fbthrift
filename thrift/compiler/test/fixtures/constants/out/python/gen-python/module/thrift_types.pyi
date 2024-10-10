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
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

class _fbthrift_compatible_with_EmptyEnum:
    pass


class EmptyEnum(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_EmptyEnum):
    def _to_python(self) -> EmptyEnum: ...
    def _to_py3(self) -> "module.types.EmptyEnum": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...

class _fbthrift_compatible_with_City:
    pass


class City(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_City):
    NYC: City = ...
    MPK: City = ...
    SEA: City = ...
    LON: City = ...
    def _to_python(self) -> City: ...
    def _to_py3(self) -> "module.types.City": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...

class _fbthrift_compatible_with_Company:
    pass


class Company(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_Company):
    FACEBOOK: Company = ...
    WHATSAPP: Company = ...
    OCULUS: Company = ...
    INSTAGRAM: Company = ...
    def _to_python(self) -> Company: ...
    def _to_py3(self) -> "module.types.Company": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...


class _fbthrift_compatible_with_Internship:
    pass


class Internship(_fbthrift_python_types.Struct, _fbthrift_compatible_with_Internship):
    weeks: _typing.Final[int] = ...
    title: _typing.Final[str] = ...
    employer: _typing.Final[_typing.Optional[Company]] = ...
    compensation: _typing.Final[_typing.Optional[float]] = ...
    school: _typing.Final[_typing.Optional[str]] = ...
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
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, Company, float, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.Internship": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Internship": ...  # type: ignore


class _fbthrift_compatible_with_Range:
    pass


class Range(_fbthrift_python_types.Struct, _fbthrift_compatible_with_Range):
    min: _typing.Final[int] = ...
    max: _typing.Final[int] = ...
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
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.Range": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Range": ...  # type: ignore


class _fbthrift_compatible_with_struct1:
    pass


class struct1(_fbthrift_python_types.Struct, _fbthrift_compatible_with_struct1):
    a: _typing.Final[int] = ...
    b: _typing.Final[str] = ...
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
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct1": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct1": ...  # type: ignore


class _fbthrift_compatible_with_struct2:
    pass


class struct2(_fbthrift_python_types.Struct, _fbthrift_compatible_with_struct2):
    a: _typing.Final[int] = ...
    b: _typing.Final[str] = ...
    c: _typing.Final[struct1] = ...
    d: _typing.Final[_typing.Sequence[int]] = ...
    def __init__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[str]=...,
        c: _typing.Optional[_fbthrift_compatible_with_struct1]=...,
        d: _typing.Optional[_typing.Sequence[int]]=...
    ) -> None: ...

    def __call__(
        self, *,
        a: _typing.Optional[int]=...,
        b: _typing.Optional[str]=...,
        c: _typing.Optional[_fbthrift_compatible_with_struct1]=...,
        d: _typing.Optional[_typing.Sequence[int]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, struct1, _typing.Sequence[int]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct2": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct2": ...  # type: ignore


class _fbthrift_compatible_with_struct3:
    pass


class struct3(_fbthrift_python_types.Struct, _fbthrift_compatible_with_struct3):
    a: _typing.Final[str] = ...
    b: _typing.Final[int] = ...
    c: _typing.Final[struct2] = ...
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
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, struct2]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct3": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct3": ...  # type: ignore


class _fbthrift_compatible_with_struct4:
    pass


class struct4(_fbthrift_python_types.Struct, _fbthrift_compatible_with_struct4):
    a: _typing.Final[int] = ...
    b: _typing.Final[_typing.Optional[float]] = ...
    c: _typing.Final[_typing.Optional[int]] = ...
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
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.struct4": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.struct4": ...  # type: ignore


class _fbthrift_compatible_with_union1:
    pass


class union1(_fbthrift_python_types.Union, _fbthrift_compatible_with_union1):
    i: _typing.Final[int] = ...
    d: _typing.Final[float] = ...
    def __init__(
        self, *,
        i: _typing.Optional[int]=...,
        d: _typing.Optional[float]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: union1.Type = ...
        i: union1.Type = ...
        d: union1.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, int, float]) -> union1: ...
    value: _typing.Final[_typing.Union[None, int, float]]
    type: _typing.Final[Type]
    def get_type(self) -> Type:...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.union1": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.union1": ...  # type: ignore


class _fbthrift_compatible_with_union2:
    pass


class union2(_fbthrift_python_types.Union, _fbthrift_compatible_with_union2):
    i: _typing.Final[int] = ...
    d: _typing.Final[float] = ...
    s: _typing.Final[struct1] = ...
    u: _typing.Final[union1] = ...
    def __init__(
        self, *,
        i: _typing.Optional[int]=...,
        d: _typing.Optional[float]=...,
        s: _typing.Optional[_fbthrift_compatible_with_struct1]=...,
        u: _typing.Optional[_fbthrift_compatible_with_union1]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: union2.Type = ...
        i: union2.Type = ...
        d: union2.Type = ...
        s: union2.Type = ...
        u: union2.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, int, float, struct1, union1]) -> union2: ...
    value: _typing.Final[_typing.Union[None, int, float, struct1, union1]]
    type: _typing.Final[Type]
    def get_type(self) -> Type:...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.union2": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.union2": ...  # type: ignore


myInt: int = ...

name: str = ...

multi_line_string: str = ...

states: _typing.List[_typing.Mapping[str, int]] = ...

x: float = ...

y: float = ...

z: float = ...

zeroDoubleValue: float = ...

longDoubleValue: float = ...

bin: bytes = ...

my_company: Company = ...

foo: str = ...

bar: int = ...

mymap: _typing.Dict[str, str] = ...

instagram: Internship = ...

partial_const: Internship = ...

kRanges: _typing.List[Range] = ...

internList: _typing.List[Internship] = ...

pod_0: struct1 = ...

pod_s_0: struct1 = ...

pod_1: struct1 = ...

pod_s_1: struct1 = ...

pod_2: struct2 = ...

pod_trailing_commas: struct2 = ...

pod_s_2: struct2 = ...

pod_3: struct3 = ...

pod_s_3: struct3 = ...

pod_4: struct4 = ...

u_1_1: union1 = ...

u_1_2: union1 = ...

u_1_3: union1 = ...

u_2_1: union2 = ...

u_2_2: union2 = ...

u_2_3: union2 = ...

u_2_4: union2 = ...

u_2_5: union2 = ...

u_2_6: union2 = ...

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

MyCompany = Company
MyStringIdentifier = str
MyIntIdentifier = int
MyMapIdentifier = _typing.Dict[str, str]
