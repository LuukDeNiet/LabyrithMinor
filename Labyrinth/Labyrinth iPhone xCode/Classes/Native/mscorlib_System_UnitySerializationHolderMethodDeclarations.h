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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1623;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t567;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1563;
// System.Reflection.Module
struct Module_t1200;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m10246 (UnitySerializationHolder_t1623 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m10247 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t567 * ___info, StreamingContext_t568  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m10248 (Object_t * __this /* static, unused */, DBNull_t1563 * ___instance, SerializationInfo_t567 * ___info, StreamingContext_t568  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m10249 (Object_t * __this /* static, unused */, Module_t1200 * ___instance, SerializationInfo_t567 * ___info, StreamingContext_t568  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m10250 (UnitySerializationHolder_t1623 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m10251 (UnitySerializationHolder_t1623 * __this, StreamingContext_t568  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
