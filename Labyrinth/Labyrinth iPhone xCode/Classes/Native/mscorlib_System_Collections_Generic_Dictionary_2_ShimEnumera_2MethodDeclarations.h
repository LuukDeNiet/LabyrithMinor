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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2173;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2163;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16157_gshared (ShimEnumerator_t2173 * __this, Dictionary_2_t2163 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16157(__this, ___host, method) (( void (*) (ShimEnumerator_t2173 *, Dictionary_2_t2163 *, const MethodInfo*))ShimEnumerator__ctor_m16157_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16158_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16158(__this, method) (( bool (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_MoveNext_m16158_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t970  ShimEnumerator_get_Entry_m16159_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16159(__this, method) (( DictionaryEntry_t970  (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Entry_m16159_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16160_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16160(__this, method) (( Object_t * (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Key_m16160_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16161_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16161(__this, method) (( Object_t * (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Value_m16161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16162_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16162(__this, method) (( Object_t * (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Current_m16162_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m16163_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16163(__this, method) (( void (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_Reset_m16163_gshared)(__this, method)
