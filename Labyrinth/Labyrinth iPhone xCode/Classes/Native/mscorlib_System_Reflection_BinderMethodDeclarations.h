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

// System.Reflection.Binder
struct Binder_t582;
// System.Object[]
struct ObjectU5BU5D_t298;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t590;
// System.Globalization.CultureInfo
struct CultureInfo_t584;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t589;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1661;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m7758 (Binder_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m7759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t582 * Binder_get_DefaultBinder_m7760 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m7761 (Object_t * __this /* static, unused */, Binder_t582 * ___binder, ObjectU5BU5D_t298* ___args, ParameterInfoU5BU5D_t590* ___pinfo, CultureInfo_t584 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m7762 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t589 * Binder_FindMostDerivedMatch_m7763 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1661* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
