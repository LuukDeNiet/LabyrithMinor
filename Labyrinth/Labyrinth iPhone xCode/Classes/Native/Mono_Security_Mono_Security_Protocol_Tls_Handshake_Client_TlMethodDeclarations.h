#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t746;
// Mono.Security.Protocol.Tls.Context
struct Context_t696;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t740;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificate__ctor_m4004 (TlsClientCertificate_t746 * __this, Context_t696 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
extern "C" X509Certificate_t740 * TlsClientCertificate_get_ClientCertificate_m4005 (TlsClientCertificate_t746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
extern "C" void TlsClientCertificate_Update_m4006 (TlsClientCertificate_t746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
extern "C" void TlsClientCertificate_GetClientCertificate_m4007 (TlsClientCertificate_t746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
extern "C" void TlsClientCertificate_SendCertificates_m4008 (TlsClientCertificate_t746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
extern "C" void TlsClientCertificate_ProcessAsSsl3_m4009 (TlsClientCertificate_t746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
extern "C" void TlsClientCertificate_ProcessAsTls1_m4010 (TlsClientCertificate_t746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" X509Certificate_t740 * TlsClientCertificate_FindParentCertificate_m4011 (TlsClientCertificate_t746 * __this, X509Certificate_t740 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
