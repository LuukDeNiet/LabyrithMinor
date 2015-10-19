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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t120;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1860;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t538;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m1696_gshared (UnityEvent_1_t120 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1696(__this, method) (( void (*) (UnityEvent_1_t120 *, const MethodInfo*))UnityEvent_1__ctor_m1696_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m12176_gshared (UnityEvent_1_t120 * __this, UnityAction_1_t1860 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m12176(__this, ___call, method) (( void (*) (UnityEvent_1_t120 *, UnityAction_1_t1860 *, const MethodInfo*))UnityEvent_1_AddListener_m12176_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12177_gshared (UnityEvent_1_t120 * __this, UnityAction_1_t1860 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12177(__this, ___call, method) (( void (*) (UnityEvent_1_t120 *, UnityAction_1_t1860 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12177_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12178_gshared (UnityEvent_1_t120 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12178(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t120 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12178_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t538 * UnityEvent_1_GetDelegate_m12179_gshared (UnityEvent_1_t120 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12179(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t538 * (*) (UnityEvent_1_t120 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12179_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t538 * UnityEvent_1_GetDelegate_m12180_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1860 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12180(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t538 * (*) (Object_t * /* static, unused */, UnityAction_1_t1860 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12180_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1701_gshared (UnityEvent_1_t120 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1701(__this, ___arg0, method) (( void (*) (UnityEvent_1_t120 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m1701_gshared)(__this, ___arg0, method)
