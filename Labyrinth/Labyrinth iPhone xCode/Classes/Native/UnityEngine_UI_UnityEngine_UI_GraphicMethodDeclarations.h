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

// UnityEngine.UI.Graphic
struct Graphic_t130;
// UnityEngine.Material
struct Material_t131;
// UnityEngine.RectTransform
struct RectTransform_t114;
// UnityEngine.Canvas
struct Canvas_t16;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t132;
// UnityEngine.Texture
struct Texture_t186;
// UnityEngine.Mesh
struct Mesh_t136;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t285;
// UnityEngine.Camera
struct Camera_t88;
// UnityEngine.Events.UnityAction
struct UnityAction_t133;
// UnityEngine.Transform
struct Transform_t23;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C" void Graphic__ctor_m603 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
extern "C" void Graphic__cctor_m604 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
extern "C" Material_t131 * Graphic_get_defaultGraphicMaterial_m605 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
extern "C" Color_t95  Graphic_get_color_m606 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
extern "C" void Graphic_set_color_m607 (Graphic_t130 * __this, Color_t95  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::get_raycastTarget()
extern "C" bool Graphic_get_raycastTarget_m608 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean)
extern "C" void Graphic_set_raycastTarget_m609 (Graphic_t130 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
extern "C" void Graphic_SetAllDirty_m610 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
extern "C" void Graphic_SetLayoutDirty_m611 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
extern "C" void Graphic_SetVerticesDirty_m612 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
extern "C" void Graphic_SetMaterialDirty_m613 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
extern "C" void Graphic_OnRectTransformDimensionsChange_m614 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
extern "C" void Graphic_OnBeforeTransformParentChanged_m615 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
extern "C" void Graphic_OnTransformParentChanged_m616 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
extern "C" int32_t Graphic_get_depth_m617 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C" RectTransform_t114 * Graphic_get_rectTransform_m618 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
extern "C" Canvas_t16 * Graphic_get_canvas_m619 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
extern "C" void Graphic_CacheCanvas_m620 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C" CanvasRenderer_t132 * Graphic_get_canvasRenderer_m621 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
extern "C" Material_t131 * Graphic_get_defaultMaterial_m622 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
extern "C" Material_t131 * Graphic_get_material_m623 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
extern "C" void Graphic_set_material_m624 (Graphic_t130 * __this, Material_t131 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
extern "C" Material_t131 * Graphic_get_materialForRendering_m625 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
extern "C" Texture_t186 * Graphic_get_mainTexture_m626 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
extern "C" void Graphic_OnEnable_m627 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
extern "C" void Graphic_OnDisable_m628 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnCanvasHierarchyChanged()
extern "C" void Graphic_OnCanvasHierarchyChanged_m629 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Graphic_Rebuild_m630 (Graphic_t130 * __this, int32_t ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
extern "C" void Graphic_UpdateMaterial_m631 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
extern "C" void Graphic_UpdateGeometry_m632 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.UI.Graphic::get_workerMesh()
extern "C" Mesh_t136 * Graphic_get_workerMesh_m633 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_OnFillVBO_m634 (Graphic_t130 * __this, List_1_t285 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnPopulateMesh(UnityEngine.Mesh)
extern "C" void Graphic_OnPopulateMesh_m635 (Graphic_t130 * __this, Mesh_t136 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
extern "C" void Graphic_OnDidApplyAnimationProperties_m636 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
extern "C" void Graphic_SetNativeSize_m637 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Graphic_Raycast_m638 (Graphic_t130 * __this, Vector2_t70  ___sp, Camera_t88 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
extern "C" Vector2_t70  Graphic_PixelAdjustPoint_m639 (Graphic_t130 * __this, Vector2_t70  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
extern "C" Rect_t168  Graphic_GetPixelAdjustedRect_m640 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m641 (Graphic_t130 * __this, Color_t95  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m642 (Graphic_t130 * __this, Color_t95  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
extern "C" Color_t95  Graphic_CreateColorFromAlpha_m643 (Object_t * __this /* static, unused */, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C" void Graphic_CrossFadeAlpha_m644 (Graphic_t130 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyLayoutCallback_m645 (Graphic_t130 * __this, UnityAction_t133 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyLayoutCallback_m646 (Graphic_t130 * __this, UnityAction_t133 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyVerticesCallback_m647 (Graphic_t130 * __this, UnityAction_t133 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyVerticesCallback_m648 (Graphic_t130 * __this, UnityAction_t133 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyMaterialCallback_m649 (Graphic_t130 * __this, UnityAction_t133 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyMaterialCallback_m650 (Graphic_t130 * __this, UnityAction_t133 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m651 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t23 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m652 (Graphic_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
