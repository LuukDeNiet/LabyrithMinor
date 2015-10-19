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

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t879;
// System.Collections.IEnumerable
struct IEnumerable_t789;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t876;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern "C" void X509ChainElementEnumerator__ctor_m4540 (X509ChainElementEnumerator_t879 * __this, Object_t * ___enumerable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_m4541 (X509ChainElementEnumerator_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::get_Current()
extern "C" X509ChainElement_t876 * X509ChainElementEnumerator_get_Current_m4542 (X509ChainElementEnumerator_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern "C" bool X509ChainElementEnumerator_MoveNext_m4543 (X509ChainElementEnumerator_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
extern "C" void X509ChainElementEnumerator_Reset_m4544 (X509ChainElementEnumerator_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
