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
	"crypto/tls"
	"reflect"
	"testing"
)

func TestListenerALPNOptions(t *testing.T) {
	testCases := []struct {
		name               string
		option             func(*tls.Config)
		expectedNextProtos []string
	}{
		{"Header", WithALPNHeader(), []string{"thrift"}},
		{"Rocket", WithALPNRocket(), []string{"rs"}},
		{"UpgradeToRocket", WithALPNUpgradeToRocket(), []string{"rs", "thrift"}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			tlsConfig := &tls.Config{}
			tc.option(tlsConfig)
			if !reflect.DeepEqual(tlsConfig.NextProtos, tc.expectedNextProtos) {
				t.Fatalf("unexpected NextProtos: %v (expected), %v (actual)", tc.expectedNextProtos, tlsConfig.NextProtos)
			}
		})
	}
}
