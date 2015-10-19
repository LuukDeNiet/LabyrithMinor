#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t7;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Canon_script
struct  Canon_script_t6  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 Canon_script::canon_position
	Vector3_t3  ___canon_position_2;
	// UnityEngine.Rigidbody Canon_script::bullit
	Rigidbody_t7 * ___bullit_3;
	// UnityEngine.Vector3 Canon_script::hoek
	Vector3_t3  ___hoek_4;
	// System.Single Canon_script::yhoek
	float ___yhoek_5;
};
