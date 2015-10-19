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
// UnityEngine.AudioClip
struct AudioClip_t13;
// UnityEngine.Rigidbody
struct Rigidbody_t7;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// VeerScript
struct  VeerScript_t12  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject VeerScript::ball
	GameObject_t5 * ___ball_2;
	// UnityEngine.AudioClip VeerScript::boing
	AudioClip_t13 * ___boing_3;
	// UnityEngine.Rigidbody VeerScript::rb
	Rigidbody_t7 * ___rb_4;
};
