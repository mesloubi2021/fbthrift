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

import folly.iobuf as _fbthrift_iobuf
import module.thrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers


class _fbthrift_compatible_with_Limits:
    pass


class Limits(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Limits, module.thrift_abstract_types.Limits):

    @property
    def max_i64_field(self) -> int: ...
    @max_i64_field.setter
    def max_i64_field(self, value: int): ...


    @property
    def min_i64_field(self) -> int: ...
    @min_i64_field.setter
    def min_i64_field(self, value: int): ...


    @property
    def max_i32_field(self) -> int: ...
    @max_i32_field.setter
    def max_i32_field(self, value: int): ...


    @property
    def min_i32_field(self) -> int: ...
    @min_i32_field.setter
    def min_i32_field(self, value: int): ...


    @property
    def max_i16_field(self) -> int: ...
    @max_i16_field.setter
    def max_i16_field(self, value: int): ...


    @property
    def min_i16_field(self) -> int: ...
    @min_i16_field.setter
    def min_i16_field(self, value: int): ...


    @property
    def max_byte_field(self) -> int: ...
    @max_byte_field.setter
    def max_byte_field(self, value: int): ...


    @property
    def min_byte_field(self) -> int: ...
    @min_byte_field.setter
    def min_byte_field(self, value: int): ...

    def __init__(
        self, *,
        max_i64_field: _typing.Optional[int]=...,
        min_i64_field: _typing.Optional[int]=...,
        max_i32_field: _typing.Optional[int]=...,
        min_i32_field: _typing.Optional[int]=...,
        max_i16_field: _typing.Optional[int]=...,
        min_i16_field: _typing.Optional[int]=...,
        max_byte_field: _typing.Optional[int]=...,
        min_byte_field: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        max_i64_field: _typing.Optional[int]=...,
        min_i64_field: _typing.Optional[int]=...,
        max_i32_field: _typing.Optional[int]=...,
        min_i32_field: _typing.Optional[int]=...,
        max_i16_field: _typing.Optional[int]=...,
        min_i16_field: _typing.Optional[int]=...,
        max_byte_field: _typing.Optional[int]=...,
        min_byte_field: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int, int, int, int, int, int]]]: ...
    def _to_python(self) -> "module.thrift_types.Limits": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.Limits": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Limits": ...  # type: ignore


max_i64_const: int = ...

min_i64_const: int = ...

max_i32_const: int = ...

min_i32_const: int = ...

max_i16_const: int = ...

min_i16_const: int = ...

max_byte_const: int = ...

min_byte_const: int = ...
