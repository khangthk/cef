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
// $hash=ce835458848e642bc1f9a8231a7d6996f4db85ee$
//

#include "libcef_dll/ctocpp/views/display_ctocpp.h"
#include <algorithm>
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") CefRefPtr<CefDisplay> CefDisplay::GetPrimaryDisplay() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_display_t* _retval = cef_display_get_primary();

  // Return type: refptr_same
  return CefDisplayCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDisplay> CefDisplay::GetDisplayNearestPoint(
    const CefPoint& point,
    bool input_pixel_coords) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_display_t* _retval =
      cef_display_get_nearest_point(&point, input_pixel_coords);

  // Return type: refptr_same
  return CefDisplayCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDisplay> CefDisplay::GetDisplayMatchingBounds(
    const CefRect& bounds,
    bool input_pixel_coords) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_display_t* _retval =
      cef_display_get_matching_bounds(&bounds, input_pixel_coords);

  // Return type: refptr_same
  return CefDisplayCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") size_t CefDisplay::GetDisplayCount() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = cef_display_get_count();

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefDisplay::GetAllDisplays(std::vector<CefRefPtr<CefDisplay>>& displays) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: displays; type: refptr_vec_same_byref
  size_t displaysSize = displays.size();
  size_t displaysCount = std::max(GetDisplayCount(), displaysSize);
  cef_display_t** displaysList = NULL;
  if (displaysCount > 0) {
    displaysList = new cef_display_t*[displaysCount];
    DCHECK(displaysList);
    if (displaysList) {
      memset(displaysList, 0, sizeof(cef_display_t*) * displaysCount);
    }
    if (displaysList && displaysSize > 0) {
      for (size_t i = 0; i < displaysSize; ++i) {
        displaysList[i] = CefDisplayCToCpp::Unwrap(displays[i]);
      }
    }
  }

  // Execute
  cef_display_get_alls(&displaysCount, displaysList);

  // Restore param:displays; type: refptr_vec_same_byref
  displays.clear();
  if (displaysCount > 0 && displaysList) {
    for (size_t i = 0; i < displaysCount; ++i) {
      displays.push_back(CefDisplayCToCpp::Wrap(displaysList[i]));
    }
    delete[] displaysList;
  }
}

NO_SANITIZE("cfi-icall")
CefPoint CefDisplay::ConvertScreenPointToPixels(const CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = cef_display_convert_screen_point_to_pixels(&point);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefPoint CefDisplay::ConvertScreenPointFromPixels(const CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = cef_display_convert_screen_point_from_pixels(&point);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefRect CefDisplay::ConvertScreenRectToPixels(const CefRect& rect) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = cef_display_convert_screen_rect_to_pixels(&rect);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefRect CefDisplay::ConvertScreenRectFromPixels(const CefRect& rect) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = cef_display_convert_screen_rect_from_pixels(&rect);

  // Return type: simple
  return _retval;
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") int64 CefDisplayCToCpp::GetID() {
  shutdown_checker::AssertNotShutdown();

  cef_display_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_id)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = _struct->get_id(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") float CefDisplayCToCpp::GetDeviceScaleFactor() {
  shutdown_checker::AssertNotShutdown();

  cef_display_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_device_scale_factor)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  float _retval = _struct->get_device_scale_factor(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefDisplayCToCpp::ConvertPointToPixels(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_display_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_pixels)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->convert_point_to_pixels(_struct, &point);
}

NO_SANITIZE("cfi-icall")
void CefDisplayCToCpp::ConvertPointFromPixels(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_display_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_pixels)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->convert_point_from_pixels(_struct, &point);
}

NO_SANITIZE("cfi-icall") CefRect CefDisplayCToCpp::GetBounds() {
  shutdown_checker::AssertNotShutdown();

  cef_display_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_bounds)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefRect CefDisplayCToCpp::GetWorkArea() {
  shutdown_checker::AssertNotShutdown();

  cef_display_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_work_area)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_work_area(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int CefDisplayCToCpp::GetRotation() {
  shutdown_checker::AssertNotShutdown();

  cef_display_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_rotation)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_rotation(_struct);

  // Return type: simple
  return _retval;
}

// CONSTRUCTOR - Do not edit by hand.

CefDisplayCToCpp::CefDisplayCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDisplayCToCpp::~CefDisplayCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_display_t*
CefCToCppRefCounted<CefDisplayCToCpp, CefDisplay, cef_display_t>::UnwrapDerived(
    CefWrapperType type,
    CefDisplay* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefDisplayCToCpp,
                                   CefDisplay,
                                   cef_display_t>::kWrapperType = WT_DISPLAY;
