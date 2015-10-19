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

// System.Collections.Stack
struct Stack_t921;
// System.Collections.ICollection
struct ICollection_t971;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t283;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Stack::.ctor()
extern "C" void Stack__ctor_m5175 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Collections.ICollection)
extern "C" void Stack__ctor_m6876 (Stack_t921 * __this, Object_t * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Int32)
extern "C" void Stack__ctor_m6877 (Stack_t921 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
extern "C" void Stack_Resize_m6878 (Stack_t921 * __this, int32_t ___ncapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
extern "C" int32_t Stack_get_Count_m6879 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
extern "C" bool Stack_get_IsSynchronized_m6880 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
extern "C" Object_t * Stack_get_SyncRoot_m6881 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
extern "C" void Stack_Clear_m6882 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Clone()
extern "C" Object_t * Stack_Clone_m6883 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
extern "C" void Stack_CopyTo_m6884 (Stack_t921 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
extern "C" Object_t * Stack_GetEnumerator_m6885 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
extern "C" Object_t * Stack_Peek_m6886 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
extern "C" Object_t * Stack_Pop_m6887 (Stack_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
extern "C" void Stack_Push_m6888 (Stack_t921 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
