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
	"github.com/stretchr/testify/assert"
)

func TestHeaderProtocolSomePersistentHeaders(t *testing.T) {
	protocol, err := newHeaderProtocol(newMockSocket(), types.ProtocolIDCompact, 0, map[string]string{"key": "value"})
	assert.NoError(t, err)
	v, ok := protocol.(*headerProtocol).trans.persistentWriteInfoHeaders["key"]
	assert.True(t, ok)
	assert.Equal(t, "value", v)
}

func TestRocketProtocolSomePersistentHeaders(t *testing.T) {
	protocol, err := newRocketClient(newMockSocket(), types.ProtocolIDCompact, 0, map[string]string{"key": "value"})
	assert.NoError(t, err)
	v, ok := protocol.(*rocketClient).persistentHeaders["key"]
	assert.True(t, ok)
	assert.Equal(t, "value", v)
}

func TestUpgradeToRocketProtocolSomePersistentHeaders(t *testing.T) {
	upgradeProtocol, err := newUpgradeToRocketClient(newMockSocket(), types.ProtocolIDCompact, 0, map[string]string{"key": "value"})
	assert.NoError(t, err)
	protocol := upgradeProtocol.(*upgradeToRocketClient).headerProtocol
	v, ok := protocol.(*headerProtocol).trans.persistentWriteInfoHeaders["key"]
	assert.True(t, ok)
	assert.Equal(t, "value", v)
	protocol = upgradeProtocol.(*upgradeToRocketClient).rocketProtocol
	v, ok = protocol.(*rocketClient).persistentHeaders["key"]
	assert.True(t, ok)
	assert.Equal(t, "value", v)
}
