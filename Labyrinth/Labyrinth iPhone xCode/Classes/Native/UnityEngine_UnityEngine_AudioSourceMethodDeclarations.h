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

// UnityEngine.AudioSource
struct AudioSource_t28;
// UnityEngine.AudioClip
struct AudioClip_t13;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m2666 (AudioSource_t28 * __this, AudioClip_t13 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m112 (AudioSource_t28 * __this, AudioClip_t13 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
