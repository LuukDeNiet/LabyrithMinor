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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t97;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t282;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t538;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m1640_gshared (UnityEvent_1_t97 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1640(__this, method) (( void (*) (UnityEvent_1_t97 *, const MethodInfo*))UnityEvent_1__ctor_m1640_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1643_gshared (UnityEvent_1_t97 * __this, UnityAction_1_t282 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1643(__this, ___call, method) (( void (*) (UnityEvent_1_t97 *, UnityAction_1_t282 *, const MethodInfo*))UnityEvent_1_AddListener_m1643_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m1977_gshared (UnityEvent_1_t97 * __this, UnityAction_1_t282 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m1977(__this, ___call, method) (( void (*) (UnityEvent_1_t97 *, UnityAction_1_t282 *, const MethodInfo*))UnityEvent_1_RemoveListener_m1977_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m11832_gshared (UnityEvent_1_t97 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m11832(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t97 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m11832_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t538 * UnityEvent_1_GetDelegate_m11833_gshared (UnityEvent_1_t97 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11833(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t538 * (*) (UnityEvent_1_t97 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m11833_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t538 * UnityEvent_1_GetDelegate_m11834_gshared (Object_t * __this /* static, unused */, UnityAction_1_t282 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11834(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t538 * (*) (Object_t * /* static, unused */, UnityAction_1_t282 *, const MethodInfo*))UnityEvent_1_GetDelegate_m11834_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1642_gshared (UnityEvent_1_t97 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1642(__this, ___arg0, method) (( void (*) (UnityEvent_1_t97 *, float, const MethodInfo*))UnityEvent_1_Invoke_m1642_gshared)(__this, ___arg0, method)
