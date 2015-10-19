#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// BallScript
struct  BallScript_t1  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 BallScript::start_position_ball
	Vector3_t3  ___start_position_ball_2;
	// UnityEngine.Quaternion BallScript::start_rotation_level
	Quaternion_t4  ___start_rotation_level_3;
	// UnityEngine.GameObject BallScript::level
	GameObject_t5 * ___level_4;
};
