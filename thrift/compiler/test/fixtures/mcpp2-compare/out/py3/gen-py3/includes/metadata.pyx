#
# Autogenerated by Thrift for includes.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared
from libcpp.utility cimport move as cmove

from apache.thrift.metadata.types cimport (
    cThriftMetadata,
    ThriftMetadata,
)

from includes.metadata cimport cGetThriftModuleMetadata

def getThriftModuleMetadata():
    cdef shared_ptr[cThriftMetadata] metadata
    metadata = make_shared[cThriftMetadata](cGetThriftModuleMetadata())
    return ThriftMetadata._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(metadata))
