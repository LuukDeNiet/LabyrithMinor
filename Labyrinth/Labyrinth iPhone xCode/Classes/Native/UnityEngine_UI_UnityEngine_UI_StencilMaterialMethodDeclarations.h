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

// UnityEngine.Material
struct Material_t131;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rendering_StencilOp.h"
#include "UnityEngine_UnityEngine_Rendering_CompareFunction.h"
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMask.h"

// System.Void UnityEngine.UI.StencilMaterial::.cctor()
extern "C" void StencilMaterial__cctor_m1182 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32)
extern "C" Material_t131 * StencilMaterial_Add_m1183 (Object_t * __this /* static, unused */, Material_t131 * ___baseMat, int32_t ___stencilID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.ColorWriteMask)
extern "C" Material_t131 * StencilMaterial_Add_m1184 (Object_t * __this /* static, unused */, Material_t131 * ___baseMat, int32_t ___stencilID, int32_t ___operation, int32_t ___compareFunction, int32_t ___colorWriteMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.ColorWriteMask,System.Int32,System.Int32)
extern "C" Material_t131 * StencilMaterial_Add_m1185 (Object_t * __this /* static, unused */, Material_t131 * ___baseMat, int32_t ___stencilID, int32_t ___operation, int32_t ___compareFunction, int32_t ___colorWriteMask, int32_t ___readMask, int32_t ___writeMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::Remove(UnityEngine.Material)
extern "C" void StencilMaterial_Remove_m1186 (Object_t * __this /* static, unused */, Material_t131 * ___customMat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::ClearAll()
extern "C" void StencilMaterial_ClearAll_m1187 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
