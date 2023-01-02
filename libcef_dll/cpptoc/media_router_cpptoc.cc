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
// $hash=d5e33d2f86d782fb59cd8d5a88596a65825e8de5$
//

#include "libcef_dll/cpptoc/media_router_cpptoc.h"
#include "libcef_dll/cpptoc/media_sink_cpptoc.h"
#include "libcef_dll/cpptoc/media_source_cpptoc.h"
#include "libcef_dll/cpptoc/registration_cpptoc.h"
#include "libcef_dll/ctocpp/completion_callback_ctocpp.h"
#include "libcef_dll/ctocpp/media_observer_ctocpp.h"
#include "libcef_dll/ctocpp/media_route_create_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_media_router_t* cef_media_router_get_global(
    cef_completion_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: callback

  // Execute
  CefRefPtr<CefMediaRouter> _retval = CefMediaRouter::GetGlobalMediaRouter(
      CefCompletionCallbackCToCpp::Wrap(callback));

  // Return type: refptr_same
  return CefMediaRouterCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

struct _cef_registration_t* CEF_CALLBACK
media_router_add_observer(struct _cef_media_router_t* self,
                          struct _cef_media_observer_t* observer) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: observer; type: refptr_diff
  DCHECK(observer);
  if (!observer) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefRegistration> _retval =
      CefMediaRouterCppToC::Get(self)->AddObserver(
          CefMediaObserverCToCpp::Wrap(observer));

  // Return type: refptr_same
  return CefRegistrationCppToC::Wrap(_retval);
}

struct _cef_media_source_t* CEF_CALLBACK
media_router_get_source(struct _cef_media_router_t* self,
                        const cef_string_t* urn) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: urn; type: string_byref_const
  DCHECK(urn);
  if (!urn) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefMediaSource> _retval =
      CefMediaRouterCppToC::Get(self)->GetSource(CefString(urn));

  // Return type: refptr_same
  return CefMediaSourceCppToC::Wrap(_retval);
}

void CEF_CALLBACK
media_router_notify_current_sinks(struct _cef_media_router_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefMediaRouterCppToC::Get(self)->NotifyCurrentSinks();
}

void CEF_CALLBACK
media_router_create_route(struct _cef_media_router_t* self,
                          struct _cef_media_source_t* source,
                          struct _cef_media_sink_t* sink,
                          struct _cef_media_route_create_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: source; type: refptr_same
  DCHECK(source);
  if (!source) {
    return;
  }
  // Verify param: sink; type: refptr_same
  DCHECK(sink);
  if (!sink) {
    return;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback) {
    return;
  }

  // Execute
  CefMediaRouterCppToC::Get(self)->CreateRoute(
      CefMediaSourceCppToC::Unwrap(source), CefMediaSinkCppToC::Unwrap(sink),
      CefMediaRouteCreateCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
media_router_notify_current_routes(struct _cef_media_router_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefMediaRouterCppToC::Get(self)->NotifyCurrentRoutes();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefMediaRouterCppToC::CefMediaRouterCppToC() {
  GetStruct()->add_observer = media_router_add_observer;
  GetStruct()->get_source = media_router_get_source;
  GetStruct()->notify_current_sinks = media_router_notify_current_sinks;
  GetStruct()->create_route = media_router_create_route;
  GetStruct()->notify_current_routes = media_router_notify_current_routes;
}

// DESTRUCTOR - Do not edit by hand.

CefMediaRouterCppToC::~CefMediaRouterCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefMediaRouter>
CefCppToCRefCounted<CefMediaRouterCppToC, CefMediaRouter, cef_media_router_t>::
    UnwrapDerived(CefWrapperType type, cef_media_router_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefMediaRouterCppToC,
                                   CefMediaRouter,
                                   cef_media_router_t>::kWrapperType =
    WT_MEDIA_ROUTER;
