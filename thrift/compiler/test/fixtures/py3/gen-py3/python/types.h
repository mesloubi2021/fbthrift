/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/annotation/gen-py3cpp/python_data.h"
#include "thrift/annotation/gen-py3cpp/python_types.h"
#include "thrift/annotation/gen-py3cpp/python_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::facebook::thrift::annotation::python::Hidden>(
    ::facebook::thrift::annotation::python::Hidden& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::python::Flags>(
    ::facebook::thrift::annotation::python::Flags& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::python::Name>(
    ::facebook::thrift::annotation::python::Name& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::python::Name>().name_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::python::IOBuf>(
    ::facebook::thrift::annotation::python::IOBuf& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::python::Adapter>(
    ::facebook::thrift::annotation::python::Adapter& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::python::Adapter>().name_ref());
      return;
    case 1:
      obj.typeHint_ref().copy_from(default_inst<::facebook::thrift::annotation::python::Adapter>().typeHint_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::python::Hidden>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::python::Flags>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::python::Name>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::python::IOBuf>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::python::Adapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
