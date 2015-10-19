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

// BallScript
struct BallScript_t1;
// UnityEngine.Collision
struct Collision_t21;

#include "codegen/il2cpp-codegen.h"

// System.Void BallScript::.ctor()
extern "C" void BallScript__ctor_m0 (BallScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BallScript::Start()
extern "C" void BallScript_Start_m1 (BallScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BallScript::OnCollisionEnter(UnityEngine.Collision)
extern "C" void BallScript_OnCollisionEnter_m2 (BallScript_t1 * __this, Collision_t21 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BallScript::Reset()
extern "C" void BallScript_Reset_m3 (BallScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BallScript::NextLevel()
extern "C" void BallScript_NextLevel_m4 (BallScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
