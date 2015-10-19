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

// System.Diagnostics.StackFrame
struct StackFrame_t588;
// System.Reflection.MethodBase
struct MethodBase_t589;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.StackFrame::.ctor()
extern "C" void StackFrame__ctor_m6894 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
extern "C" void StackFrame__ctor_m6895 (StackFrame_t588 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
extern "C" bool StackFrame_get_frame_info_m6896 (Object_t * __this /* static, unused */, int32_t ___skip, bool ___needFileInfo, MethodBase_t589 ** ___method, int32_t* ___iloffset, int32_t* ___native_offset, String_t** ___file, int32_t* ___line, int32_t* ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
extern "C" int32_t StackFrame_GetFileLineNumber_m6897 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
extern "C" String_t* StackFrame_GetFileName_m6898 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
extern "C" String_t* StackFrame_GetSecureFileName_m6899 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
extern "C" int32_t StackFrame_GetILOffset_m6900 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
extern "C" MethodBase_t589 * StackFrame_GetMethod_m6901 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
extern "C" int32_t StackFrame_GetNativeOffset_m6902 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
extern "C" String_t* StackFrame_GetInternalMethodName_m6903 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
extern "C" String_t* StackFrame_ToString_m6904 (StackFrame_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
