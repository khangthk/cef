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
// $hash=af3697f4c41762086c8edff7f63a794e8bf95b25$
//

#include "libcef_dll/ctocpp/command_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefCommandHandlerCToCpp::OnChromeCommand(
    CefRefPtr<CefBrowser> browser,
    int command_id,
    cef_window_open_disposition_t disposition) {
  shutdown_checker::AssertNotShutdown();

  cef_command_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_chrome_command)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->on_chrome_command(
      _struct, CefBrowserCppToC::Wrap(browser), command_id, disposition);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefCommandHandlerCToCpp::CefCommandHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefCommandHandlerCToCpp::~CefCommandHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_command_handler_t* CefCToCppRefCounted<
    CefCommandHandlerCToCpp,
    CefCommandHandler,
    cef_command_handler_t>::UnwrapDerived(CefWrapperType type,
                                          CefCommandHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefCommandHandlerCToCpp,
                                   CefCommandHandler,
                                   cef_command_handler_t>::kWrapperType =
    WT_COMMAND_HANDLER;
