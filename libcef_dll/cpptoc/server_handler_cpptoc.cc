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
// $hash=c97b6223ac1745adbc83abf78ccd3b7d401ccd20$
//

#include "libcef_dll/cpptoc/server_handler_cpptoc.h"
#include "libcef_dll/ctocpp/callback_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/server_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
server_handler_on_server_created(struct _cef_server_handler_t* self,
                                 cef_server_t* server) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnServerCreated(
      CefServerCToCpp::Wrap(server));
}

void CEF_CALLBACK
server_handler_on_server_destroyed(struct _cef_server_handler_t* self,
                                   cef_server_t* server) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnServerDestroyed(
      CefServerCToCpp::Wrap(server));
}

void CEF_CALLBACK
server_handler_on_client_connected(struct _cef_server_handler_t* self,
                                   cef_server_t* server,
                                   int connection_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnClientConnected(
      CefServerCToCpp::Wrap(server), connection_id);
}

void CEF_CALLBACK
server_handler_on_client_disconnected(struct _cef_server_handler_t* self,
                                      cef_server_t* server,
                                      int connection_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnClientDisconnected(
      CefServerCToCpp::Wrap(server), connection_id);
}

void CEF_CALLBACK
server_handler_on_http_request(struct _cef_server_handler_t* self,
                               cef_server_t* server,
                               int connection_id,
                               const cef_string_t* client_address,
                               cef_request_t* request) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }
  // Verify param: client_address; type: string_byref_const
  DCHECK(client_address);
  if (!client_address) {
    return;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnHttpRequest(
      CefServerCToCpp::Wrap(server), connection_id, CefString(client_address),
      CefRequestCToCpp::Wrap(request));
}

void CEF_CALLBACK
server_handler_on_web_socket_request(struct _cef_server_handler_t* self,
                                     cef_server_t* server,
                                     int connection_id,
                                     const cef_string_t* client_address,
                                     cef_request_t* request,
                                     cef_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }
  // Verify param: client_address; type: string_byref_const
  DCHECK(client_address);
  if (!client_address) {
    return;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnWebSocketRequest(
      CefServerCToCpp::Wrap(server), connection_id, CefString(client_address),
      CefRequestCToCpp::Wrap(request), CefCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
server_handler_on_web_socket_connected(struct _cef_server_handler_t* self,
                                       cef_server_t* server,
                                       int connection_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnWebSocketConnected(
      CefServerCToCpp::Wrap(server), connection_id);
}

void CEF_CALLBACK
server_handler_on_web_socket_message(struct _cef_server_handler_t* self,
                                     cef_server_t* server,
                                     int connection_id,
                                     const void* data,
                                     size_t data_size) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: server; type: refptr_diff
  DCHECK(server);
  if (!server) {
    return;
  }
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data) {
    return;
  }

  // Execute
  CefServerHandlerCppToC::Get(self)->OnWebSocketMessage(
      CefServerCToCpp::Wrap(server), connection_id, data, data_size);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefServerHandlerCppToC::CefServerHandlerCppToC() {
  GetStruct()->on_server_created = server_handler_on_server_created;
  GetStruct()->on_server_destroyed = server_handler_on_server_destroyed;
  GetStruct()->on_client_connected = server_handler_on_client_connected;
  GetStruct()->on_client_disconnected = server_handler_on_client_disconnected;
  GetStruct()->on_http_request = server_handler_on_http_request;
  GetStruct()->on_web_socket_request = server_handler_on_web_socket_request;
  GetStruct()->on_web_socket_connected = server_handler_on_web_socket_connected;
  GetStruct()->on_web_socket_message = server_handler_on_web_socket_message;
}

// DESTRUCTOR - Do not edit by hand.

CefServerHandlerCppToC::~CefServerHandlerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefServerHandler> CefCppToCRefCounted<
    CefServerHandlerCppToC,
    CefServerHandler,
    cef_server_handler_t>::UnwrapDerived(CefWrapperType type,
                                         cef_server_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefServerHandlerCppToC,
                                   CefServerHandler,
                                   cef_server_handler_t>::kWrapperType =
    WT_SERVER_HANDLER;
