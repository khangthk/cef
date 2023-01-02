// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=c0a7d6e6596314771567fafa185ac777bdc61a65$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_TEST_TEST_SERVER_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TEST_TEST_SERVER_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/test/cef_test_server_capi.h"
#include "include/test/cef_test_server.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefTestServerHandlerCToCpp
    : public CefCToCppRefCounted<CefTestServerHandlerCToCpp,
                                 CefTestServerHandler,
                                 cef_test_server_handler_t> {
 public:
  CefTestServerHandlerCToCpp();
  virtual ~CefTestServerHandlerCToCpp();

  // CefTestServerHandler methods.
  bool OnTestServerRequest(
      CefRefPtr<CefTestServer> server,
      CefRefPtr<CefRequest> request,
      CefRefPtr<CefTestServerConnection> connection) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_TEST_TEST_SERVER_HANDLER_CTOCPP_H_
