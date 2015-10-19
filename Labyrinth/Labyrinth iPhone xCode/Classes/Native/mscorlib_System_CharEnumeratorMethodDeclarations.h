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

// System.CharEnumerator
struct CharEnumerator_t1562;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.CharEnumerator::.ctor(System.String)
extern "C" void CharEnumerator__ctor_m9518 (CharEnumerator_t1562 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.CharEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * CharEnumerator_System_Collections_IEnumerator_get_Current_m9519 (CharEnumerator_t1562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CharEnumerator::System.IDisposable.Dispose()
extern "C" void CharEnumerator_System_IDisposable_Dispose_m9520 (CharEnumerator_t1562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.CharEnumerator::get_Current()
extern "C" uint16_t CharEnumerator_get_Current_m9521 (CharEnumerator_t1562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.CharEnumerator::Clone()
extern "C" Object_t * CharEnumerator_Clone_m9522 (CharEnumerator_t1562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CharEnumerator::MoveNext()
extern "C" bool CharEnumerator_MoveNext_m9523 (CharEnumerator_t1562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CharEnumerator::Reset()
extern "C" void CharEnumerator_Reset_m9524 (CharEnumerator_t1562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
