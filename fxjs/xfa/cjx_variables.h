// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef FXJS_XFA_CJX_VARIABLES_H_
#define FXJS_XFA_CJX_VARIABLES_H_

#include "fxjs/xfa/cjx_container.h"

class CXFA_Variables;

class CJX_Variables : public CJX_Container {
 public:
  explicit CJX_Variables(CXFA_Variables* node);
  ~CJX_Variables() override;

  JS_PROP(use);
  JS_PROP(usehref);
};

#endif  // FXJS_XFA_CJX_VARIABLES_H_
