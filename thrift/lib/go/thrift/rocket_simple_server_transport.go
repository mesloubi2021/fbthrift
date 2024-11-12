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

package thrift

import (
	"context"
	"crypto/tls"
	"errors"
	"fmt"
	"io"
	"net"
	"runtime/debug"

	"github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
	"github.com/rsocket/rsocket-go/core/transport"
)

type rocketSimpleServerTransport struct {
	listener    net.Listener
	processor   Processor
	acceptor    transport.ServerTransportAcceptor
	transportID TransportID
	log         func(format string, args ...interface{})
	connContext ConnContextFunc
}

func newRocketSimpleServerTransport(listener net.Listener, connContext ConnContextFunc, processor Processor, transportID TransportID, log func(format string, args ...interface{})) transport.ServerTransport {
	return &rocketSimpleServerTransport{
		listener:    listener,
		processor:   processor,
		log:         log,
		transportID: transportID,
		connContext: connContext,
	}
}

// Accept register incoming connection handler.
func (r *rocketSimpleServerTransport) Accept(acceptor transport.ServerTransportAcceptor) {
	r.acceptor = acceptor
}

// Listen listens on the network address addr and handles requests on incoming connections.
// You can specify notifier chan, it'll be sent true/false when server listening success/failed.
func (r *rocketSimpleServerTransport) Listen(ctx context.Context, notifier chan<- bool) error {
	notifier <- true
	go func() {
		<-ctx.Done()
		r.listener.Close()
	}()
	err := r.acceptLoop(ctx)
	if ctx.Err() != nil {
		return ctx.Err()
	}
	return err
}

// acceptLoop takes a context that will be decorated with ConnInfo and passed down to new clients.
func (r *rocketSimpleServerTransport) acceptLoop(ctx context.Context) error {
	for {
		conn, err := r.listener.Accept()
		if err != nil {
			if errors.Is(err, io.EOF) {
				return nil
			}
			select {
			case <-ctx.Done():
				return nil
			default:
				return fmt.Errorf("listener.Accept failed in rocketServerTransport.acceptLoop: %w", err)
			}
		}
		if conn == nil {
			continue
		}

		go func(ctx context.Context, conn net.Conn) {
			// Explicitly force TLS handshake protocol to run (if this is a TLS connection).
			//
			// Usually, TLS handshake is done implicitly/seamlessly by 'crypto/tls' package,
			// whenever Read/Write functions are invoked on a connection for the first time.
			// However, in our case, we require the handshake to be complete ahead of any
			// Read/Write calls - so that we can access ALPN value and choose the transport.
			tlsConn, isTLS := conn.(*tls.Conn)
			if isTLS {
				err = tlsConn.HandshakeContext(ctx)
				if err != nil {
					r.log("thrift: error performing TLS handshake with %s: %s\n", conn.RemoteAddr(), err)
					// Handshake failed, we cannot proceed with this connection - close it and return.
					tlsConn.Close()
					return
				}
			}

			ctxConn := r.connContext(ctx, conn)
			r.processRequests(ctxConn, conn)
		}(ctx, conn)
	}
}

func (r *rocketSimpleServerTransport) Close() (err error) {
	return r.listener.Close()
}

func (r *rocketSimpleServerTransport) processRequests(ctx context.Context, conn net.Conn) {
	connTransport := r.transportID

	// Use Rocket protocol right away if the server is running
	// in "UpgradeToRocket" mode and ALPN value is set to "rs".
	if r.transportID == TransportIDUpgradeToRocket {
		if connInfo, ok := ConnInfoFromContext(ctx); ok {
			tlsConnState := connInfo.TLS()
			if tlsConnState != nil && tlsConnState.NegotiatedProtocol == "rs" {
				connTransport = TransportIDRocket
			}
		}
	}

	switch connTransport {
	case TransportIDRocket:
		r.processRocketRequests(ctx, conn)
	case TransportIDUpgradeToRocket:
		processor := newRocketUpgradeProcessor(r.processor)
		headerProtocol, err := NewHeaderProtocol(conn)
		if err != nil {
			r.log("thrift: error constructing header protocol from %s: %s\n", conn.RemoteAddr(), err)
			return
		}
		if err := r.processHeaderRequest(ctx, headerProtocol, processor); err != nil {
			r.log("thrift: error processing first header request from %s: %s\n", conn.RemoteAddr(), err)
			return
		}
		if processor.upgraded {
			r.processRocketRequests(ctx, conn)
		} else {
			if err := r.processHeaderRequests(ctx, headerProtocol, processor); err != nil {
				r.log("thrift: error processing additional header request from %s: %s\n", conn.RemoteAddr(), err)
			}
		}
	case TransportIDHeader:
		headerProtocol, err := NewHeaderProtocol(conn)
		if err != nil {
			r.log("thrift: error constructing header protocol from %s: %s\n", conn.RemoteAddr(), err)
			return
		}
		if err := r.processHeaderRequests(ctx, headerProtocol, r.processor); err != nil {
			r.log("thrift: error processing header request from %s: %s\n", conn.RemoteAddr(), err)
		}
	}
}

func (r *rocketSimpleServerTransport) processRocketRequests(ctx context.Context, conn net.Conn) {
	r.acceptor(ctx, transport.NewTransport(transport.NewTCPConn(conn)), func(*transport.Transport) {})
}

func (r *rocketSimpleServerTransport) processHeaderRequest(ctx context.Context, protocol types.Protocol, processor Processor) error {
	exc := process(ctx, processor, protocol)
	if isEOF(exc) {
		return exc
	}
	if exc != nil {
		protocol.Flush()
		return exc
	}
	return nil
}

func (r *rocketSimpleServerTransport) processHeaderRequests(ctx context.Context, protocol types.Protocol, processor Processor) error {
	defer func() {
		if err := recover(); err != nil {
			r.log("panic in processor: %v: %s", err, debug.Stack())
		}
	}()
	defer protocol.Close()
	var err error
	for err == nil {
		err = r.processHeaderRequest(ctx, protocol, processor)
	}
	if isEOF(err) {
		return nil
	}
	protocol.Flush()
	// graceful exit.  client closed connection
	return err
}
