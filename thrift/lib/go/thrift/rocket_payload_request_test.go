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
	"testing"

	"github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
	"github.com/stretchr/testify/require"
)

func TestRequestRPCMetadata(t *testing.T) {
	wantName := "test123"
	wantType := types.CALL
	wantProto := types.ProtocolIDCompact
	wantZstd := false
	wantOther := map[string]string{"header": "1"}
	data, err := encodeRequestPayload(wantName, wantProto, wantType, wantOther, wantZstd, nil)
	require.NoError(t, err)
	got, err := decodeRequestPayload(data)
	require.NoError(t, err)
	require.Equal(t, wantName, got.Name())
	require.Equal(t, wantType, got.TypeID())
	require.Equal(t, wantProto, got.ProtoID())
	require.Equal(t, wantZstd, got.Zstd())
	require.Equal(t, wantOther, got.Headers())
}
