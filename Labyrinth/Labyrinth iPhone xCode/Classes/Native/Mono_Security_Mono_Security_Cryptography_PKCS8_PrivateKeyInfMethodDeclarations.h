﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t654;
// System.Byte[]
struct ByteU5BU5D_t609;
// System.Security.Cryptography.RSA
struct RSA_t660;
// System.Security.Cryptography.DSA
struct DSA_t667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m3349 (PrivateKeyInfo_t654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m3350 (PrivateKeyInfo_t654 * __this, ByteU5BU5D_t609* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t609* PrivateKeyInfo_get_PrivateKey_m3351 (PrivateKeyInfo_t654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m3352 (PrivateKeyInfo_t654 * __this, ByteU5BU5D_t609* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t609* PrivateKeyInfo_RemoveLeadingZero_m3353 (Object_t * __this /* static, unused */, ByteU5BU5D_t609* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t609* PrivateKeyInfo_Normalize_m3354 (Object_t * __this /* static, unused */, ByteU5BU5D_t609* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t660 * PrivateKeyInfo_DecodeRSA_m3355 (Object_t * __this /* static, unused */, ByteU5BU5D_t609* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t667 * PrivateKeyInfo_DecodeDSA_m3356 (Object_t * __this /* static, unused */, ByteU5BU5D_t609* ___privateKey, DSAParameters_t770  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
