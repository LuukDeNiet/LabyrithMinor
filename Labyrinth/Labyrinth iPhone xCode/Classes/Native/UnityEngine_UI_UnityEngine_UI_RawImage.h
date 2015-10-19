#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t186;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.UI.RawImage
struct  RawImage_t185  : public MaskableGraphic_t150
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t186 * ___m_Texture_26;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t168  ___m_UVRect_27;
};
