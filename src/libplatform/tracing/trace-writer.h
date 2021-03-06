// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SRC_LIBPLATFORM_TRACING_TRACE_WRITER_H_
#define SRC_LIBPLATFORM_TRACING_TRACE_WRITER_H_

#include "include/libplatform/v8-tracing.h"

namespace v8 {
namespace platform {
namespace tracing {

class JSONTraceWriter : public TraceWriter {
 public:
  explicit JSONTraceWriter(std::ostream& stream);
  ~JSONTraceWriter();
  void AppendTraceEvent(TraceObject* trace_event) override;
  void Flush() override;

 private:
  std::ostream& stream_;
  bool append_comma_ = false;
};

}  // namespace tracing
}  // namespace platform
}  // namespace v8

#endif  // SRC_LIBPLATFORM_TRACING_TRACE_WRITER_H_
