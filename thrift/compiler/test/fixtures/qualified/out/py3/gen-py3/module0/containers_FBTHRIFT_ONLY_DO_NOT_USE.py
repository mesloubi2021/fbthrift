#
# Autogenerated by Thrift for module0.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import thrift.py3.types
import importlib
from collections.abc import Mapping, Sequence, Set

"""
    This is a helper module to define py3 container types.
    All types defined here are re-exported in the parent `.types` module.
    Only `import` types defined here via the parent `.types` module.
    If you `import` them directly from here, you will get nasty import errors.
"""

_fbthrift__module_name__ = "module0.types"

import module0.types as _module0_types

def get_types_reflection():
    return importlib.import_module(
        "module0.types_reflection"
    )

__all__ = []

class List__Enum(thrift.py3.types.List):
    __module__ = _fbthrift__module_name__
    __slots__ = ()

    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Enum):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Enum._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Enum)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, _module0_types.Enum) or
            isinstance(item, thrift.py3.types.BadEnum)
        ):
            raise TypeError(f"{item!r} is not of type _module0_types.Enum")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module0_types.Enum):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Enum()


Sequence.register(List__Enum)

__all__.append('List__Enum')


