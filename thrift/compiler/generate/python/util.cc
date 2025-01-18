/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/compiler/generate/python/util.h>

#include <regex>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/replace.hpp>
#include <thrift/compiler/generate/cpp/util.h>

namespace apache::thrift::compiler {

bool is_type_iobuf(std::string_view name) {
  return name == "folly::IOBuf" || name == "std::unique_ptr<folly::IOBuf>";
}

bool is_type_iobuf(const t_type* type) {
  return is_type_iobuf(cpp2::get_type(type));
}

bool is_unsafe_patch_program(const t_program* prog) {
  return prog ? boost::algorithm::starts_with(prog->name(), "gen_patch_")
              : false;
}

bool type_contains_unsafe_patch(const t_type* type) {
  if (auto typedf = dynamic_cast<t_typedef const*>(type)) {
    return type_contains_unsafe_patch(typedf->get_type());
  }

  if (auto map = dynamic_cast<t_map const*>(type)) {
    return type_contains_unsafe_patch(map->get_key_type()) ||
        type_contains_unsafe_patch(map->get_val_type());
  }

  if (auto set = dynamic_cast<t_set const*>(type)) {
    return type_contains_unsafe_patch(set->get_elem_type());
  }

  if (auto list = dynamic_cast<t_list const*>(type)) {
    return type_contains_unsafe_patch(list->get_elem_type());
  }

  return is_unsafe_patch_program(type->program());
}

std::vector<std::string> get_py3_namespace(const t_program* prog) {
  t_program::namespace_config conf;
  conf.no_top_level_domain = true;
  conf.no_filename = true;
  return prog->gen_namespace_or_default("py3", conf);
}

std::string get_py3_namespace_with_name_and_prefix(
    const t_program* prog, const std::string& prefix, const std::string& sep) {
  std::ostringstream ss;
  if (!prefix.empty()) {
    ss << prefix << sep;
  }
  for (const auto& name : get_py3_namespace(prog)) {
    ss << name << sep;
  }
  ss << prog->name();
  return ss.str();
}

void strip_cpp_comments_and_newlines(std::string& s) {
  // strip c-style comments
  auto fr = s.find("/*");
  while (fr != std::string::npos) {
    auto to = s.find("*/", fr + 2);
    if (to == std::string::npos) {
      throw std::runtime_error{"no matching */ for annotation comments"};
    }
    s.erase(fr, to - fr + 2);
    fr = s.find("/*", fr);
  }
  // strip cpp-style comments
  s.replace(
      s.begin(),
      s.end(),
      std::regex_replace(
          s,
          std::regex("//.*(?=$|\\n)"), /* simulate multiline regex */
          ""));

  // strip newlines
  boost::algorithm::replace_all(s, "\n", " ");
}

namespace python {
cached_properties::cached_properties(
    std::string cpp_template, std::string type, std::string flat_name)
    : cpp_template_(std::move(cpp_template)),
      cpp_type_(std::move(type)),
      flat_name_(std::move(flat_name)) {
  strip_cpp_comments_and_newlines(cpp_type_);
}

std::string cached_properties::to_cython_template() const {
  // handle special built-ins first:
  if (cpp_template_ == "std::vector") {
    return "vector";
  } else if (cpp_template_ == "std::set") {
    return "cset";
  } else if (cpp_template_ == "std::map") {
    return "cmap";
  }
  // then default handling:
  return boost::algorithm::replace_all_copy(cpp_template_, "::", "_");
}

std::string cached_properties::to_cython_type() const {
  if (cpp_type_ == "") {
    return "";
  }
  std::string cython_type = cpp_type_;
  boost::algorithm::replace_all(cython_type, "::", "_");
  boost::algorithm::replace_all(cython_type, "<", "_");
  boost::algorithm::replace_all(cython_type, ">", "");
  boost::algorithm::replace_all(cython_type, " ", "");
  boost::algorithm::replace_all(cython_type, ", ", "_");
  boost::algorithm::replace_all(cython_type, ",", "_");
  return cython_type;
}

bool cached_properties::is_default_template(
    const apache::thrift::compiler::t_type* type) const {
  return (!type->is_container() && cpp_template_ == "") ||
      (type->is_list() && cpp_template_ == "std::vector") ||
      (type->is_set() && cpp_template_ == "std::set") ||
      (type->is_map() && cpp_template_ == "std::map");
}

void cached_properties::set_flat_name(
    const apache::thrift::compiler::t_program* this_prog,
    const apache::thrift::compiler::t_type* type,
    const std::string& extra) {
  std::string custom_prefix;
  if (!is_default_template(type)) {
    custom_prefix = to_cython_template() + "__";
  } else if (cpp_type_ != "") {
    custom_prefix = to_cython_type() + "__";
  }
  const t_program* type_program = type->program();
  if (type_program && type_program != this_prog) {
    custom_prefix += type_program->name() + "_";
  }
  custom_prefix += extra;
  flat_name_ = std::move(custom_prefix);
}

std::unordered_set<std::string_view> extract_modules_and_insert_into(
    std::string_view fully_qualified_name,
    std::unordered_set<std::string_view>& module_paths) {
  size_t start = 0;
  size_t end = 0;
  while (end != std::string_view::npos) {
    end = fully_qualified_name.find('[', start);
    size_t last_dot = fully_qualified_name.rfind('.', end);
    if (last_dot != std::string_view::npos && last_dot > start) {
      module_paths.insert(fully_qualified_name.substr(start, last_dot - start));
    }
    start = end + 1;
  }
  return module_paths;
}
} // namespace python
} // namespace apache::thrift::compiler
