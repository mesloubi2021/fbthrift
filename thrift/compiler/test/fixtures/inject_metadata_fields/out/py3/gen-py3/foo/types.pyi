#
# Autogenerated by Thrift for foo.thrift
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


class Fields(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        injected_field: bool
        injected_structured_annotation_field: bool
        injected_unstructured_annotation_field: bool
        pass

    injected_field: Final[str] = ...

    injected_structured_annotation_field: Final[_typing.Optional[str]] = ...

    injected_unstructured_annotation_field: Final[_typing.Optional[str]] = ...

    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=None,
        injected_structured_annotation_field: _typing.Optional[str]=None,
        injected_unstructured_annotation_field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Union[str, None]=None,
        injected_structured_annotation_field: _typing.Union[str, None]=None,
        injected_unstructured_annotation_field: _typing.Union[str, None]=None
    ) -> Fields: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Fields'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Fields') -> bool: ...
    def __gt__(self, other: 'Fields') -> bool: ...
    def __le__(self, other: 'Fields') -> bool: ...
    def __ge__(self, other: 'Fields') -> bool: ...

    def _to_python(self) -> "foo.thrift_types.Fields": ...   # type: ignore
    def _to_py3(self) -> Fields: ...
    def _to_py_deprecated(self) -> "foo.ttypes.Fields": ...   # type: ignore

