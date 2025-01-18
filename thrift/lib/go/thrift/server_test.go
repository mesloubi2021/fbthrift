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
	"net"
	"testing"
	"time"

	"golang.org/x/sync/errgroup"

	"github.com/facebook/fbthrift/thrift/lib/go/thrift/dummy"
)

func TestServerCancellation(t *testing.T) {
	runCancellationTestFunc := func(t *testing.T, serverTransport TransportID) {
		listener, err := net.Listen("tcp", "[::]:0")
		if err != nil {
			t.Fatalf("could not create listener: %s", err)
		}
		addr := listener.Addr()
		t.Logf("Server listening on %v", addr)

		processor := dummy.NewDummyProcessor(&dummy.DummyHandler{})
		server := NewServer(processor, listener, serverTransport)

		serverCtx, serverCancel := context.WithCancel(context.Background())
		var serverEG errgroup.Group
		serverEG.Go(func() error {
			return server.ServeContext(serverCtx)
		})

		// Let the server start up and get to the accept loop.
		time.Sleep(time.Second)

		// Shut down server.
		serverCancel()
		err = serverEG.Wait()
		if !errors.Is(err, context.Canceled) {
			t.Fatalf("unexpected error in ServeContext: %v", err)
		}
	}

	t.Run("NewServer/Header", func(t *testing.T) {
		runCancellationTestFunc(t, TransportIDHeader)
	})
	t.Run("NewServer/UpgradeToRocket", func(t *testing.T) {
		runCancellationTestFunc(t, TransportIDUpgradeToRocket)
	})
	t.Run("NewServer/Rocket", func(t *testing.T) {
		runCancellationTestFunc(t, TransportIDRocket)
	})
}
