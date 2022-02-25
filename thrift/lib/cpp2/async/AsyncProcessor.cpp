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

#include <thrift/lib/cpp2/async/AsyncProcessor.h>

#include <folly/io/async/EventBaseAtomicNotificationQueue.h>

#include <thrift/lib/cpp2/async/ReplyInfo.h>

namespace apache {
namespace thrift {
/* static */ const AsyncProcessorFactory::WildcardMethodMetadata
    AsyncProcessorFactory::kWildcardMethodMetadata;

constexpr std::chrono::seconds ServerInterface::BlockingThreadManager::kTimeout;
thread_local RequestParams ServerInterface::requestParams_;

EventTask::~EventTask() {
  expired();
}

void EventTask::expired() {
  // only expire req_ once
  if (!req_) {
    return;
  }
  failWith(
      TApplicationException{"Task expired without processing"},
      kTaskExpiredErrorCode);
}

void EventTask::failWith(folly::exception_wrapper ex, std::string exCode) {
  auto cleanUp = [oneway = oneway_,
                  req = std::move(req_),
                  ex = std::move(ex),
                  exCode = std::move(exCode)]() mutable {
    // if oneway, skip sending back anything
    if (oneway) {
      return;
    }
    req->sendErrorWrapped(std::move(ex), std::move(exCode));
  };

  if (eb_->inRunningEventBaseThread()) {
    cleanUp();
  } else {
    eb_->runInEventBaseThread(std::move(cleanUp));
  }
}

void EventTask::setTile(TilePtr&& tile) {
  ctx_->setTile(std::move(tile));
}

char const* AsyncProcessor::getServiceName() {
  return "NoServiceNameSet";
}

void AsyncProcessor::terminateInteraction(
    int64_t, Cpp2ConnContext&, folly::EventBase&) noexcept {
  LOG(DFATAL) << "This processor doesn't support interactions";
}

void AsyncProcessor::destroyAllInteractions(
    Cpp2ConnContext&, folly::EventBase&) noexcept {}

void AsyncProcessor::processSerializedCompressedRequest(
    ResponseChannelRequest::UniquePtr req,
    SerializedCompressedRequest&& serializedRequest,
    protocol::PROTOCOL_TYPES prot_type,
    Cpp2RequestContext* context,
    folly::EventBase* eb,
    concurrency::ThreadManager* tm) {
  processSerializedRequest(
      std::move(req),
      std::move(serializedRequest).uncompress(),
      prot_type,
      context,
      eb,
      tm);
}

void AsyncProcessor::processSerializedCompressedRequestWithMetadata(
    ResponseChannelRequest::UniquePtr,
    SerializedCompressedRequest&&,
    const MethodMetadata&,
    protocol::PROTOCOL_TYPES,
    Cpp2RequestContext*,
    folly::EventBase*,
    concurrency::ThreadManager*) {
  LOG(FATAL)
      << "processSerializedCompressedRequestWithMetadata was called because "
         "AsyncProcessorFactory::createMethodMetadata (from the provided service) "
         "opted in to use the MethodMetadata-based method resolution API. "
         "Therefore, this method must be overridden alongside processSerializedRequest.";
}

bool AsyncProcessor::useResourcePools(
    AsyncProcessorFactory::MethodMetadata const*) const {
  return false;
}

SelectPoolResult AsyncProcessor::selectPool(
    ServerRequest const&, const AsyncProcessorFactory::MethodMetadata&) const {
  LOG(FATAL) << "Unimplemented selectPool called";
}

void AsyncProcessor::executeRequest(
    ServerRequest&&, const AsyncProcessorFactory::MethodMetadata&) {
  LOG(FATAL) << "Unimplemented executeRequest called";
}

bool GeneratedAsyncProcessor::createInteraction(
    const ResponseChannelRequest::UniquePtr& req,
    int64_t id,
    std::string&& name,
    Cpp2RequestContext& ctx,
    concurrency::ThreadManager* tm,
    folly::EventBase& eb,
    ServerInterface* si) {
  eb.dcheckIsInEventBaseThread();

  auto nullthrows = [](std::unique_ptr<Tile> tile) {
    if (!tile) {
      DLOG(FATAL) << "Nullptr returned from interaction constructor";
      throw std::runtime_error("Nullptr returned from interaction constructor");
    }
    return tile;
  };
  auto& conn = *ctx.getConnectionContext();

  // In the eb model we create the interaction inline.
  if (!tm) {
    si->setEventBase(&eb);
    si->setRequestContext(&ctx);
    auto tile = folly::makeTryWith(
        [&] { return nullthrows(createInteractionImpl(name)); });
    if (tile.hasException()) {
      req->sendErrorWrapped(
          folly::make_exception_wrapper<TApplicationException>(
              "Interaction constructor failed with " +
              tile.exception().what().toStdString()),
          kInteractionConstructorErrorErrorCode);
      return true; // Not a duplicate; caller will see missing tile.
    }
    return conn.addTile(id, {tile->release(), &eb});
  }

  // In the tm model we use a promise.
  auto promisePtr = new TilePromise; // freed by RefGuard on next line
  if (!conn.addTile(id, {promisePtr, &eb})) {
    return false;
  }

  tm->add([=, &eb, &ctx, name = std::move(name), &conn] {
    si->setEventBase(&eb);
    si->setThreadManager(tm);
    si->setRequestContext(&ctx);

    std::exception_ptr ex;
    try {
      auto tilePtr = nullthrows(createInteractionImpl(name));
      eb.add([=, &conn, &eb, t = std::move(tilePtr)]() mutable {
        TilePtr tile{t.release(), &eb};
        promisePtr->fulfill(*tile, *tm, eb);
        conn.tryReplaceTile(id, std::move(tile));
      });
      return;
    } catch (...) {
      ex = std::current_exception();
    }
    DCHECK(ex);
    eb.add([=, &conn, ex = std::move(ex)]() {
      promisePtr->failWith(
          folly::make_exception_wrapper<TApplicationException>(
              folly::to<std::string>(
                  "Interaction constructor failed with ",
                  folly::exceptionStr(ex))),
          kInteractionConstructorErrorErrorCode);
      conn.removeTile(id);
    });
  });
  return true;
}

std::unique_ptr<Tile> GeneratedAsyncProcessor::createInteractionImpl(
    const std::string&) {
  return nullptr;
}

void GeneratedAsyncProcessor::terminateInteraction(
    int64_t id, Cpp2ConnContext& conn, folly::EventBase& eb) noexcept {
  eb.dcheckIsInEventBaseThread();

  conn.removeTile(id);
}

void GeneratedAsyncProcessor::destroyAllInteractions(
    Cpp2ConnContext& conn, folly::EventBase& eb) noexcept {
  eb.dcheckIsInEventBaseThread();

  if (conn.tiles_.empty()) {
    return;
  }

  std::vector<int64_t> ids;
  ids.reserve(conn.tiles_.size());
  for (auto& [id, tile] : conn.tiles_) {
    ids.push_back(id);
  }
  for (auto id : ids) {
    terminateInteraction(id, conn, eb);
  }
}

bool GeneratedAsyncProcessor::validateRpcKind(
    const ResponseChannelRequest::UniquePtr& req, RpcKind kind) {
  switch (kind) {
    case RpcKind::SINGLE_REQUEST_NO_RESPONSE:
      switch (req->rpcKind()) {
        case RpcKind::SINGLE_REQUEST_NO_RESPONSE:
          return true;
        case RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE:
          req->sendReply(ResponsePayload{});
          return true;
        default:
          break;
      }
      break;
    case RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE:
      switch (req->rpcKind()) {
        case RpcKind::SINGLE_REQUEST_NO_RESPONSE:
        case RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE:
          return true;
        default:
          break;
      }
      break;
    default:
      if (kind == req->rpcKind()) {
        return true;
      }
  }
  if (req->rpcKind() != RpcKind::SINGLE_REQUEST_NO_RESPONSE) {
    req->sendErrorWrapped(
        folly::make_exception_wrapper<TApplicationException>(
            TApplicationException::TApplicationExceptionType::UNKNOWN_METHOD,
            "Function kind mismatch"),
        kRequestTypeDoesntMatchServiceFunctionType);
  }
  return false;
}

bool GeneratedAsyncProcessor::setUpRequestProcessing(
    const ResponseChannelRequest::UniquePtr& req,
    Cpp2RequestContext* ctx,
    folly::EventBase* eb,
    concurrency::ThreadManager* tm,
    RpcKind kind,
    ServerInterface* si,
    folly::StringPiece interaction) {
  if (!validateRpcKind(req, kind)) {
    return false;
  }

  bool interactionMetadataValid;
  if (auto interactionId = ctx->getInteractionId()) {
    if (auto interactionCreate = ctx->getInteractionCreate()) {
      if (*interactionCreate->interactionName_ref() != interaction) {
        interactionMetadataValid = false;
      } else if (!createInteraction(
                     req,
                     interactionId,
                     std::move(*interactionCreate->interactionName_ref()).str(),
                     *ctx,
                     tm,
                     *eb,
                     si)) {
        // Duplicate id is a contract violation so close the connection.
        // Terminate this interaction first so queued requests can't use it
        // (which could result in UB).
        terminateInteraction(interactionId, *ctx->getConnectionContext(), *eb);
        req->sendErrorWrapped(
            TApplicationException(
                "Attempting to create interaction with duplicate id. Failing all requests in that interaction."),
            kConnectionClosingErrorCode);
        return false;
      } else {
        interactionMetadataValid = true;
      }
    } else {
      interactionMetadataValid = !interaction.empty();
    }

    if (interactionMetadataValid && !tm) {
      try {
        // This is otherwise done while constructing InteractionEventTask.
        auto& tile = ctx->getConnectionContext()->getTile(interactionId);
        ctx->setTile({&tile, eb});
      } catch (const std::out_of_range&) {
        req->sendErrorWrapped(
            TApplicationException(
                "Invalid interaction id " + std::to_string(interactionId)),
            kInteractionIdUnknownErrorCode);
        return false;
      }
    }
  } else {
    interactionMetadataValid = interaction.empty();
  }
  if (!interactionMetadataValid) {
    req->sendErrorWrapped(
        folly::make_exception_wrapper<TApplicationException>(
            TApplicationException::TApplicationExceptionType::UNKNOWN_METHOD,
            "Interaction and method do not match"),
        kMethodUnknownErrorCode);
    return false;
  }

  return true;
}

concurrency::PRIORITY ServerInterface::getRequestPriority(
    Cpp2RequestContext* ctx, concurrency::PRIORITY prio) {
  concurrency::PRIORITY callPriority = ctx->getCallPriority();
  return callPriority == concurrency::N_PRIORITIES ? prio : callPriority;
}

void ServerInterface::setEventBase(folly::EventBase* eb) {
  folly::RequestEventBase::set(eb);
  requestParams_.eventBase_ = eb;
}

void ServerInterface::BlockingThreadManager::add(folly::Func f) {
  try {
    if (threadManagerKa_) {
      std::shared_ptr<concurrency::Runnable> task =
          concurrency::FunctionRunner::create(std::move(f));
      threadManagerKa_->add(
          std::move(task),
          std::chrono::milliseconds(kTimeout).count() /* deprecated */,
          0,
          false);
    } else {
      executorKa_->add(std::move(f));
    }
    return;
  } catch (...) {
    LOG(FATAL) << "Failed to schedule a task within timeout: "
               << folly::exceptionStr(std::current_exception());
  }
}

bool ServerInterface::BlockingThreadManager::keepAliveAcquire() noexcept {
  auto keepAliveCount = keepAliveCount_.fetch_add(1, std::memory_order_relaxed);
  // We should never increment from 0
  DCHECK(keepAliveCount > 0);
  return true;
}

void ServerInterface::BlockingThreadManager::keepAliveRelease() noexcept {
  auto keepAliveCount = keepAliveCount_.fetch_sub(1, std::memory_order_acq_rel);
  DCHECK(keepAliveCount >= 1);
  if (keepAliveCount == 1) {
    delete this;
  }
}

folly::Executor::KeepAlive<> ServerInterface::getInternalKeepAlive() {
  if (getThreadManager()) {
    return getThreadManager()->getKeepAlive(
        getRequestContext()->getRequestExecutionScope(),
        apache::thrift::concurrency::ThreadManager::Source::INTERNAL);
  } else {
    return folly::Executor::getKeepAliveToken(getHandlerExecutor());
  }
}

folly::Executor::KeepAlive<> HandlerCallbackBase::getInternalKeepAlive() {
  if (getThreadManager()) {
    return getThreadManager()->getKeepAlive(
        getRequestContext()->getRequestExecutionScope(),
        apache::thrift::concurrency::ThreadManager::Source::INTERNAL);
  } else {
    return folly::Executor::getKeepAliveToken(getHandlerExecutor());
  }
}

HandlerCallbackBase::~HandlerCallbackBase() {
  maybeNotifyComplete();
  // req must be deleted in the eb
  if (req_) {
    if (req_->isActive() && ewp_) {
      exception(TApplicationException(
          TApplicationException::INTERNAL_ERROR,
          "apache::thrift::HandlerCallback not completed"));
      return;
    }
    assert(eb_ != nullptr);
    releaseRequest(std::move(req_), eb_, std::move(interaction_));
  }
}

void HandlerCallbackBase::releaseRequest(
    ResponseChannelRequest::UniquePtr request,
    folly::EventBase* eb,
    TilePtr&& interaction) {
  DCHECK(request);
  DCHECK(eb != nullptr);
  if (!eb->inRunningEventBaseThread()) {
    eb->runInEventBaseThread(
        [req = std::move(request), interaction = std::move(interaction)] {});
  }
}

folly::EventBase* HandlerCallbackBase::getEventBase() {
  assert(eb_ != nullptr);
  return eb_;
}

concurrency::ThreadManager* HandlerCallbackBase::getThreadManager() {
  assert(tm_ != nullptr);
  return tm_;
}

folly::Executor* HandlerCallbackBase::getHandlerExecutor() {
  if (executor_ == nullptr) {
    assert(tm_ != nullptr);
    return tm_;
  }
  return executor_;
}

void HandlerCallbackBase::forward(const HandlerCallbackBase& other) {
  eb_ = other.eb_;
  tm_ = other.tm_;
  ewp_ = other.ewp_;
}

folly::Optional<uint32_t> HandlerCallbackBase::checksumIfNeeded(
    LegacySerializedResponse& response) {
  folly::Optional<uint32_t> crc32c;
  if (req_->isReplyChecksumNeeded() && response.buffer &&
      !response.buffer->empty()) {
    LOG(ERROR) << "Checksum calculation disabled";
  }
  return crc32c;
}

folly::Optional<uint32_t> HandlerCallbackBase::checksumIfNeeded(
    SerializedResponse& response) {
  folly::Optional<uint32_t> crc32c;
  if (req_->isReplyChecksumNeeded() && response.buffer &&
      !response.buffer->empty()) {
    LOG(ERROR) << "Checksum calculation disabled";
  }
  return crc32c;
}

ResponsePayload HandlerCallbackBase::transform(ResponsePayload&& payload) {
  // Do any compression or other transforms in this thread, the same thread
  // that serialization happens on.
  payload.transform(reqCtx_->getHeader()->getWriteTransforms());
  return std::move(payload);
}

void HandlerCallbackBase::doExceptionWrapped(folly::exception_wrapper ew) {
  if (req_ == nullptr) {
    LOG(ERROR) << ew.what();
  } else {
    callExceptionInEventBaseThread(ewp_, ew);
  }
}

void HandlerCallbackBase::doAppOverloadedException(const std::string& message) {
  if (eb_->inRunningEventBaseThread()) {
    AppOverloadExceptionInfo::send(std::move(req_), message);
  } else {
    putMessageInReplyQueue(
        std::in_place_type_t<AppOverloadExceptionInfo>(),
        std::move(req_),
        message);
  }
}

void HandlerCallbackBase::sendReply(SerializedResponse response) {
  folly::Optional<uint32_t> crc32c = checksumIfNeeded(response);
  auto payload = std::move(response).extractPayload(
      req_->includeEnvelope(),
      reqCtx_->getHeader()->getProtocolId(),
      protoSeqId_,
      MessageType::T_REPLY,
      reqCtx_->getMethodName());
  payload = transform(std::move(payload));
  if (getEventBase()->isInEventBaseThread()) {
    QueueReplyInfo(
        std::move(req_), std::move(payload), crc32c)(*getEventBase());
  } else {
    putMessageInReplyQueue(
        std::in_place_type_t<QueueReplyInfo>(),
        std::move(req_),
        std::move(payload),
        crc32c);
  }
}

void HandlerCallbackBase::sendReply(
    ResponseAndServerStreamFactory&& responseAndStream) {
  folly::Optional<uint32_t> crc32c =
      checksumIfNeeded(responseAndStream.response);
  auto payload = std::move(responseAndStream.response)
                     .extractPayload(
                         req_->includeEnvelope(),
                         reqCtx_->getHeader()->getProtocolId(),
                         protoSeqId_,
                         MessageType::T_REPLY,
                         reqCtx_->getMethodName());
  payload = transform(std::move(payload));
  auto& stream = responseAndStream.stream;
  stream.setInteraction(std::move(interaction_));
  if (getEventBase()->isInEventBaseThread()) {
    StreamReplyInfo(
        std::move(req_), std::move(stream), std::move(payload), crc32c)(
        *getEventBase());
  } else {
    putMessageInReplyQueue(
        std::in_place_type_t<StreamReplyInfo>(),
        std::move(req_),
        std::move(stream),
        std::move(payload),
        crc32c);
  }
}

void HandlerCallbackBase::sendReply(
    FOLLY_MAYBE_UNUSED std::pair<
        SerializedResponse,
        apache::thrift::detail::SinkConsumerImpl>&& responseAndSinkConsumer) {
#if FOLLY_HAS_COROUTINES
  folly::Optional<uint32_t> crc32c =
      checksumIfNeeded(responseAndSinkConsumer.first);
  auto payload = std::move(responseAndSinkConsumer.first)
                     .extractPayload(
                         req_->includeEnvelope(),
                         reqCtx_->getHeader()->getProtocolId(),
                         protoSeqId_,
                         MessageType::T_REPLY,
                         reqCtx_->getMethodName());
  payload = transform(std::move(payload));
  auto& sinkConsumer = responseAndSinkConsumer.second;
  sinkConsumer.interaction = std::move(interaction_);

  if (getEventBase()->isInEventBaseThread()) {
    SinkConsumerReplyInfo(
        std::move(req_), std::move(sinkConsumer), std::move(payload), crc32c)(
        *getEventBase());
  } else {
    putMessageInReplyQueue(
        std::in_place_type_t<SinkConsumerReplyInfo>(),
        std::move(req_),
        std::move(sinkConsumer),
        std::move(payload),
        crc32c);
  }
#else
  std::terminate();
#endif
}

HandlerCallback<void>::HandlerCallback(
    ResponseChannelRequest::UniquePtr req,
    std::unique_ptr<ContextStack> ctx,
    cob_ptr cp,
    exnw_ptr ewp,
    int32_t protoSeqId,
    folly::EventBase* eb,
    concurrency::ThreadManager* tm,
    Cpp2RequestContext* reqCtx,
    TilePtr&& interaction)
    : HandlerCallbackBase(
          std::move(req),
          std::move(ctx),
          ewp,
          eb,
          tm,
          reqCtx,
          std::move(interaction)),
      cp_(cp) {
  this->protoSeqId_ = protoSeqId;
}

HandlerCallback<void>::HandlerCallback(
    ResponseChannelRequest::UniquePtr req,
    std::unique_ptr<ContextStack> ctx,
    cob_ptr cp,
    exnw_ptr ewp,
    int32_t protoSeqId,
    folly::EventBase* eb,
    folly::Executor* executor,
    Cpp2RequestContext* reqCtx,
    RequestPileInterface* notifyRequestPile,
    RequestPileInterface::UserData notifyRequestPileUserData,
    ConcurrencyControllerInterface* notifyConcurrencyController,
    ConcurrencyControllerInterface::UserData notifyConcurrencyControllerData,
    TilePtr&& interaction)
    : HandlerCallbackBase(
          std::move(req),
          std::move(ctx),
          ewp,
          eb,
          executor,
          reqCtx,
          notifyRequestPile,
          notifyRequestPileUserData,
          notifyConcurrencyController,
          notifyConcurrencyControllerData,
          std::move(interaction)),
      cp_(cp) {
  this->protoSeqId_ = protoSeqId;
}

void HandlerCallback<void>::complete(folly::Try<folly::Unit>&& r) {
  maybeNotifyComplete();
  if (r.hasException()) {
    exception(std::move(r.exception()));
  } else {
    done();
  }
}

void HandlerCallback<void>::doDone() {
  assert(cp_ != nullptr);
  auto queue = cp_(this->ctx_.get());
  this->ctx_.reset();
  sendReply(std::move(queue));
}

} // namespace thrift
} // namespace apache
