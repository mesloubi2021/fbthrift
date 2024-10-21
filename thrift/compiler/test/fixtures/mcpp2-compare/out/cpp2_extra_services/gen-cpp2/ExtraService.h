/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ExtraServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"
#if __has_include("thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ParamService.h")
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ParamService.h"
#else
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_handlers.h"
#endif
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace extra::svc {
class ExtraService;
class ExtraServiceAsyncProcessor;

class ExtraServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // namespace extra::svc

namespace apache::thrift {
template <>
class ServiceHandler<::extra::svc::ExtraService> : virtual public ::some::valid::ns::ParamServiceSvIf {
 public:
  std::string_view getGeneratedName() const override { return "ExtraService"; }

  typedef ::extra::svc::ExtraServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual bool sync_simple_function();
  [[deprecated("Use sync_simple_function instead")]] virtual bool simple_function();
  virtual folly::Future<bool> future_simple_function();
  virtual folly::SemiFuture<bool> semifuture_simple_function();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<bool> co_simple_function();
  virtual folly::coro::Task<bool> co_simple_function(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_simple_function(apache::thrift::HandlerCallbackPtr<bool> callback);
  virtual void async_eb_throws_function(apache::thrift::HandlerCallbackPtr<void> callback);
  virtual bool sync_throws_function2(bool /*param1*/);
  [[deprecated("Use sync_throws_function2 instead")]] virtual bool throws_function2(bool /*param1*/);
  virtual folly::Future<bool> future_throws_function2(bool p_param1);
  virtual folly::SemiFuture<bool> semifuture_throws_function2(bool p_param1);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<bool> co_throws_function2(bool p_param1);
  virtual folly::coro::Task<bool> co_throws_function2(apache::thrift::RequestParams params, bool p_param1);
#endif
  virtual void async_tm_throws_function2(apache::thrift::HandlerCallbackPtr<bool> callback, bool p_param1);
  virtual void sync_throws_function3(::std::map<::std::int32_t, ::std::string>& /*_return*/, bool /*param1*/, const ::std::string& /*param2*/);
  [[deprecated("Use sync_throws_function3 instead")]] virtual void throws_function3(::std::map<::std::int32_t, ::std::string>& /*_return*/, bool /*param1*/, const ::std::string& /*param2*/);
  virtual folly::Future<::std::map<::std::int32_t, ::std::string>> future_throws_function3(bool p_param1, const ::std::string& p_param2);
  virtual folly::SemiFuture<::std::map<::std::int32_t, ::std::string>> semifuture_throws_function3(bool p_param1, const ::std::string& p_param2);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::std::map<::std::int32_t, ::std::string>> co_throws_function3(bool p_param1, const ::std::string& p_param2);
  virtual folly::coro::Task<::std::map<::std::int32_t, ::std::string>> co_throws_function3(apache::thrift::RequestParams params, bool p_param1, const ::std::string& p_param2);
#endif
  virtual void async_tm_throws_function3(apache::thrift::HandlerCallbackPtr<::std::map<::std::int32_t, ::std::string>> callback, bool p_param1, const ::std::string& p_param2);
  virtual void sync_oneway_void_ret();
  [[deprecated("Use sync_oneway_void_ret instead")]] virtual void oneway_void_ret();
  virtual folly::Future<folly::Unit> future_oneway_void_ret();
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_oneway_void_ret();
  virtual folly::coro::Task<void> co_oneway_void_ret(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_oneway_void_ret(apache::thrift::HandlerCallbackOneWay::Ptr callback);
  virtual void sync_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t /*param1*/, ::std::int32_t /*param2*/, ::std::int32_t /*param3*/, ::std::int32_t /*param4*/, ::std::int32_t /*param5*/);
  [[deprecated("Use sync_oneway_void_ret_i32_i32_i32_i32_i32_param instead")]] virtual void oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t /*param1*/, ::std::int32_t /*param2*/, ::std::int32_t /*param3*/, ::std::int32_t /*param4*/, ::std::int32_t /*param5*/);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5);
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5);
  virtual folly::coro::Task<void> co_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::RequestParams params, ::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5);
