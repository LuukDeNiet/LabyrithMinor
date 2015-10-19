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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t90;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t163;
// System.AsyncCallback
struct AsyncCallback_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1630_gshared (Comparison_1_t90 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1630(__this, ___object, ___method, method) (( void (*) (Comparison_1_t90 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1630_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11812_gshared (Comparison_1_t90 * __this, RaycastHit_t280  ___x, RaycastHit_t280  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11812(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t90 *, RaycastHit_t280 , RaycastHit_t280 , const MethodInfo*))Comparison_1_Invoke_m11812_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11813_gshared (Comparison_1_t90 * __this, RaycastHit_t280  ___x, RaycastHit_t280  ___y, AsyncCallback_t164 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11813(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t90 *, RaycastHit_t280 , RaycastHit_t280 , AsyncCallback_t164 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11813_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11814_gshared (Comparison_1_t90 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11814(__this, ___result, method) (( int32_t (*) (Comparison_1_t90 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11814_gshared)(__this, ___result, method)
