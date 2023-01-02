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
// $hash=26c06425ee3d75470177631cff1348e5dc26f946$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_X509CERT_PRINCIPAL_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_X509CERT_PRINCIPAL_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include <vector>
#include "include/capi/cef_x509_certificate_capi.h"
#include "include/cef_x509_certificate.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefX509CertPrincipalCToCpp
    : public CefCToCppRefCounted<CefX509CertPrincipalCToCpp,
                                 CefX509CertPrincipal,
                                 cef_x509cert_principal_t> {
 public:
  CefX509CertPrincipalCToCpp();
  virtual ~CefX509CertPrincipalCToCpp();

  // CefX509CertPrincipal methods.
  CefString GetDisplayName() override;
  CefString GetCommonName() override;
  CefString GetLocalityName() override;
  CefString GetStateOrProvinceName() override;
  CefString GetCountryName() override;
  void GetStreetAddresses(std::vector<CefString>& addresses) override;
  void GetOrganizationNames(std::vector<CefString>& names) override;
  void GetOrganizationUnitNames(std::vector<CefString>& names) override;
  void GetDomainComponents(std::vector<CefString>& components) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_X509CERT_PRINCIPAL_CTOCPP_H_
