/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace apache::thrift::fixtures::types {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>, ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>, ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int64_t>*>> SomeService_binary_keyed_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::binary, ::apache::thrift::type_class::integral>, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>*>> SomeService_binary_keyed_map_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::setUpAndProcess_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &SomeServiceAsyncProcessor::executeRequest_bounce_map<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::executeRequest_bounce_map(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  struct ArgsState {
    std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> uarg_m = std::make_unique<::apache::thrift::fixtures::types::SomeMap>();
    SomeService_bounce_map_pargs pargs() {
      SomeService_bounce_map_pargs args;
      args.get<0>().value = uarg_m.get();
      return args;
    }

    auto asTupleOfRefs() & {
      return std::tie(
        std::as_const(*uarg_m)
      );
    }
  } args;

  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "SomeService.bounce_map",
    serverRequest.requestContext());
  try {
    auto pargs = args.pargs();
    deserializeRequest<ProtocolIn_>(pargs, "bounce_map", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "bounce_map");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = apache::thrift::HandlerCallbackPtr<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>>::make(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , this->getServiceName()
    , "SomeService"
    , "bounce_map"
    , return_bounce_map<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_bounce_map<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  const auto makeExecuteHandler = [&] {
    return [ifacePtr = iface_](auto&& cb, ArgsState args) mutable {
      (void)args;
      ifacePtr->async_tm_bounce_map(std::move(cb), std::move(args.uarg_m));
    };
  };
#if FOLLY_HAS_COROUTINES
  if (apache::thrift::detail::shouldProcessServiceInterceptorsOnRequest(*callback)) {
    [](auto callback, auto executeHandler, ArgsState args) -> folly::coro::Task<void> {
      auto argRefs = args.asTupleOfRefs();
      co_await apache::thrift::detail::processServiceInterceptorsOnRequest(
          *callback,
          apache::thrift::detail::ServiceInterceptorOnRequestArguments(argRefs));
      executeHandler(std::move(callback), std::move(args));
    }(std::move(callback), makeExecuteHandler(), std::move(args))
              .scheduleOn(apache::thrift::detail::ServerRequestHelper::executor(serverRequest))
              .startInlineUnsafe();
  } else {
    makeExecuteHandler()(std::move(callback), std::move(args));
  }
#else
  makeExecuteHandler()(std::move(callback), std::move(args));
#endif // FOLLY_HAS_COROUTINES
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse SomeServiceAsyncProcessor::return_bounce_map(apache::thrift::ContextStack* ctx, ::apache::thrift::fixtures::types::SomeMap const& _return) {
  ProtocolOut_ prot;
  ::apache::thrift::fixtures::types::SomeService_bounce_map_presult result;
  result.get<0>().value = const_cast<::apache::thrift::fixtures::types::SomeMap*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("bounce_map", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void SomeServiceAsyncProcessor::throw_wrapped_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "bounce_map");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &SomeServiceAsyncProcessor::executeRequest_binary_keyed_map<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::executeRequest_binary_keyed_map(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  struct ArgsState {
    std::unique_ptr<::std::vector<::std::int64_t>> uarg_r = std::make_unique<::std::vector<::std::int64_t>>();
    SomeService_binary_keyed_map_pargs pargs() {
      SomeService_binary_keyed_map_pargs args;
      args.get<0>().value = uarg_r.get();
      return args;
    }

    auto asTupleOfRefs() & {
      return std::tie(
        std::as_const(*uarg_r)
      );
    }
  } args;

  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "SomeService.binary_keyed_map",
    serverRequest.requestContext());
  try {
    auto pargs = args.pargs();
    deserializeRequest<ProtocolIn_>(pargs, "binary_keyed_map", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "binary_keyed_map");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = apache::thrift::HandlerCallbackPtr<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>::make(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , this->getServiceName()
    , "SomeService"
    , "binary_keyed_map"
    , return_binary_keyed_map<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_binary_keyed_map<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  const auto makeExecuteHandler = [&] {
    return [ifacePtr = iface_](auto&& cb, ArgsState args) mutable {
      (void)args;
      ifacePtr->async_tm_binary_keyed_map(std::move(cb), std::move(args.uarg_r));
    };
  };
#if FOLLY_HAS_COROUTINES
  if (apache::thrift::detail::shouldProcessServiceInterceptorsOnRequest(*callback)) {
    [](auto callback, auto executeHandler, ArgsState args) -> folly::coro::Task<void> {
      auto argRefs = args.asTupleOfRefs();
      co_await apache::thrift::detail::processServiceInterceptorsOnRequest(
          *callback,
          apache::thrift::detail::ServiceInterceptorOnRequestArguments(argRefs));
      executeHandler(std::move(callback), std::move(args));
    }(std::move(callback), makeExecuteHandler(), std::move(args))
              .scheduleOn(apache::thrift::detail::ServerRequestHelper::executor(serverRequest))
              .startInlineUnsafe();
  } else {
    makeExecuteHandler()(std::move(callback), std::move(args));
  }
#else
  makeExecuteHandler()(std::move(callback), std::move(args));
#endif // FOLLY_HAS_COROUTINES
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse SomeServiceAsyncProcessor::return_binary_keyed_map(apache::thrift::ContextStack* ctx, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t> const& _return) {
  ProtocolOut_ prot;
  ::apache::thrift::fixtures::types::SomeService_binary_keyed_map_presult result;
  result.get<0>().value = const_cast<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("binary_keyed_map", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void SomeServiceAsyncProcessor::throw_wrapped_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "binary_keyed_map");
    return;
  }
}


} // namespace apache::thrift::fixtures::types
