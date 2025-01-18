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
	"net"
	"time"

	"github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
	rsocket "github.com/rsocket/rsocket-go"
	"github.com/rsocket/rsocket-go/core/transport"
	"github.com/rsocket/rsocket-go/payload"
)

// RSocketClient is a client that uses a rsocket library.
type RSocketClient interface {
	SendSetup(ctx context.Context) error
	FireAndForget(messageName string, protoID types.ProtocolID, typeID types.MessageType, headers map[string]string, dataBytes []byte) error
	RequestResponse(ctx context.Context, messageName string, protoID types.ProtocolID, typeID types.MessageType, headers map[string]string, dataBytes []byte) (map[string]string, []byte, error)
	Close() error
}

type rsocketClient struct {
	client rsocket.Client
	conn   net.Conn

	useZstd bool
}

func newRSocketClient(conn net.Conn) RSocketClient {
	return &rsocketClient{conn: conn}
}

func (r *rsocketClient) SendSetup(_ context.Context) error {
	if r.client != nil {
		// already setup
		return nil
	}
	setupPayload, err := newRequestSetupPayloadVersion8()
	if err != nil {
		return err
	}
	// Very important to reset the deadline! Especially when using UpgradeToRocket.
	// We may have inherited this connection from Header protocol after an Upgrade.
	// Deadlines may be nearing expiration, if not reset - rsocket setup may fail.
	r.resetDeadline()
	// See T182939211. This copies the keep alives from Java Rocket.
	// KeepaliveLifetime = time.Duration(missedAcks = 1) * (ackTimeout = 3600000)
	clientBuilder := rsocket.Connect().
		KeepAlive(time.Millisecond*30000, time.Millisecond*3600000, 1).
		MetadataMimeType(RocketMetadataCompactMimeType).
		SetupPayload(setupPayload).
		OnClose(func(error) {})

	clientStarter := clientBuilder.Acceptor(
		func(_ context.Context, _ rsocket.RSocket) rsocket.RSocket {
			return rsocket.NewAbstractSocket(
				rsocket.MetadataPush(
					r.onServerMetadataPush,
				),
			)
		},
	)

	client, err := clientStarter.Transport(transporter(r.conn)).Start(context.Background())
	if err != nil {
		return err
	}
	r.client = client
	return nil
}

func (r *rsocketClient) onServerMetadataPush(pay payload.Payload) {
	metadata, err := decodeServerMetadataPush(pay)
	if err != nil {
		panic(err)
	}
	if metadata.SetupResponse != nil {
		setupResponse := metadata.SetupResponse
		serverSupportsZstd := (setupResponse.ZstdSupported != nil && *setupResponse.ZstdSupported)
		// zstd is only supported if both the client and the server support it.
		r.useZstd = r.useZstd && serverSupportsZstd
	}
}

func transporter(conn net.Conn) func(_ context.Context) (*transport.Transport, error) {
	return func(_ context.Context) (*transport.Transport, error) {
		tconn := transport.NewTCPClientTransport(conn)
		tconn.SetLifetime(1 * time.Hour)
		return tconn, nil
	}
}

func (r *rsocketClient) resetDeadline() {
	// It is necessary to reset the deadline to 0.
	// The rsocket library only sets the deadline at connection start.
	// This means if you wait long enough, the connection will become useless.
	// Or something else is happening, but this is very necessary.
	r.conn.SetDeadline(time.Time{})
}

func (r *rsocketClient) RequestResponse(ctx context.Context, messageName string, protoID types.ProtocolID, typeID types.MessageType, headers map[string]string, dataBytes []byte) (map[string]string, []byte, error) {
	r.resetDeadline()
	request, err := encodeRequestPayload(messageName, protoID, typeID, headers, r.useZstd, dataBytes)
	if err != nil {
		return nil, nil, err
	}
	mono := r.client.RequestResponse(request)
	val, err := mono.Block(ctx)
	if err != nil {
		return nil, nil, err
	}
	response, err := decodeResponsePayload(val)
	if response != nil {
		return response.Headers(), response.Data(), err
	}
	return nil, nil, err
}

func (r *rsocketClient) FireAndForget(messageName string, protoID types.ProtocolID, typeID types.MessageType, headers map[string]string, dataBytes []byte) error {
	r.resetDeadline()
	request, err := encodeRequestPayload(messageName, protoID, typeID, headers, r.useZstd, dataBytes)
	if err != nil {
		return err
	}
	r.client.FireAndForget(request)
	return nil
}

func (r *rsocketClient) Close() error {
	if r.client != nil {
		return r.client.Close()
	}
	return r.conn.Close()
}
