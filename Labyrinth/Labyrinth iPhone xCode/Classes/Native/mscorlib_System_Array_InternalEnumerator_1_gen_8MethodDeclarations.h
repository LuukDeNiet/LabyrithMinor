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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11648_gshared (InternalEnumerator_1_t1822 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11648(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1822 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11648_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11649_gshared (InternalEnumerator_1_t1822 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11649(__this, method) (( void (*) (InternalEnumerator_1_t1822 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11649_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11650_gshared (InternalEnumerator_1_t1822 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11650(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1822 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11650_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11651_gshared (InternalEnumerator_1_t1822 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11651(__this, method) (( void (*) (InternalEnumerator_1_t1822 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11651_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11652_gshared (InternalEnumerator_1_t1822 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11652(__this, method) (( bool (*) (InternalEnumerator_1_t1822 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11652_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t970  InternalEnumerator_1_get_Current_m11653_gshared (InternalEnumerator_1_t1822 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11653(__this, method) (( DictionaryEntry_t970  (*) (InternalEnumerator_1_t1822 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11653_gshared)(__this, method)
