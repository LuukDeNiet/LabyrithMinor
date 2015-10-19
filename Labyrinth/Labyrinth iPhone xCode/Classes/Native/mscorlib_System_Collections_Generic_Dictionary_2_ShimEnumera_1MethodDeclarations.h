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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1900;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1891;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12605_gshared (ShimEnumerator_t1900 * __this, Dictionary_2_t1891 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12605(__this, ___host, method) (( void (*) (ShimEnumerator_t1900 *, Dictionary_2_t1891 *, const MethodInfo*))ShimEnumerator__ctor_m12605_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12606_gshared (ShimEnumerator_t1900 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12606(__this, method) (( bool (*) (ShimEnumerator_t1900 *, const MethodInfo*))ShimEnumerator_MoveNext_m12606_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t970  ShimEnumerator_get_Entry_m12607_gshared (ShimEnumerator_t1900 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12607(__this, method) (( DictionaryEntry_t970  (*) (ShimEnumerator_t1900 *, const MethodInfo*))ShimEnumerator_get_Entry_m12607_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12608_gshared (ShimEnumerator_t1900 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12608(__this, method) (( Object_t * (*) (ShimEnumerator_t1900 *, const MethodInfo*))ShimEnumerator_get_Key_m12608_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12609_gshared (ShimEnumerator_t1900 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12609(__this, method) (( Object_t * (*) (ShimEnumerator_t1900 *, const MethodInfo*))ShimEnumerator_get_Value_m12609_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12610_gshared (ShimEnumerator_t1900 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12610(__this, method) (( Object_t * (*) (ShimEnumerator_t1900 *, const MethodInfo*))ShimEnumerator_get_Current_m12610_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12611_gshared (ShimEnumerator_t1900 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12611(__this, method) (( void (*) (ShimEnumerator_t1900 *, const MethodInfo*))ShimEnumerator_Reset_m12611_gshared)(__this, method)