#endif
  virtual void async_tm_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::HandlerCallbackOneWay::Ptr callback, ::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5);
  virtual void async_eb_oneway_void_ret_map_setlist_param(apache::thrift::HandlerCallbackOneWay::Ptr callback, const ::std::map<::std::string, ::std::int64_t>& p_param1, const ::std::set<::std::vector<::std::string>>& p_param2);
  virtual void sync_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& /*param1*/);
  [[deprecated("Use sync_oneway_void_ret_struct_param instead")]] virtual void oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& /*param1*/);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1);
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1);
  virtual folly::coro::Task<void> co_oneway_void_ret_struct_param(apache::thrift::RequestParams params, const ::some::valid::ns::MyStruct& p_param1);
#endif
  virtual void async_tm_oneway_void_ret_struct_param(apache::thrift::HandlerCallbackOneWay::Ptr callback, const ::some::valid::ns::MyStruct& p_param1);
  virtual void sync_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& /*param1*/);
  [[deprecated("Use sync_oneway_void_ret_listunion_param instead")]] virtual void oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& /*param1*/);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1);
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1);
  virtual folly::coro::Task<void> co_oneway_void_ret_listunion_param(apache::thrift::RequestParams params, const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1);
#endif
  virtual void async_tm_oneway_void_ret_listunion_param(apache::thrift::HandlerCallbackOneWay::Ptr callback, const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1);
 private:
  static ::extra::svc::ExtraServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_simple_function{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_throws_function2{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_throws_function3{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret_i32_i32_i32_i32_i32_param{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret_struct_param{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret_listunion_param{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace extra::svc {
using ExtraServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<ExtraService> instead")]] = ::apache::thrift::ServiceHandler<ExtraService>;
} // namespace extra::svc

namespace extra::svc {
class ExtraServiceSvNull : public ::apache::thrift::ServiceHandler<ExtraService>, virtual public ::apache::thrift::ServiceHandler<::some::valid::ns::ParamService> {
 public:
  bool simple_function() override;
  bool throws_function2(bool /*param1*/) override;
  void throws_function3(::std::map<::std::int32_t, ::std::string>& /*_return*/, bool /*param1*/, const ::std::string& /*param2*/) override;
  void oneway_void_ret() override;
  void oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t /*param1*/, ::std::int32_t /*param2*/, ::std::int32_t /*param3*/, ::std::int32_t /*param4*/, ::std::int32_t /*param5*/) override;
  void oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& /*param1*/) override;
  void oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& /*param1*/) override;
};

class ExtraServiceAsyncProcessor : public ::some::valid::ns::ParamServiceAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = ::some::valid::ns::ParamServiceAsyncProcessor;
 protected:
  ::apache::thrift::ServiceHandler<::extra::svc::ExtraService>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<ExtraServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const ExtraServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const ExtraServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_simple_function(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_simple_function(apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_throws_function(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_throws_function(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_throws_function2(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_throws_function2(apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_throws_function3(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_throws_function3(apache::thrift::ContextStack* ctx, ::std::map<::std::int32_t, ::std::string> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_oneway_void_ret(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_map_setlist_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_oneway_void_ret_map_setlist_param(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_struct_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_oneway_void_ret_struct_param(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_listunion_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_oneway_void_ret_listunion_param(apache::thrift::ServerRequest&& serverRequest);
 public:
  ExtraServiceAsyncProcessor(::apache::thrift::ServiceHandler<::extra::svc::ExtraService>* iface) :
      ::some::valid::ns::ParamServiceAsyncProcessor(iface),
      iface_(iface) {}
  ~ExtraServiceAsyncProcessor() override {}
};

} // namespace extra::svc
