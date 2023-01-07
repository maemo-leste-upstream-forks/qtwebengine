// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/editing/markers/grammar_marker_list_impl.h"

namespace blink {

DocumentMarker::MarkerType GrammarMarkerListImpl::MarkerType() const {
  return DocumentMarker::kGrammar;
}

}  // namespace blink