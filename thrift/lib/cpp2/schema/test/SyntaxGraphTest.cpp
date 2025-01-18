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

#include <folly/portability/GMock.h>
#include <folly/portability/GTest.h>

#include <folly/Utility.h>

#include <thrift/lib/cpp2/schema/SyntaxGraph.h>

#include <thrift/lib/cpp2/schema/test/gen-cpp2/syntax_graph_2_handlers.h>
#include <thrift/lib/cpp2/schema/test/gen-cpp2/syntax_graph_handlers.h>
#include <thrift/lib/cpp2/schema/test/gen-cpp2/syntax_graph_types.h>

#include <fmt/core.h>

#include <algorithm>

namespace type = apache::thrift::type;

namespace apache::thrift::schema {

namespace {

class ServiceSchemaTest : public testing::Test {
 public:
  template <typename ServiceTag>
  static type::Schema schemaFor() {
    return apache::thrift::ServiceHandler<ServiceTag>()
        .getServiceSchema()
        .value()
        .schema;
  }

  static folly::not_null<const ProgramNode*> findProgramByName(
      const SyntaxGraph& graph, std::string_view name) {
    auto programs = graph.programs();
    auto program = std::find_if(
        programs.begin(),
        programs.end(),
        [name](folly::not_null<const ProgramNode*> program) {
          return program->name() == name;
        });
    if (program != programs.end()) {
      return *program;
    }
    throw std::logic_error(fmt::format("Program named {} not found", name));
  }
};

} // namespace

TEST_F(ServiceSchemaTest, Programs) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto programs = syntaxGraph.programs();
  EXPECT_EQ(programs.size(), 3);

  auto mainProgram = findProgramByName(syntaxGraph, "syntax_graph");
  EXPECT_EQ(mainProgram->definitions().size(), 11);
  EXPECT_EQ(&mainProgram->syntaxGraph(), &syntaxGraph);
  {
    ProgramNode::IncludesList includes = mainProgram->includes();
    EXPECT_EQ(includes.size(), 2);

    EXPECT_EQ(includes[0]->name(), "scope");
    EXPECT_EQ(includes[1]->name(), "thrift");

    EXPECT_EQ(includes[0], findProgramByName(syntaxGraph, "scope"));
    EXPECT_EQ(includes[1], findProgramByName(syntaxGraph, "thrift"));
  }

  EXPECT_THROW(
      { findProgramByName(syntaxGraph, "syntax_graph_2"); }, std::logic_error);
}

TEST_F(ServiceSchemaTest, TransitivePrograms) {
  // TestService2 is in a different file, so we should have an *extra* program.
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService2>());
  auto programs = syntaxGraph.programs();
  EXPECT_EQ(programs.size(), 4);

  auto mainProgram = findProgramByName(syntaxGraph, "syntax_graph");
  {
    ProgramNode::IncludesList includes = mainProgram->includes();
    EXPECT_EQ(includes.size(), 2);
    EXPECT_EQ(includes[0], findProgramByName(syntaxGraph, "scope"));
    EXPECT_EQ(includes[1], findProgramByName(syntaxGraph, "thrift"));
  }

  auto secondProgram = findProgramByName(syntaxGraph, "syntax_graph_2");
  EXPECT_EQ(secondProgram->definitions().size(), 1);
  EXPECT_EQ(&secondProgram->syntaxGraph(), &syntaxGraph);
  {
    ProgramNode::IncludesList includes = secondProgram->includes();
    EXPECT_EQ(includes.size(), 1);

    EXPECT_EQ(includes[0]->name(), "syntax_graph");
    EXPECT_EQ(includes[0], mainProgram);
  }
}

