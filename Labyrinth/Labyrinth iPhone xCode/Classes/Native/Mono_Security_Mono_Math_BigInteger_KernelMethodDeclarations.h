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

// Mono.Math.BigInteger
struct BigInteger_t633;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t769;
// System.UInt32[]
struct UInt32U5BU5D_t615;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t633 * Kernel_AddSameSign_m3203 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi1, BigInteger_t633 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t633 * Kernel_Subtract_m3204 (Object_t * __this /* static, unused */, BigInteger_t633 * ___big, BigInteger_t633 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m3205 (Object_t * __this /* static, unused */, BigInteger_t633 * ___big, BigInteger_t633 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m3206 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi1, BigInteger_t633 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m3207 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi1, BigInteger_t633 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m3208 (Object_t * __this /* static, unused */, BigInteger_t633 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m3209 (Object_t * __this /* static, unused */, BigInteger_t633 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t769* Kernel_DwordDivMod_m3210 (Object_t * __this /* static, unused */, BigInteger_t633 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t769* Kernel_multiByteDivide_m3211 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi1, BigInteger_t633 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t633 * Kernel_LeftShift_m3212 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t633 * Kernel_RightShift_m3213 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m3214 (Object_t * __this /* static, unused */, UInt32U5BU5D_t615* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t615* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t615* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m3215 (Object_t * __this /* static, unused */, UInt32U5BU5D_t615* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t615* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t615* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m3216 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t633 * Kernel_modInverse_m3217 (Object_t * __this /* static, unused */, BigInteger_t633 * ___bi, BigInteger_t633 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
