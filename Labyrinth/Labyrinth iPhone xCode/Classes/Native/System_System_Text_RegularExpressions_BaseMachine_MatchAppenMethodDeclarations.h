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

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t896;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Match
struct Match_t814;
// System.Text.StringBuilder
struct StringBuilder_t296;
// System.IAsyncResult
struct IAsyncResult_t163;
// System.AsyncCallback
struct AsyncCallback_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Text_StringBuilder.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchAppendEvaluator__ctor_m4644 (MatchAppendEvaluator_t896 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void MatchAppendEvaluator_Invoke_m4645 (MatchAppendEvaluator_t896 * __this, Match_t814 * ___match, StringBuilder_t296 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MatchAppendEvaluator_t896(Il2CppObject* delegate, Match_t814 * ___match, StringBuilder_t296 * ___sb);
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchAppendEvaluator_BeginInvoke_m4646 (MatchAppendEvaluator_t896 * __this, Match_t814 * ___match, StringBuilder_t296 * ___sb, AsyncCallback_t164 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
extern "C" void MatchAppendEvaluator_EndInvoke_m4647 (MatchAppendEvaluator_t896 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
