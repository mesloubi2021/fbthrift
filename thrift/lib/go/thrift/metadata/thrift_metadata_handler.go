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

package metadata

import (
	"context"

	"github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// ProcessorWithMetadata is an interface for Processors
// that are able to provide their Thrift metadata.
type ProcessorWithMetadata interface {
	GetThriftMetadata() *metadata.ThriftMetadata
}

// ThriftMetadataHandler is a handler for ThriftMetadataService from thrift/lib/thrift/metadata.thrift
type ThriftMetadataHandler struct {
	proc               ProcessorWithMetadata
	metadataModuleName string
}

// Compile time interface enforcer
var _ metadata.ThriftMetadataService = (*ThriftMetadataHandler)(nil)

// NewThriftMetadataHandler creates a new ThriftMetadataHandler.
func NewThriftMetadataHandler(metadataModuleName string, proc ProcessorWithMetadata) *ThriftMetadataHandler {
	return &ThriftMetadataHandler{
		proc:               proc,
		metadataModuleName: metadataModuleName,
	}
}

// GetThriftServiceMetadata implements a required ThriftMetadataService method.
func (h *ThriftMetadataHandler) GetThriftServiceMetadata(context.Context) (*metadata.ThriftServiceMetadataResponse, error) {
	return GetThriftServiceMetadataResponse(h.metadataModuleName, h.proc.GetThriftMetadata()), nil
}
