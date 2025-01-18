#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import module.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


class _fbthrift_compatible_with_Fiery:
    pass


class Fiery(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_Fiery, _fbthrift_python_abstract_types.Fiery):
    message: _typing.Final[str] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.Fiery": ...  # type: ignore
    def _to_py3(self) -> "module.types.Fiery": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Fiery": ...  # type: ignore
_fbthrift_Fiery = Fiery

class _fbthrift_compatible_with_Serious:
    pass


class Serious(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_Serious, _fbthrift_python_abstract_types.Serious):
    not_sonnet: _typing.Final[_typing.Optional[str]] = ...
    def __init__(
        self, *,
        not_sonnet: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.Serious": ...  # type: ignore
    def _to_py3(self) -> "module.types.Serious": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Serious": ...  # type: ignore
_fbthrift_Serious = Serious

class _fbthrift_compatible_with_ComplexFieldNames:
    pass


class ComplexFieldNames(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_ComplexFieldNames, _fbthrift_python_abstract_types.ComplexFieldNames):
    error_message: _typing.Final[str] = ...
    internal_error_message: _typing.Final[str] = ...
    def __init__(
        self, *,
        error_message: _typing.Optional[str]=...,
        internal_error_message: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.ComplexFieldNames": ...  # type: ignore
    def _to_py3(self) -> "module.types.ComplexFieldNames": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ComplexFieldNames": ...  # type: ignore
_fbthrift_ComplexFieldNames = ComplexFieldNames

class _fbthrift_compatible_with_CustomFieldNames:
    pass


class CustomFieldNames(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_CustomFieldNames, _fbthrift_python_abstract_types.CustomFieldNames):
    error_message: _typing.Final[str] = ...
    internal_error_message: _typing.Final[str] = ...
    def __init__(
        self, *,
        error_message: _typing.Optional[str]=...,
        internal_error_message: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.CustomFieldNames": ...  # type: ignore
    def _to_py3(self) -> "module.types.CustomFieldNames": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.CustomFieldNames": ...  # type: ignore
_fbthrift_CustomFieldNames = CustomFieldNames

class _fbthrift_compatible_with_ExceptionWithPrimitiveField:
    pass


class ExceptionWithPrimitiveField(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_ExceptionWithPrimitiveField, _fbthrift_python_abstract_types.ExceptionWithPrimitiveField):
    message: _typing.Final[str] = ...
    error_code: _typing.Final[int] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        error_code: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.ExceptionWithPrimitiveField": ...  # type: ignore
    def _to_py3(self) -> "module.types.ExceptionWithPrimitiveField": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ExceptionWithPrimitiveField": ...  # type: ignore
_fbthrift_ExceptionWithPrimitiveField = ExceptionWithPrimitiveField

class _fbthrift_compatible_with_ExceptionWithStructuredAnnotation:
    pass


class ExceptionWithStructuredAnnotation(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_ExceptionWithStructuredAnnotation, _fbthrift_python_abstract_types.ExceptionWithStructuredAnnotation):
    message_field: _typing.Final[str] = ...
    error_code: _typing.Final[int] = ...
    def __init__(
        self, *,
        message_field: _typing.Optional[str]=...,
        error_code: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.ExceptionWithStructuredAnnotation": ...  # type: ignore
    def _to_py3(self) -> "module.types.ExceptionWithStructuredAnnotation": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ExceptionWithStructuredAnnotation": ...  # type: ignore
_fbthrift_ExceptionWithStructuredAnnotation = ExceptionWithStructuredAnnotation

class _fbthrift_compatible_with_Banal:
    pass


class Banal(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_Banal, _fbthrift_python_abstract_types.Banal):
    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.Banal": ...  # type: ignore
    def _to_py3(self) -> "module.types.Banal": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Banal": ...  # type: ignore
_fbthrift_Banal = Banal


class _fbthrift_Raiser_doBland_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_doBland_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_Raiser_doRaise_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_doRaise_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]
    b: _typing.Final[_fbthrift_Banal]
    f: _typing.Final[_fbthrift_Fiery]
    s: _typing.Final[_fbthrift_Serious]

    def __init__(
        self, *, success: _typing.Optional[None] = ..., b: _typing.Optional[_fbthrift_Banal]=..., f: _typing.Optional[_fbthrift_Fiery]=..., s: _typing.Optional[_fbthrift_Serious]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
            _fbthrift_Banal,
            _fbthrift_Fiery,
            _fbthrift_Serious,
        ]]]: ...


class _fbthrift_Raiser_get200_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_get200_result(_fbthrift_python_types.Struct):
    success: _typing.Final[str]

    def __init__(
        self, *, success: _typing.Optional[str] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
        ]]]: ...


class _fbthrift_Raiser_get500_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_get500_result(_fbthrift_python_types.Struct):
    success: _typing.Final[str]
    f: _typing.Final[_fbthrift_Fiery]
    b: _typing.Final[_fbthrift_Banal]
    s: _typing.Final[_fbthrift_Serious]

    def __init__(
        self, *, success: _typing.Optional[str] = ..., f: _typing.Optional[_fbthrift_Fiery]=..., b: _typing.Optional[_fbthrift_Banal]=..., s: _typing.Optional[_fbthrift_Serious]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
            _fbthrift_Fiery,
            _fbthrift_Banal,
            _fbthrift_Serious,
        ]]]: ...
