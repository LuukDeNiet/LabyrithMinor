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

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2106;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t163;
// System.AsyncCallback
struct AsyncCallback_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15427_gshared (Predicate_1_t2106 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15427(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2106 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15427_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15428_gshared (Predicate_1_t2106 * __this, UICharInfo_t340  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15428(__this, ___obj, method) (( bool (*) (Predicate_1_t2106 *, UICharInfo_t340 , const MethodInfo*))Predicate_1_Invoke_m15428_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15429_gshared (Predicate_1_t2106 * __this, UICharInfo_t340  ___obj, AsyncCallback_t164 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15429(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2106 *, UICharInfo_t340 , AsyncCallback_t164 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15429_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15430_gshared (Predicate_1_t2106 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15430(__this, ___result, method) (( bool (*) (Predicate_1_t2106 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15430_gshared)(__this, ___result, method)