TEST_F(ServiceSchemaTest, RawSchemaLifetime) {
  // moved type::Schema&&
  {
    std::optional<type::Schema> schema = schemaFor<test::TestService>();
    auto syntaxGraph = SyntaxGraph::fromSchema(std::move(schema.value()));
    schema.reset();
    EXPECT_NO_THROW({ findProgramByName(syntaxGraph, "syntax_graph"); });
  }
  // copied type::Schema&&
  {
    std::optional<type::Schema> schema = schemaFor<test::TestService>();
    auto syntaxGraph = SyntaxGraph::fromSchema(folly::copy(schema.value()));
    schema.reset();
    EXPECT_NO_THROW({ findProgramByName(syntaxGraph, "syntax_graph"); });
  }
  // const type::Schema&
  {
    const type::Schema& schema = schemaFor<test::TestService>();
    auto syntaxGraph = SyntaxGraph::fromSchema(&schema);
    EXPECT_NO_THROW({ findProgramByName(syntaxGraph, "syntax_graph"); });
  }
}

TEST_F(ServiceSchemaTest, Enum) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testEnum =
      program->definitions().at("TestEnum");
  EXPECT_EQ(&testEnum->program(), program.unwrap());
  EXPECT_EQ(testEnum->kind(), DefinitionNode::Kind::ENUM);
  EXPECT_EQ(testEnum->name(), "TestEnum");
  const EnumNode& e = testEnum->asEnum();
  EXPECT_EQ(&e.definition(), testEnum.unwrap());
  EXPECT_EQ(e.uri(), "meta.com/thrift_test/TestEnum");

  const std::vector<EnumNode::Value> expected = {
      {"UNSET", 0},
      {"VALUE_1", 1},
      {"VALUE_2", 2},
  };
  EXPECT_THAT(e.values(), testing::ElementsAreArray(expected));
}

TEST_F(ServiceSchemaTest, Struct) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testStruct =
      program->definitions().at("TestStruct");
  EXPECT_EQ(&testStruct->program(), program.unwrap());
  EXPECT_EQ(testStruct->kind(), DefinitionNode::Kind::STRUCT);
  EXPECT_EQ(testStruct->name(), "TestStruct");
  const StructNode& s = testStruct->asStruct();
  EXPECT_EQ(&s.definition(), testStruct.unwrap());
  EXPECT_EQ(s.uri(), "");

  EXPECT_EQ(s.fields().size(), 2);

  EXPECT_EQ(s.fields()[0].id(), FieldId{1});
  EXPECT_EQ(
      s.fields()[0].presence(), FieldNode::PresenceQualifier::UNQUALIFIED);
  EXPECT_EQ(s.fields()[0].type().asPrimitive(), Primitive::I32);
  EXPECT_EQ(s.fields()[0].name(), "field1");
  EXPECT_EQ(s.fields()[0].customDefault()->as_i32(), 10);

  EXPECT_EQ(s.fields()[1].id(), FieldId{2});
  EXPECT_EQ(s.fields()[1].presence(), FieldNode::PresenceQualifier::OPTIONAL);
  EXPECT_EQ(
      &s.fields()[1].type().asEnum(),
      &program->definitions().at("TestEnum")->asEnum());
  EXPECT_EQ(s.fields()[1].name(), "field2");
  EXPECT_EQ(s.fields()[1].customDefault(), nullptr);
}

TEST_F(ServiceSchemaTest, Union) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testUnion =
      program->definitions().at("TestUnion");
  EXPECT_EQ(&testUnion->program(), program.unwrap());
  EXPECT_EQ(testUnion->kind(), DefinitionNode::Kind::UNION);
  EXPECT_EQ(testUnion->name(), "TestUnion");
  const UnionNode& u = testUnion->asUnion();

  EXPECT_EQ(u.fields().size(), 2);

  EXPECT_EQ(u.fields()[0].id(), FieldId{1});
  EXPECT_EQ(u.fields()[0].name(), "s");
  EXPECT_EQ(
      &u.fields()[0].type().asStruct(),
      &program->definitions().at("TestStruct")->asStruct());

  EXPECT_EQ(u.fields()[1].id(), FieldId{2});
  EXPECT_EQ(u.fields()[1].name(), "e");
  EXPECT_EQ(
      &u.fields()[1].type().asEnum(),
      &program->definitions().at("TestEnum")->asEnum());
}

