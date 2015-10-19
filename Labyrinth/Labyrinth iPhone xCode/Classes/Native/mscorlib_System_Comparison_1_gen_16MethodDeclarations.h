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

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1915;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t163;
// System.AsyncCallback
struct AsyncCallback_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12855_gshared (Comparison_1_t1915 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12855(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1915 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12855_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12856_gshared (Comparison_1_t1915 * __this, UIVertex_t176  ___x, UIVertex_t176  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12856(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1915 *, UIVertex_t176 , UIVertex_t176 , const MethodInfo*))Comparison_1_Invoke_m12856_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12857_gshared (Comparison_1_t1915 * __this, UIVertex_t176  ___x, UIVertex_t176  ___y, AsyncCallback_t164 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12857(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1915 *, UIVertex_t176 , UIVertex_t176 , AsyncCallback_t164 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12857_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12858_gshared (Comparison_1_t1915 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12858(__this, ___result, method) (( int32_t (*) (Comparison_1_t1915 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12858_gshared)(__this, ___result, method)
