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
	"github.com/rsocket/rsocket-go/logger"
)

type rsocketLogger func(format string, args ...interface{})

// Debugf print to the debug level logs.
func (log rsocketLogger) Debugf(format string, args ...interface{}) {
	log(format, args...)
}

// Infof print to the info level logs.
func (log rsocketLogger) Infof(format string, args ...interface{}) {
	log(format, args...)
}

// Warnf print to the info level logs.
func (log rsocketLogger) Warnf(format string, args ...interface{}) {
	log(format, args...)
}

// Errorf print to the info level logs.
func (log rsocketLogger) Errorf(format string, args ...interface{}) {
	log(format, args...)
}

func setRsocketLogger(log func(format string, args ...interface{})) {
	logger.SetLevel(logger.LevelError)
	logger.SetLogger(rsocketLogger(log))
}