TEST_F(ServiceSchemaTest, Typedefs) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> listOfTestStructTypedef =
      program->definitions().at("ListOfTestStruct");
  EXPECT_EQ(&listOfTestStructTypedef->program(), program.unwrap());
  EXPECT_EQ(listOfTestStructTypedef->kind(), DefinitionNode::Kind::TYPEDEF);
  EXPECT_EQ(listOfTestStructTypedef->name(), "ListOfTestStruct");
  const TypedefNode& t = listOfTestStructTypedef->asTypedef();

  EXPECT_EQ(
      &t.targetType().asList().elementType().asStruct(),
      &program->definitions().at("TestStruct")->asStruct());

  folly::not_null<const DefinitionNode*> typedefToListOfTestStructTypedef =
      program->definitions().at("TypedefToListOfTestStruct");
  EXPECT_EQ(&typedefToListOfTestStructTypedef->program(), program.unwrap());
  EXPECT_EQ(
      typedefToListOfTestStructTypedef->kind(), DefinitionNode::Kind::TYPEDEF);
  EXPECT_EQ(
      typedefToListOfTestStructTypedef->name(), "TypedefToListOfTestStruct");
  const TypedefNode& t2 = typedefToListOfTestStructTypedef->asTypedef();
  EXPECT_EQ(t2.targetType().kind(), TypeRef::Kind::TYPEDEF);

  EXPECT_EQ(t2.targetType(), *listOfTestStructTypedef);
  EXPECT_EQ(t2.targetType().trueType(), t.targetType());
}

TEST_F(ServiceSchemaTest, Exception) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testException =
      program->definitions().at("TestException");
  EXPECT_EQ(&testException->program(), program.unwrap());
  EXPECT_EQ(testException->kind(), DefinitionNode::Kind::EXCEPTION);
  EXPECT_EQ(testException->name(), "TestException");
  const ExceptionNode& e = testException->asException();

  EXPECT_EQ(e.fields().size(), 1);

  EXPECT_EQ(e.fields()[0].id(), FieldId{1});
  EXPECT_EQ(e.fields()[0].name(), "blob");
  EXPECT_EQ(e.fields()[0].type().asPrimitive(), Primitive::BINARY);
}

TEST_F(ServiceSchemaTest, Constant) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testConst =
      program->definitions().at("testConst");
  EXPECT_EQ(&testConst->program(), program.unwrap());
  EXPECT_EQ(testConst->kind(), DefinitionNode::Kind::CONSTANT);
  EXPECT_EQ(testConst->name(), "testConst");
  const ConstantNode& c = testConst->asConstant();

  EXPECT_EQ(
      &c.type().asStruct(),
      &program->definitions().at("TestStruct")->asStruct());
  const auto& value = c.value().as_object();
  EXPECT_EQ(value.at(FieldId{1}).as_i32(), 2);
}

