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

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1860;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t163;
// System.AsyncCallback
struct AsyncCallback_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m12181_gshared (UnityAction_1_t1860 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m12181(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1860 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m12181_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12182_gshared (UnityAction_1_t1860 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12182(__this, ___arg0, method) (( void (*) (UnityAction_1_t1860 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m12182_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12183_gshared (UnityAction_1_t1860 * __this, int32_t ___arg0, AsyncCallback_t164 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12183(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1860 *, int32_t, AsyncCallback_t164 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12183_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12184_gshared (UnityAction_1_t1860 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12184(__this, ___result, method) (( void (*) (UnityAction_1_t1860 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12184_gshared)(__this, ___result, method)
