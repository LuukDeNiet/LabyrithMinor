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
// UnityEngine.UI.Text
struct Text_t11;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// NieuwRotatieScript
struct  NieuwRotatieScript_t10  : public MonoBehaviour_t2
{
	// System.Single NieuwRotatieScript::moveZ
	float ___moveZ_2;
	// System.Single NieuwRotatieScript::moveX
	float ___moveX_3;
	// System.Single NieuwRotatieScript::rotateZ
	float ___rotateZ_4;
	// System.Single NieuwRotatieScript::rotateX
	float ___rotateX_5;
	// UnityEngine.Vector3 NieuwRotatieScript::moveVector
	Vector3_t3  ___moveVector_6;
	// System.Single NieuwRotatieScript::moveSpeed
	float ___moveSpeed_7;
	// UnityEngine.Rigidbody NieuwRotatieScript::ball
	Rigidbody_t7 * ___ball_8;
	// UnityEngine.Rigidbody NieuwRotatieScript::gameCamera
	Rigidbody_t7 * ___gameCamera_9;
	// System.Single NieuwRotatieScript::inverse
	float ___inverse_10;
	// UnityEngine.UI.Text NieuwRotatieScript::scoreText
	Text_t11 * ___scoreText_11;
	// UnityEngine.UI.Text NieuwRotatieScript::highScoreText
	Text_t11 * ___highScoreText_12;
	// System.Int32 NieuwRotatieScript::Increaser
	int32_t ___Increaser_13;
	// System.Int32 NieuwRotatieScript::Highscore
	int32_t ___Highscore_14;
};
