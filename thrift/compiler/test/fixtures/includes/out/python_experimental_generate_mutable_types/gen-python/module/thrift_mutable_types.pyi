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
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions

import includes.thrift_types


class _fbthrift_compatible_with_MyStruct:
    pass


class MyStruct(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_MyStruct):
    MyIncludedField: includes.thrift_mutable_types.Included = ...
    MyOtherIncludedField: includes.thrift_mutable_types.Included = ...
    MyIncludedInt: int = ...
    def __init__(
        self, *,
        MyIncludedField: _typing.Optional[includes.thrift_mutable_types._fbthrift_compatible_with_Included]=...,
        MyOtherIncludedField: _typing.Optional[includes.thrift_mutable_types._fbthrift_compatible_with_Included]=...,
        MyIncludedInt: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyIncludedField: _typing.Optional[includes.thrift_mutable_types._fbthrift_compatible_with_Included]=...,
        MyOtherIncludedField: _typing.Optional[includes.thrift_mutable_types._fbthrift_compatible_with_Included]=...,
        MyIncludedInt: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[includes.thrift_mutable_types.Included, includes.thrift_mutable_types.Included, int]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.MyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore
