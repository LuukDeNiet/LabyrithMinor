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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11582_gshared (InternalEnumerator_1_t1815 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11582(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1815 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11582_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11583_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11583(__this, method) (( void (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11583_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11584_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11584(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11584_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11585_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11585(__this, method) (( void (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11585_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11586_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11586(__this, method) (( bool (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11586_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1814  InternalEnumerator_1_get_Current_m11587_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11587(__this, method) (( KeyValuePair_2_t1814  (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11587_gshared)(__this, method)
