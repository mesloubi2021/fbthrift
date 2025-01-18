/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/doctext/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ClientBufferedStream.h>

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class C;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::C> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "C";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual void f(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual void f(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_f(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual void sync_f();
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual void sync_f(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual folly::Future<folly::Unit> future_f();
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_f();
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual folly::Future<folly::Unit> future_f(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_f(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  template <int = 0>
  folly::coro::Task<void> co_f() {
    return co_f<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  template <int = 0>
  folly::coro::Task<void> co_f(apache::thrift::RpcOptions& rpcOptions) {
    return co_f<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  folly::coro::Task<void> co_f() {
    co_await folly::coro::detachOnCancel(semifuture_f());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  folly::coro::Task<void> co_f(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_f(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_f(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = fCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      auto argsAsRefs = std::tie();
      ctx->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get()).throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_f(*rpcOptions, header, ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_f(*defaultRpcOptions, header, ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnResponse(returnState.header()).throwUnlessValue();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_f(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual void f(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  static folly::exception_wrapper recv_wrapped_f(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  static void recv_f(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual void recv_instance_f(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "f"} */
  virtual folly::exception_wrapper recv_instance_wrapped_f(::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_f(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_f(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> fCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<folly::Unit> fbthrift_semifuture_f(apache::thrift::RpcOptions& rpcOptions);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual void numbers(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual void numbers(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_numbers(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual apache::thrift::ClientBufferedStream<::cpp2::number> sync_numbers();
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual apache::thrift::ClientBufferedStream<::cpp2::number> sync_numbers(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> semifuture_numbers();
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> semifuture_numbers(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers() {
    return co_numbers<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers(apache::thrift::RpcOptions& rpcOptions) {
    return co_numbers<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers() {
    co_return co_await folly::coro::detachOnCancel(semifuture_numbers());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_numbers(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = numbersCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::createStreamClientCallback(
        apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback),
      hasRpcOptions ? rpcOptions->getBufferOptions() : defaultRpcOptions->getBufferOptions());
    if (ctx != nullptr) {
      auto argsAsRefs = std::tie();
      ctx->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get()).throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_numbers(*rpcOptions, header, ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_numbers(*defaultRpcOptions, header, ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnResponse(returnState.header()).throwUnlessValue();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    apache::thrift::ClientBufferedStream<::cpp2::number> _return;
    if (auto ew = recv_wrapped_numbers(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES



  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  static folly::exception_wrapper recv_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  static apache::thrift::ClientBufferedStream<::cpp2::number> recv_numbers(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual apache::thrift::ClientBufferedStream<::cpp2::number> recv_instance_numbers(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "numbers"} */
  virtual folly::exception_wrapper recv_instance_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_numbers(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_numbers(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::StreamClientCallback* callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> numbersCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> fbthrift_semifuture_numbers(apache::thrift::RpcOptions& rpcOptions);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual void thing(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual void thing(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
 protected:
  void fbthrift_serialize_and_send_thing(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual void sync_thing(::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual void sync_thing(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual folly::Future<::std::string> future_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual folly::SemiFuture<::std::string> semifuture_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual folly::Future<::std::string> future_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual folly::SemiFuture<::std::string> semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    return co_thing<false>(nullptr, p_a, p_b, p_c);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    return co_thing<true>(&rpcOptions, p_a, p_b, p_c);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  folly::coro::Task<::std::string> co_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    co_return co_await folly::coro::detachOnCancel(semifuture_thing(p_a, p_b, p_c));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  folly::coro::Task<::std::string> co_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    co_return co_await folly::coro::detachOnCancel(semifuture_thing(rpcOptions, p_a, p_b, p_c));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_thing(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = thingCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      auto argsAsRefs = std::tie(p_a, p_b, p_c);
      ctx->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get()).throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_thing(*rpcOptions, header, ctx.get(), std::move(wrappedCallback), p_a, p_b, p_c);
    } else {
      fbthrift_serialize_and_send_thing(*defaultRpcOptions, header, ctx.get(), std::move(wrappedCallback), p_a, p_b, p_c);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnResponse(returnState.header()).throwUnlessValue();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::std::string _return;
    if (auto ew = recv_wrapped_thing(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual void thing(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);


  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  static folly::exception_wrapper recv_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  static void recv_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual void recv_instance_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/doctext/src/module.thrift", "service": "C", "function": "thing"} */
  virtual folly::exception_wrapper recv_instance_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_thing(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  template <typename RpcOptions>
  void fbthrift_send_thing(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> thingCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::std::string> fbthrift_semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using CAsyncClient [[deprecated("Use apache::thrift::Client<C> instead")]] = ::apache::thrift::Client<C>;
} // namespace cpp2
