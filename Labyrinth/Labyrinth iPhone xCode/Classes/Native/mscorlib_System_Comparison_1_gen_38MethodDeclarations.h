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

// System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>
struct Comparison_1_t2236;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t163;
// System.AsyncCallback
struct AsyncCallback_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16694_gshared (Comparison_1_t2236 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16694(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2236 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16694_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16695_gshared (Comparison_1_t2236 * __this, CustomAttributeTypedArgument_t1241  ___x, CustomAttributeTypedArgument_t1241  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16695(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2236 *, CustomAttributeTypedArgument_t1241 , CustomAttributeTypedArgument_t1241 , const MethodInfo*))Comparison_1_Invoke_m16695_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16696_gshared (Comparison_1_t2236 * __this, CustomAttributeTypedArgument_t1241  ___x, CustomAttributeTypedArgument_t1241  ___y, AsyncCallback_t164 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16696(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2236 *, CustomAttributeTypedArgument_t1241 , CustomAttributeTypedArgument_t1241 , AsyncCallback_t164 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16696_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16697_gshared (Comparison_1_t2236 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16697(__this, ___result, method) (( int32_t (*) (Comparison_1_t2236 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16697_gshared)(__this, ___result, method)
