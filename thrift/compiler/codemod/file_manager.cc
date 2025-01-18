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

#include <string>
#include <fmt/core.h>
#include <folly/FileUtil.h>

#include <thrift/compiler/codemod/file_manager.h>

namespace apache::thrift::compiler::codemod {

namespace {

// Subset of "standard whitespace" characters (as defined in
// https://en.cppreference.com/w/c/string/byte/isspace) that only cause
// horizontal movement (i.e., indentation)
constexpr const char* kHorizontalWhitespaceChars = " \t";

size_t get_first_character_of_this_line(
    const std::string& content, size_t pos) {
  // NOTE: `pos` may be the trailing newline of this line, so need to start
  // search for preceding newline (if any) *before* `pos`.

  // If there are no previous characters, `pos` is the first character of this
  // line (and of the entire content).
  if (pos == 0) {
    return 0;
  }

  // Otherwise, `pos` is not the first character in the content, look for any
  // preceding newline (marking the end of the previous line).
  const std::string::size_type line_start_offset =
      content.find_last_of("\n", pos - 1);

  if (line_start_offset == std::string::npos) {
    // If no preceding newline is found, `pos` is in the first line of
    // `content`, and therefore the line begins at the start of the string.
    return 0;
  } else {
    // Otherwise, the line starts just past the last found newline.
    return line_start_offset + 1;
  }
}

} // namespace

std::string file_manager::get_new_content() const {
  size_t prev_end = 0;
  std::string new_content;

  if (replacements_.empty()) {
    return old_content_;
  }

  // Perform the replacements.
  for (const auto& r : replacements_) {
    // Only apply replacements that are not overlapped with previous one.
    if (prev_end <= r.begin_pos) {
      new_content.append(old_content_, prev_end, r.begin_pos - prev_end);
      new_content += r.new_content;
      prev_end = r.end_pos;
    }
  }

  // Get the last part of the file.
  new_content += old_content_.substr(prev_end);
  return new_content;
}

void file_manager::apply_replacements() {
  if (replacements_.empty()) {
    fmt::print("No changes produced\n");
    return;
  }

  // No need for catching nor throwing here since if file doesn't exist
  // the constructor itself will throw an exception.
  folly::writeFile(get_new_content(), program_->path().c_str());

  fmt::print("{} replacements\n", replacements_.size());
}

// NOTE: Rely on automated formatting to fix formatting issues.
void file_manager::remove(const t_annotation& annotation) {
  size_t begin_offset = to_offset(annotation.second.src_range.begin);
  size_t end_offset = to_offset(annotation.second.src_range.end);

  expand_over_whitespaces(begin_offset, end_offset, true /* one_sided */);

  if (end_offset < old_content_.length() && old_content_[end_offset] == ',') {
    end_offset++;
  } else if (
      begin_offset >= 1 && end_offset < old_content_.length() &&
      old_content_[begin_offset - 1] == '(' &&
      old_content_[end_offset] == ')') {
    --begin_offset;
    ++end_offset;
  }

  add({begin_offset, end_offset, ""});
}

// Also expands over trailing commas.
void file_manager::expand_over_whitespaces(
    size_t& begin_offset, size_t& end_offset, bool one_sided) const noexcept {
  while (begin_offset >= 1 && isspace(old_content_[begin_offset - 1])) {
    begin_offset--;
  }

  while (end_offset < old_content_.length() &&
         isspace(old_content_[end_offset])) {
    end_offset++;
  }
  if (end_offset < old_content_.length() && old_content_[end_offset] == ',') {
    end_offset++;
  }
  if (one_sided) {
    return;
  }
  while (
      end_offset < old_content_.length() &&
      (isspace(old_content_[end_offset]) || old_content_[end_offset] == ',')) {
    end_offset++;
  }
}

void file_manager::add_include(std::string include) {
  if (includes_.contains(include)) {
    return;
  }

  std::string curr_include = "include \"" + include + "\"\n";
  includes_.insert(std::move(include));
  size_t offset;
  if (!program_->includes().empty()) {
    offset = to_offset(program_->includes().back()->src_range().end) + 1;
  } else {
    offset = program_->definitions().empty()
        ? 0
        : to_offset(program_->definitions().front().src_range().begin);
    curr_include += "\n";
  }
  replacements_.insert({offset, offset, curr_include, /* is_include= */ true});
}

void file_manager::remove_all_annotations(const t_node& node) {
  size_t begin_offset = SIZE_MAX;
  size_t end_offset = 0;

  for (const auto& annotation : node.annotations()) {
    begin_offset = std::min<size_t>(
        begin_offset, to_offset(annotation.second.src_range.begin));
    end_offset = std::max<size_t>(
        end_offset, to_offset(annotation.second.src_range.end));
  }

  expand_over_whitespaces(begin_offset, end_offset, false /* one_sided */);

  if (begin_offset >= 1 && end_offset < old_content_.length() &&
      old_content_[begin_offset - 1] == '(' &&
      old_content_[end_offset] == ')') {
    --begin_offset;
    ++end_offset;
  }

  replacements_.insert({begin_offset, end_offset, ""});
}

source_range file_manager::get_line_leading_whitespace(
    source_location loc) const {
  const size_t loc_offset = loc.offset();

  const size_t line_start_offset =
      get_first_character_of_this_line(old_content_, loc_offset);

  std::string::size_type whitespace_end_offset = old_content_.find_first_not_of(
      kHorizontalWhitespaceChars, line_start_offset);
  if (whitespace_end_offset == std::string::npos) {
    whitespace_end_offset = old_content_.size();
  }

  const source_location source_start = source_mgr_.get_source_start(loc);
  return source_range{
      .begin = source_start + line_start_offset,
      .end = source_start + whitespace_end_offset,
  };
}

void file_manager::set_namespace(
    const std::string& language, const std::string& ns) {
  size_t offset = get_namespace_offset();
  replacements_.insert(
      {offset, offset, fmt::format("namespace {} \"{}\"\n", language, ns)});
}

/*
 * If namespaces are provided, then the new namespace
 * should be placed alongwith other namespaces.
 * Otherwise the new content should be placed after includes and before
 * definitions.
 */
size_t file_manager::get_namespace_offset() const {
  if (!program_->namespaces().empty()) {
    size_t min_offset = old_content_.length();
    // Finds the offset of first namespace statement in the file.
    for (const auto& [lang, _] : program_->namespaces()) {
      auto ns_stmt = "namespace " + lang;
      auto offset = old_content_.find(ns_stmt, 0);
      if (offset != std::string::npos && min_offset > offset) {
        min_offset = offset;
      }
    }
    if (min_offset != old_content_.length()) {
      return min_offset;
    }
  }
  if (!program_->includes().empty()) {
    return to_offset(program_->includes().back()->src_range().end) + 1;
  }
  if (!program_->definitions().empty()) {
    return to_offset(program_->definitions().front().src_range().begin);
  }
  return 0;
}

void file_manager::remove_namespace(std::string language) {
  if (!program_->namespaces().empty() &&
      program_->namespaces().find(language) != program_->namespaces().end()) {
    // get offsets for the namespace statement
    auto ns_stmt = fmt::format("namespace {} ", language);
    auto begin_offset = old_content_.find(ns_stmt, 0);
    size_t end_offset = old_content_.length();
    if (begin_offset != std::string::npos) {
      end_offset = old_content_.find("\n", begin_offset);
      if (end_offset < old_content_.length()) {
        end_offset++;
      }
    }
    add({begin_offset, end_offset, ""});
  }
}
} // namespace apache::thrift::compiler::codemod
