#
# Autogenerated by Thrift for hsmodule.thrift
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

_fbthrift__module_name__ = "my.namespacing.test.hsmodule.types"

import my.namespacing.test.hsmodule.types as _my_namespacing_test_hsmodule_types

def get_types_reflection():
    return importlib.import_module(
        "my.namespacing.test.hsmodule.types_reflection"
    )

__all__ = []

