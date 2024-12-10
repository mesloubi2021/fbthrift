#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import with_containers.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import my


class _fbthrift_unadapted_AnnotationWithContainers(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "names",  # name
            "names",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            14, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "counts",  # name
            "counts",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.MapTypeInfo(_fbthrift_python_types.typeinfo_string, _fbthrift_python_types.typeinfo_i32),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            16, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "with_containers._fbthrift_unadapted_AnnotationWithContainers"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct__fbthrift_unadapted_AnnotationWithContainers()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("with_containers.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types._fbthrift_unadapted_AnnotationWithContainers, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("with_containers.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types._fbthrift_unadapted_AnnotationWithContainers, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("with_containers.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types._fbthrift_unadapted_AnnotationWithContainers, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types._fbthrift_unadapted_AnnotationWithContainers, _fbthrift_unadapted_AnnotationWithContainers)


AnnotationWithContainers = my.AdaptedType[_fbthrift_unadapted_AnnotationWithContainers]
_fbthrift_AnnotationWithContainers = AnnotationWithContainers

class _fbthrift_unadapted_MyStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "abc",  # name
            "abc",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            (my.Adapter, lambda: _fbthrift_unadapted_AnnotationWithContainers(names=_fbthrift_python_types.List(_fbthrift_python_types.typeinfo_string, ("bar", "baz", )), counts=_fbthrift_python_types.Map(_fbthrift_python_types.typeinfo_string, _fbthrift_python_types.typeinfo_i32, { "c": 3}))),  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "with_containers._fbthrift_unadapted_MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct__fbthrift_unadapted_MyStruct()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("with_containers.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types._fbthrift_unadapted_MyStruct, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("with_containers.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types._fbthrift_unadapted_MyStruct, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("with_containers.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types._fbthrift_unadapted_MyStruct, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types._fbthrift_unadapted_MyStruct, _fbthrift_unadapted_MyStruct)


MyStruct = my.AdaptedType[_fbthrift_unadapted_MyStruct]
_fbthrift_MyStruct = MyStruct

# This unfortunately has to be down here to prevent circular imports
import with_containers.thrift_metadata

from with_containers.thrift_enums import *
_fbthrift_all_enums = [
]


def _fbthrift_metadata__struct__fbthrift_unadapted_AnnotationWithContainers():
    return with_containers.thrift_metadata.gen_metadata_struct__fbthrift_unadapted_AnnotationWithContainers()


def _fbthrift_metadata__struct__fbthrift_unadapted_MyStruct():
    return with_containers.thrift_metadata.gen_metadata_struct__fbthrift_unadapted_MyStruct()


_fbthrift_all_structs = [
    _fbthrift_unadapted_AnnotationWithContainers,
    _fbthrift_unadapted_MyStruct,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
