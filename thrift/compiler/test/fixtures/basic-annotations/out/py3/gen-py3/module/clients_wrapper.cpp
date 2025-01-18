/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/basic-annotations/gen-py3/module/clients_wrapper.h>

namespace cpp2 {


folly::Future<folly::Unit>
MyServiceClientWrapper::ping(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_ping, channel_);
  try {
    client->ping(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<std::string>
MyServiceClientWrapper::getRandomData(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::string>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_getRandomData, channel_);
  try {
    client->getRandomData(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<std::string>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<bool>
MyServiceClientWrapper::hasDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<bool>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<bool>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_hasDataById, channel_);
  try {
    client->hasDataById(
      rpcOptions,
      std::move(callback),
      arg_id
    );
  } catch (...) {
    return folly::makeFuture<bool>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<std::string>
MyServiceClientWrapper::getDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::string>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_getDataById, channel_);
  try {
    client->getDataById(
      rpcOptions,
      std::move(callback),
      arg_id
    );
  } catch (...) {
    return folly::makeFuture<std::string>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
MyServiceClientWrapper::putDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_putDataById, channel_);
  try {
    client->putDataById(
      rpcOptions,
      std::move(callback),
      arg_id,
      arg_data
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
MyServiceClientWrapper::lobDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::apache::thrift::OneWayFutureCallback>(
    std::move(_promise), channel_);
  try {
    client->lobDataById(
      rpcOptions,
      std::move(callback),
      arg_id,
      arg_data
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
MyServiceClientWrapper::cppDoNothing(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_cppDoNothing, channel_);
  try {
    client->cppDoNothing(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
MyServicePrioParentClientWrapper::ping(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::MyServicePrioParentAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_ping, channel_);
  try {
    client->ping(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
MyServicePrioParentClientWrapper::pong(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::MyServicePrioParentAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_pong, channel_);
  try {
    client->pong(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
MyServicePrioChildClientWrapper::pang(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::MyServicePrioChildAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_pang, channel_);
  try {
    client->pang(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<int32_t>
BadServiceClientWrapper::bar(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::GoodServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<int32_t>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<int32_t>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_bar, channel_);
  try {
    client->bar(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<int32_t>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}


folly::Future<std::unique_ptr<::thrift::py3::ClientWrapper>>
BadServiceClientWrapper::createBadInteraction() {
  return folly::via(
      channel_->getEventBase(),
      [=]() -> std::unique_ptr<::thrift::py3::ClientWrapper> {
        auto interaction_client = static_cast<std::unique_ptr<apache::thrift::GeneratedAsyncClient>>(std::make_unique<GoodServiceAsyncClient::BadInteraction>(((GoodServiceAsyncClient*)async_client_.get())->createBadInteraction()));
        return static_cast<std::unique_ptr<::thrift::py3::ClientWrapper>>(std::make_unique<BadInteractionInteractionWrapper>(std::move(interaction_client), channel_));
      }
  );
}

folly::Future<folly::Unit>
BadServiceClientWrapper::BadInteractionInteractionWrapper::foo(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::GoodServiceAsyncClient::BadInteraction*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_foo, channel_);
  try {
    client->foo(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
FooBarBazServiceClientWrapper::foo(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::FooBarBazServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_foo, channel_);
  try {
    client->foo(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
FooBarBazServiceClientWrapper::bar(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::FooBarBazServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_bar, channel_);
  try {
    client->bar(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

folly::Future<folly::Unit>
FooBarBazServiceClientWrapper::baz(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::FooBarBazServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_baz, channel_);
  try {
    client->baz(
      rpcOptions,
      std::move(callback)
    );
  } catch (...) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

} // namespace cpp2
