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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1850;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1840;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11975_gshared (ShimEnumerator_t1850 * __this, Dictionary_2_t1840 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11975(__this, ___host, method) (( void (*) (ShimEnumerator_t1850 *, Dictionary_2_t1840 *, const MethodInfo*))ShimEnumerator__ctor_m11975_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11976_gshared (ShimEnumerator_t1850 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11976(__this, method) (( bool (*) (ShimEnumerator_t1850 *, const MethodInfo*))ShimEnumerator_MoveNext_m11976_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t970  ShimEnumerator_get_Entry_m11977_gshared (ShimEnumerator_t1850 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11977(__this, method) (( DictionaryEntry_t970  (*) (ShimEnumerator_t1850 *, const MethodInfo*))ShimEnumerator_get_Entry_m11977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11978_gshared (ShimEnumerator_t1850 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11978(__this, method) (( Object_t * (*) (ShimEnumerator_t1850 *, const MethodInfo*))ShimEnumerator_get_Key_m11978_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11979_gshared (ShimEnumerator_t1850 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11979(__this, method) (( Object_t * (*) (ShimEnumerator_t1850 *, const MethodInfo*))ShimEnumerator_get_Value_m11979_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11980_gshared (ShimEnumerator_t1850 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11980(__this, method) (( Object_t * (*) (ShimEnumerator_t1850 *, const MethodInfo*))ShimEnumerator_get_Current_m11980_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m11981_gshared (ShimEnumerator_t1850 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m11981(__this, method) (( void (*) (ShimEnumerator_t1850 *, const MethodInfo*))ShimEnumerator_Reset_m11981_gshared)(__this, method)
