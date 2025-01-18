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
	"errors"
	"fmt"
	"net"
	"os"
	"runtime"
	"testing"
	"time"

	"github.com/facebook/fbthrift/thrift/lib/go/thrift/dummy"
	"github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

func TestClient(t *testing.T) {
	listener, err := net.Listen("tcp", ":0")
	if err != nil {
		t.Fatalf("failed to listen: %v", err)
	}
	processor := dummy.NewDummyProcessor(&dummy.DummyHandler{})
	server := NewServer(processor, listener, TransportIDRocket)
	serverCtx, cancel := context.WithCancel(context.Background())
	defer cancel()
	go func() {
		err := server.ServeContext(serverCtx)
		if !errors.Is(err, context.Canceled) {
			t.Fatalf("unexpected error in ServeContext: %v", err)
		}
	}()

	addr := listener.Addr()

	// Testing successful client connection
	client, err := NewClient(
		WithRocket(),
		WithIoTimeout(time.Second),
		WithProtocolID(types.ProtocolIDCompact),
		WithPersistentHeader("foo", "bar"),
		WithIdentity("client_test"),
		WithDialer(func() (net.Conn, error) {
			return net.Dial(addr.Network(), addr.String())
		}),
	)
	if err != nil {
		t.Fatalf("failed to create client: %v", err)
	}
	err = client.Close()
	if err != nil {
		t.Fatalf("failed to close client: %v", err)
	}

	// Testing unsuccessful client connection (cannot connect at all)
	client, err = NewClient(
		WithRocket(),
		WithDialer(func() (net.Conn, error) {
			return net.Dial("unix", "/tmp/non_existent_garbage_socket_12345")
		}),
	)
	expectedErrMsg := "dial unix /tmp/non_existent_garbage_socket_12345: connect: no such file or directory"
	if err.Error() != expectedErrMsg {
		t.Fatalf("unexpected error when creating client: %v", err)
	}

	// Testing unsuccessful client connection (can connect, but cannot create client)
	fdCountBefore, err := getNumFileDesciptors()
	if err != nil {
		t.Fatal(fmt.Sprintf("failed to get FD count: %#v", err))
	}
	client, err = NewClient(
		WithRocket(),
		// Invalid protocol that intentionally breaks client creation
		WithProtocolID(types.ProtocolID(12345)),
		WithDialer(func() (net.Conn, error) {
			return net.Dial(addr.Network(), addr.String())
		}),
	)
	expectedErrMsg = "Unknown protocol id: 12345"
	if err.Error() != expectedErrMsg {
		t.Fatalf("unexpected error when creating client: %v", err)
	}
	// IMPORTANT!
	// Even though we perform an explicit call to Close() in NewClient()
	// upon protocol error, actual FD closing is done by the garbage collector.
	// Without the GC call below - the FD may still linger and affect test results.
	runtime.GC()
	fdCountAfter, err := getNumFileDesciptors()
	if err != nil {
		t.Fatalf("failed to get FD count: %v", err)
	}
	if fdCountAfter > fdCountBefore {
		t.Fatalf("FDs got leaked: %d (before), %d (after)", fdCountBefore, fdCountAfter)
	}
}

func getNumFileDesciptors() (int, error) {
	fdDir, err := os.Open(fmt.Sprintf("/proc/%d/fd", os.Getpid()))
	if err != nil {
		return -1, err
	}
	defer fdDir.Close()

	files, err := fdDir.Readdirnames(-1)
	if err != nil {
		return -1, err
	}

	return len(files), nil
}