TEST_F(ServiceSchemaTest, Service) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService2>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");
  auto program2 = findProgramByName(syntaxGraph, "syntax_graph_2");

  folly::not_null<const DefinitionNode*> testService =
      program->definitions().at("TestService");
  EXPECT_EQ(&testService->program(), program.unwrap());
  EXPECT_EQ(testService->kind(), DefinitionNode::Kind::SERVICE);
  EXPECT_EQ(testService->name(), "TestService");
  const ServiceNode& s = testService->asService();
  EXPECT_EQ(s.baseService(), nullptr);

  EXPECT_EQ(s.functions().size(), 4);

  EXPECT_EQ(s.functions()[0].name(), "foo");
  EXPECT_EQ(
      s.functions()[0].response().type()->asStruct().definition().name(),
      "TestStruct");
  EXPECT_EQ(s.functions()[0].response().sink(), nullptr);
  EXPECT_EQ(s.functions()[0].response().stream(), nullptr);
  EXPECT_EQ(s.functions()[0].response().interaction(), nullptr);
  EXPECT_EQ(s.functions()[0].params().size(), 1);
  EXPECT_EQ(s.functions()[0].params()[0].id(), FieldId{1});
  EXPECT_EQ(s.functions()[0].params()[0].name(), "input");
  EXPECT_EQ(s.functions()[0].params()[0].type(), TypeRef::of(Primitive::I32));

  const InteractionNode& i =
      program->definitions().at("TestInteraction")->asInteraction();

  EXPECT_EQ(s.functions()[1].name(), "createInteraction");
  EXPECT_EQ(s.functions()[1].response().type(), nullptr);
  EXPECT_EQ(s.functions()[1].response().sink(), nullptr);
  EXPECT_EQ(s.functions()[1].response().stream(), nullptr);
  EXPECT_EQ(s.functions()[1].response().interaction(), &i);

  EXPECT_EQ(s.functions()[2].name(), "createStream");
  EXPECT_EQ(*s.functions()[2].response().type(), TypeRef::of(Primitive::I32));
  EXPECT_EQ(
      s.functions()[2].response().stream()->payloadType(),
      TypeRef::of(Primitive::I32));

  EXPECT_EQ(s.functions()[3].name(), "createInteractionAndStream");
  EXPECT_EQ(*s.functions()[3].response().type(), TypeRef::of(Primitive::I32));
  EXPECT_EQ(s.functions()[3].response().interaction(), &i);
  EXPECT_EQ(
      s.functions()[3].response().stream()->payloadType(),
      TypeRef::of(Primitive::I32));
  EXPECT_EQ(s.functions()[3].response().sink(), nullptr);

  folly::not_null<const DefinitionNode*> testService2 =
      program2->definitions().at("TestService2");
  EXPECT_EQ(&testService2->program(), program2.unwrap());
  EXPECT_EQ(testService2->kind(), DefinitionNode::Kind::SERVICE);
  EXPECT_EQ(testService2->name(), "TestService2");
  const ServiceNode& s2 = testService2->asService();

  EXPECT_EQ(s2.functions().size(), 0);
  EXPECT_EQ(s2.baseService(), &s);
}

TEST_F(ServiceSchemaTest, Interaction) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testInteraction =
      program->definitions().at("TestInteraction");
  EXPECT_EQ(&testInteraction->program(), program.unwrap());
  EXPECT_EQ(testInteraction->kind(), DefinitionNode::Kind::INTERACTION);
  EXPECT_EQ(testInteraction->name(), "TestInteraction");
  const InteractionNode& i = testInteraction->asInteraction();

  EXPECT_EQ(i.functions().size(), 1);
  EXPECT_EQ(i.functions()[0].name(), "foo");
  EXPECT_EQ(*i.functions()[0].response().type(), TypeRef::of(Primitive::I32));
  EXPECT_EQ(i.functions()[0].response().sink(), nullptr);
  EXPECT_EQ(i.functions()[0].response().stream(), nullptr);
  EXPECT_EQ(i.functions()[0].response().interaction(), nullptr);

  const StructNode& testRecursiveStruct =
      program->definitions().at("TestRecursiveStruct")->asStruct();
  EXPECT_EQ(i.functions()[0].params().size(), 1);
  EXPECT_EQ(i.functions()[0].params()[0].id(), FieldId{1});
  EXPECT_EQ(i.functions()[0].params()[0].name(), "input");
  EXPECT_EQ(
      i.functions()[0].params()[0].type(), TypeRef::of(testRecursiveStruct));
}

TEST_F(ServiceSchemaTest, StructuredAnnotation) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testUnion =
      program->definitions().at("TestUnion");

  const auto& annotations = testUnion->annotations();
  EXPECT_EQ(annotations.size(), 1);
  EXPECT_EQ(
      &annotations[0].type().asStruct(),
      &program->definitions().at("TestStructuredAnnotation")->asStruct());
  EXPECT_EQ(annotations[0].fields().size(), 1);
  EXPECT_EQ(annotations[0].fields().at("field1").as_i64(), 3);
}

TEST_F(ServiceSchemaTest, RecursiveStruct) {
  auto syntaxGraph = SyntaxGraph::fromSchema(schemaFor<test::TestService>());
  auto program = findProgramByName(syntaxGraph, "syntax_graph");

  folly::not_null<const DefinitionNode*> testRecursiveStruct =
      program->definitions().at("TestRecursiveStruct");
  const StructNode& s = testRecursiveStruct->asStruct();

  EXPECT_EQ(s.fields().size(), 1);
  EXPECT_EQ(s.fields()[0].type(), TypeRef::of(s));
}

} // namespace apache::thrift::schema
