﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2151;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t538;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_4__ctor_m15947_gshared (UnityEvent_4_t2151 * __this, const MethodInfo* method);
#define UnityEvent_4__ctor_m15947(__this, method) (( void (*) (UnityEvent_4_t2151 *, const MethodInfo*))UnityEvent_4__ctor_m15947_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m15948_gshared (UnityEvent_4_t2151 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m15948(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_4_t2151 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_4_FindMethod_Impl_m15948_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t538 * UnityEvent_4_GetDelegate_m15949_gshared (UnityEvent_4_t2151 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_4_GetDelegate_m15949(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t538 * (*) (UnityEvent_4_t2151 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_4_GetDelegate_m15949_gshared)(__this, ___target, ___theFunction, method)
