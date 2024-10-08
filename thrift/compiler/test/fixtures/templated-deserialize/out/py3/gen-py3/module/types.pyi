#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/templated-deserialize/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import enum as _python_std_enum
import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
import typing as _typing
from typing_extensions import Final

import sys
import itertools


__property__ = property


class MyEnumA(thrift.py3.types.Enum):
    fieldA: MyEnumA = ...
    fieldB: MyEnumA = ...
    fieldC: MyEnumA = ...
    def _to_python(self) -> "module.thrift_types.MyEnumA": ...   # type: ignore
    def _to_py3(self) -> MyEnumA: ...
    def _to_py_deprecated(self) -> int: ...


class SmallStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        small_A: bool
        small_B: bool
        pass

    small_A: Final[bool] = ...

    small_B: Final[int] = ...

    def __init__(
        self, *,
        small_A: _typing.Optional[bool]=None,
        small_B: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        small_A: _typing.Union[bool, None]=None,
        small_B: _typing.Union[int, None]=None
    ) -> SmallStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['SmallStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'SmallStruct') -> bool: ...
    def __gt__(self, other: 'SmallStruct') -> bool: ...
    def __le__(self, other: 'SmallStruct') -> bool: ...
    def __ge__(self, other: 'SmallStruct') -> bool: ...

    def _to_python(self) -> "module.thrift_types.SmallStruct": ...   # type: ignore
    def _to_py3(self) -> SmallStruct: ...
    def _to_py_deprecated(self) -> "module.ttypes.SmallStruct": ...   # type: ignore

class containerStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        fieldA: bool
        fieldB: bool
        fieldC: bool
        fieldD: bool
        fieldE: bool
        fieldF: bool
        fieldG: bool
        fieldH: bool
        fieldI: bool
        fieldJ: bool
        fieldK: bool
        fieldL: bool
        fieldM: bool
        fieldN: bool
        fieldO: bool
        fieldP: bool
        fieldQ: bool
        pass

    fieldA: Final[bool] = ...

    fieldB: Final[_typing.Mapping[str, bool]] = ...

    fieldC: Final[_typing.AbstractSet[int]] = ...

    fieldD: Final[str] = ...

    fieldE: Final[str] = ...

    fieldF: Final[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]] = ...

    fieldG: Final[_typing.Mapping[str, _typing.Mapping[str, _typing.Mapping[str, int]]]] = ...

    fieldH: Final[_typing.Sequence[_typing.AbstractSet[int]]] = ...

    fieldI: Final[bool] = ...

    fieldJ: Final[_typing.Mapping[str, _typing.Sequence[int]]] = ...

    fieldK: Final[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]] = ...

    fieldL: Final[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]] = ...

    fieldM: Final[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]] = ...

    fieldN: Final[_typing.Sequence[int]] = ...

    fieldO: Final[_typing.Sequence[float]] = ...

    fieldP: Final[_typing.Sequence[int]] = ...

    fieldQ: Final[MyEnumA] = ...

    fieldR: Final[_typing.Optional[_typing.Mapping[str, bool]]] = ...

    fieldS: Final[_typing.Optional[SmallStruct]] = ...

    fieldT: Final[_typing.Optional[SmallStruct]] = ...

    fieldU: Final[_typing.Optional[SmallStruct]] = ...

    fieldX: Final[_typing.Optional[SmallStruct]] = ...

    def __init__(
        self, *,
        fieldA: _typing.Optional[bool]=None,
        fieldB: _typing.Optional[_typing.Mapping[str, bool]]=None,
        fieldC: _typing.Optional[_typing.AbstractSet[int]]=None,
        fieldD: _typing.Optional[str]=None,
        fieldE: _typing.Optional[str]=None,
        fieldF: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]=None,
        fieldG: _typing.Optional[_typing.Mapping[str, _typing.Mapping[str, _typing.Mapping[str, int]]]]=None,
        fieldH: _typing.Optional[_typing.Sequence[_typing.AbstractSet[int]]]=None,
        fieldI: _typing.Optional[bool]=None,
        fieldJ: _typing.Optional[_typing.Mapping[str, _typing.Sequence[int]]]=None,
        fieldK: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]]=None,
        fieldL: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]]=None,
        fieldM: _typing.Optional[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]]=None,
        fieldN: _typing.Optional[_typing.Sequence[int]]=None,
        fieldO: _typing.Optional[_typing.Sequence[float]]=None,
        fieldP: _typing.Optional[_typing.Sequence[int]]=None,
        fieldQ: _typing.Optional[MyEnumA]=None,
        fieldR: _typing.Optional[_typing.Mapping[str, bool]]=None,
        fieldS: _typing.Optional[SmallStruct]=None,
        fieldT: _typing.Optional[SmallStruct]=None,
        fieldU: _typing.Optional[SmallStruct]=None,
        fieldX: _typing.Optional[SmallStruct]=None
    ) -> None: ...

    def __call__(
        self, *,
        fieldA: _typing.Union[bool, None]=None,
        fieldB: _typing.Union[_typing.Mapping[str, bool], None]=None,
        fieldC: _typing.Union[_typing.AbstractSet[int], None]=None,
        fieldD: _typing.Union[str, None]=None,
        fieldE: _typing.Union[str, None]=None,
        fieldF: _typing.Union[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]], None]=None,
        fieldG: _typing.Union[_typing.Mapping[str, _typing.Mapping[str, _typing.Mapping[str, int]]], None]=None,
        fieldH: _typing.Union[_typing.Sequence[_typing.AbstractSet[int]], None]=None,
        fieldI: _typing.Union[bool, None]=None,
        fieldJ: _typing.Union[_typing.Mapping[str, _typing.Sequence[int]], None]=None,
        fieldK: _typing.Union[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]], None]=None,
        fieldL: _typing.Union[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]], None]=None,
        fieldM: _typing.Union[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]], None]=None,
        fieldN: _typing.Union[_typing.Sequence[int], None]=None,
        fieldO: _typing.Union[_typing.Sequence[float], None]=None,
        fieldP: _typing.Union[_typing.Sequence[int], None]=None,
        fieldQ: _typing.Union[MyEnumA, None]=None,
        fieldR: _typing.Union[_typing.Mapping[str, bool], None]=None,
        fieldS: _typing.Union[SmallStruct, None]=None,
        fieldT: _typing.Union[SmallStruct, None]=None,
        fieldU: _typing.Union[SmallStruct, None]=None,
        fieldX: _typing.Union[SmallStruct, None]=None
    ) -> containerStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['containerStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'containerStruct') -> bool: ...
    def __gt__(self, other: 'containerStruct') -> bool: ...
    def __le__(self, other: 'containerStruct') -> bool: ...
    def __ge__(self, other: 'containerStruct') -> bool: ...

    def _to_python(self) -> "module.thrift_types.containerStruct": ...   # type: ignore
    def _to_py3(self) -> containerStruct: ...
    def _to_py_deprecated(self) -> "module.ttypes.containerStruct": ...   # type: ignore

class Map__string_bool(_typing.Mapping[str, bool], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[str, bool]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[str, bool]: ...
    def __getitem__(self, key: str) -> bool: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


class Set__i32(_typing.AbstractSet[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[int]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[int]) -> 'Set__i32': ...
    def intersection(self, other: _typing.AbstractSet[int]) -> 'Set__i32': ...
    def difference(self, other: _typing.AbstractSet[int]) -> 'Set__i32': ...
    def symmetric_difference(self, other: _typing.AbstractSet[int]) -> 'Set__i32': ...
    def issubset(self, other: _typing.AbstractSet[int]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[int]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


_List__i32T = _typing.TypeVar('_List__i32T', bound=_typing.Sequence[int])


class List__i32(_typing.Sequence[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[int]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> int: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[int]: ...
    def __add__(self, other: _typing.Sequence[int]) -> 'List__i32': ...
    def __radd__(self, other: _List__i32T) -> _List__i32T: ...
    def __reversed__(self) -> _typing.Iterator[int]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


_List__List__i32T = _typing.TypeVar('_List__List__i32T', bound=_typing.Sequence[_typing.Sequence[int]])


class List__List__i32(_typing.Sequence[_typing.Sequence[int]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_typing.Sequence[int]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_typing.Sequence[int]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.Sequence[int]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.Sequence[int]]: ...
    def __add__(self, other: _typing.Sequence[_typing.Sequence[int]]) -> 'List__List__i32': ...
    def __radd__(self, other: _List__List__i32T) -> _List__List__i32T: ...
    def __reversed__(self) -> _typing.Iterator[_typing.Sequence[int]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence[int]]: ...


_List__List__List__i32T = _typing.TypeVar('_List__List__List__i32T', bound=_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]])


class List__List__List__i32(_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.Sequence[_typing.Sequence[int]]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]: ...
    def __add__(self, other: _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]) -> 'List__List__List__i32': ...
    def __radd__(self, other: _List__List__List__i32T) -> _List__List__List__i32T: ...
    def __reversed__(self) -> _typing.Iterator[_typing.Sequence[_typing.Sequence[int]]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence[_typing.Sequence[int]]]: ...


class Map__string_i32(_typing.Mapping[str, int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[str, int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[str, int]: ...
    def __getitem__(self, key: str) -> int: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


class Map__string_Map__string_i32(_typing.Mapping[str, _typing.Mapping[str, int]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[str, _typing.Mapping[str, int]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[str, _typing.Mapping[str, int]]: ...
    def __getitem__(self, key: str) -> _typing.Mapping[str, int]: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


class Map__string_Map__string_Map__string_i32(_typing.Mapping[str, _typing.Mapping[str, _typing.Mapping[str, int]]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[str, _typing.Mapping[str, _typing.Mapping[str, int]]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[str, _typing.Mapping[str, _typing.Mapping[str, int]]]: ...
    def __getitem__(self, key: str) -> _typing.Mapping[str, _typing.Mapping[str, int]]: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


_List__Set__i32T = _typing.TypeVar('_List__Set__i32T', bound=_typing.Sequence[_typing.AbstractSet[int]])


class List__Set__i32(_typing.Sequence[_typing.AbstractSet[int]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_typing.AbstractSet[int]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_typing.AbstractSet[int]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.AbstractSet[int]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.AbstractSet[int]]: ...
    def __add__(self, other: _typing.Sequence[_typing.AbstractSet[int]]) -> 'List__Set__i32': ...
    def __radd__(self, other: _List__Set__i32T) -> _List__Set__i32T: ...
    def __reversed__(self) -> _typing.Iterator[_typing.AbstractSet[int]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.AbstractSet[int]]: ...


class Map__string_List__i32(_typing.Mapping[str, _typing.Sequence[int]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[str, _typing.Sequence[int]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[str, _typing.Sequence[int]]: ...
    def __getitem__(self, key: str) -> _typing.Sequence[int]: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


_List__List__List__List__i32T = _typing.TypeVar('_List__List__List__List__i32T', bound=_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]])


class List__List__List__List__i32(_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]: ...
    def __add__(self, other: _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]) -> 'List__List__List__List__i32': ...
    def __radd__(self, other: _List__List__List__List__i32T) -> _List__List__List__List__i32T: ...
    def __reversed__(self) -> _typing.Iterator[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]: ...


class Set__bool(_typing.AbstractSet[bool], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[bool]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[bool]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[bool]) -> 'Set__bool': ...
    def intersection(self, other: _typing.AbstractSet[bool]) -> 'Set__bool': ...
    def difference(self, other: _typing.AbstractSet[bool]) -> 'Set__bool': ...
    def symmetric_difference(self, other: _typing.AbstractSet[bool]) -> 'Set__bool': ...
    def issubset(self, other: _typing.AbstractSet[bool]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[bool]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[bool]: ...


class Set__Set__bool(_typing.AbstractSet[_typing.AbstractSet[bool]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[bool]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[_typing.AbstractSet[bool]]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[_typing.AbstractSet[bool]]) -> 'Set__Set__bool': ...
    def intersection(self, other: _typing.AbstractSet[_typing.AbstractSet[bool]]) -> 'Set__Set__bool': ...
    def difference(self, other: _typing.AbstractSet[_typing.AbstractSet[bool]]) -> 'Set__Set__bool': ...
    def symmetric_difference(self, other: _typing.AbstractSet[_typing.AbstractSet[bool]]) -> 'Set__Set__bool': ...
    def issubset(self, other: _typing.AbstractSet[_typing.AbstractSet[bool]]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[_typing.AbstractSet[bool]]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[_typing.AbstractSet[bool]]: ...


class Set__Set__Set__bool(_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]) -> 'Set__Set__Set__bool': ...
    def intersection(self, other: _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]) -> 'Set__Set__Set__bool': ...
    def difference(self, other: _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]) -> 'Set__Set__Set__bool': ...
    def symmetric_difference(self, other: _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]) -> 'Set__Set__Set__bool': ...
    def issubset(self, other: _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[bool]]]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[_typing.AbstractSet[_typing.AbstractSet[bool]]]: ...


class Set__List__i32(_typing.AbstractSet[_typing.Sequence[int]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[_typing.Sequence[int]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[_typing.Sequence[int]]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[_typing.Sequence[int]]) -> 'Set__List__i32': ...
    def intersection(self, other: _typing.AbstractSet[_typing.Sequence[int]]) -> 'Set__List__i32': ...
    def difference(self, other: _typing.AbstractSet[_typing.Sequence[int]]) -> 'Set__List__i32': ...
    def symmetric_difference(self, other: _typing.AbstractSet[_typing.Sequence[int]]) -> 'Set__List__i32': ...
    def issubset(self, other: _typing.AbstractSet[_typing.Sequence[int]]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[_typing.Sequence[int]]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence[int]]: ...


class Set__string(_typing.AbstractSet[str], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[str]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[str]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def intersection(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def difference(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def symmetric_difference(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def issubset(self, other: _typing.AbstractSet[str]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[str]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


_List__Set__stringT = _typing.TypeVar('_List__Set__stringT', bound=_typing.Sequence[_typing.AbstractSet[str]])


class List__Set__string(_typing.Sequence[_typing.AbstractSet[str]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_typing.AbstractSet[str]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_typing.AbstractSet[str]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.AbstractSet[str]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.AbstractSet[str]]: ...
    def __add__(self, other: _typing.Sequence[_typing.AbstractSet[str]]) -> 'List__Set__string': ...
    def __radd__(self, other: _List__Set__stringT) -> _List__Set__stringT: ...
    def __reversed__(self) -> _typing.Iterator[_typing.AbstractSet[str]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.AbstractSet[str]]: ...


class Map__List__Set__string_string(_typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]: ...
    def __getitem__(self, key: _typing.Sequence[_typing.AbstractSet[str]]) -> str: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence[_typing.AbstractSet[str]]]: ...


class Map__Set__List__i32_Map__List__Set__string_string(_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]: ...
    def __getitem__(self, key: _typing.AbstractSet[_typing.Sequence[int]]) -> _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]: ...
    def __iter__(self) -> _typing.Iterator[_typing.AbstractSet[_typing.Sequence[int]]]: ...


_List__Foo__i64T = _typing.TypeVar('_List__Foo__i64T', bound=_typing.Sequence[int])


class List__Foo__i64(_typing.Sequence[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[int]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> int: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[int]: ...
    def __add__(self, other: _typing.Sequence[int]) -> 'List__Foo__i64': ...
    def __radd__(self, other: _List__Foo__i64T) -> _List__Foo__i64T: ...
    def __reversed__(self) -> _typing.Iterator[int]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


_List__Bar__doubleT = _typing.TypeVar('_List__Bar__doubleT', bound=_typing.Sequence[float])


class List__Bar__double(_typing.Sequence[float], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[float]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[float]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> float: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[float]: ...
    def __add__(self, other: _typing.Sequence[float]) -> 'List__Bar__double': ...
    def __radd__(self, other: _List__Bar__doubleT) -> _List__Bar__doubleT: ...
    def __reversed__(self) -> _typing.Iterator[float]: ...
    def __iter__(self) -> _typing.Iterator[float]: ...


_List__Baz__i32T = _typing.TypeVar('_List__Baz__i32T', bound=_typing.Sequence[int])


class List__Baz__i32(_typing.Sequence[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[int]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> int: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[int]: ...
    def __add__(self, other: _typing.Sequence[int]) -> 'List__Baz__i32': ...
    def __radd__(self, other: _List__Baz__i32T) -> _List__Baz__i32T: ...
    def __reversed__(self) -> _typing.Iterator[int]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


IndirectionA = int
IndirectionC = int
IndirectionB = float
