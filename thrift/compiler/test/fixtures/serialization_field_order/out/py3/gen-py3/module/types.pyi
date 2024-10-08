#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/serialization_field_order/src/module.thrift
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


class Foo(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        field1: bool
        field2: bool
        field3: bool
        pass

    field1: Final[int] = ...

    field2: Final[int] = ...

    field3: Final[int] = ...

    def __init__(
        self, *,
        field1: _typing.Optional[int]=None,
        field2: _typing.Optional[int]=None,
        field3: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        field1: _typing.Union[int, None]=None,
        field2: _typing.Union[int, None]=None,
        field3: _typing.Union[int, None]=None
    ) -> Foo: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Foo'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Foo') -> bool: ...
    def __gt__(self, other: 'Foo') -> bool: ...
    def __le__(self, other: 'Foo') -> bool: ...
    def __ge__(self, other: 'Foo') -> bool: ...

    def _to_python(self) -> "module.thrift_types.Foo": ...   # type: ignore
    def _to_py3(self) -> Foo: ...
    def _to_py_deprecated(self) -> "module.ttypes.Foo": ...   # type: ignore

class Foo2(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        field1: bool
        field2: bool
        field3: bool
        pass

    field1: Final[int] = ...

    field2: Final[int] = ...

    field3: Final[int] = ...

    def __init__(
        self, *,
        field1: _typing.Optional[int]=None,
        field2: _typing.Optional[int]=None,
        field3: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        field1: _typing.Union[int, None]=None,
        field2: _typing.Union[int, None]=None,
        field3: _typing.Union[int, None]=None
    ) -> Foo2: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Foo2'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Foo2') -> bool: ...
    def __gt__(self, other: 'Foo2') -> bool: ...
    def __le__(self, other: 'Foo2') -> bool: ...
    def __ge__(self, other: 'Foo2') -> bool: ...

    def _to_python(self) -> "module.thrift_types.Foo2": ...   # type: ignore
    def _to_py3(self) -> Foo2: ...
    def _to_py_deprecated(self) -> "module.ttypes.Foo2": ...   # type: ignore

