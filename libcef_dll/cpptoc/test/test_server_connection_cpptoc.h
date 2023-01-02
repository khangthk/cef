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
// $hash=da4666f75e56bfc41483f5d5627e9db612364ffb$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_TEST_TEST_SERVER_CONNECTION_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_TEST_TEST_SERVER_CONNECTION_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/test/cef_test_server_capi.h"
#include "include/test/cef_test_server.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefTestServerConnectionCppToC
    : public CefCppToCRefCounted<CefTestServerConnectionCppToC,
                                 CefTestServerConnection,
                                 cef_test_server_connection_t> {
 public:
  CefTestServerConnectionCppToC();
  virtual ~CefTestServerConnectionCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_TEST_TEST_SERVER_CONNECTION_CPPTOC_H_
