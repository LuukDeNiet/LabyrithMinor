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

// UnityEngine.TrackedReference
struct TrackedReference_t470;
struct TrackedReference_t470_marshaled;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m2973 (TrackedReference_t470 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m2974 (TrackedReference_t470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m2975 (Object_t * __this /* static, unused */, TrackedReference_t470 * ___x, TrackedReference_t470 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TrackedReference_t470_marshal(const TrackedReference_t470& unmarshaled, TrackedReference_t470_marshaled& marshaled);
extern "C" void TrackedReference_t470_marshal_back(const TrackedReference_t470_marshaled& marshaled, TrackedReference_t470& unmarshaled);
extern "C" void TrackedReference_t470_marshal_cleanup(TrackedReference_t470_marshaled& marshaled);
