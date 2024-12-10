#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import includes.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import transitive.thrift_types
import transitive.thrift_types as _fbthrift__transitive__thrift_types


class Included(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyIntField",  # name
            "MyIntField",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            0,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyTransitiveField",  # name
            "MyTransitiveField",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.StructTypeInfo(_fbthrift__transitive__thrift_types.Foo),  # typeinfo
            lambda: transitive.thrift_types.Foo(a=2),  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "includes.Included"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Included()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("includes.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.Included, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("includes.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.Included, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("includes.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.Included, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.Included, Included)
_fbthrift_Included = Included

# This unfortunately has to be down here to prevent circular imports
import includes.thrift_metadata

from includes.thrift_enums import *
_fbthrift_all_enums = [
]


def _fbthrift_metadata__struct_Included():
    return includes.thrift_metadata.gen_metadata_struct_Included()


_fbthrift_all_structs = [
    Included,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)


ExampleIncluded = Included(MyIntField=2, MyTransitiveField=transitive.thrift_types.Foo(a=2))

IncludedConstant = 42

IncludedInt64 = int
TransitiveFoo = _fbthrift__transitive__thrift_types.Foo
