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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t718;
// System.AsyncCallback
struct AsyncCallback_t164;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t609;
// System.IO.Stream
struct Stream_t720;
// System.Exception
struct Exception_t302;
// System.Threading.WaitHandle
struct WaitHandle_t772;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3753 (ReceiveRecordAsyncResult_t718 * __this, AsyncCallback_t164 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t609* ___initialBuffer, Stream_t720 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t720 * ReceiveRecordAsyncResult_get_Record_m3754 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t609* ReceiveRecordAsyncResult_get_ResultingBuffer_m3755 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t609* ReceiveRecordAsyncResult_get_InitialBuffer_m3756 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3757 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t302 * ReceiveRecordAsyncResult_get_AsyncException_m3758 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3759 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t772 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3760 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3761 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3762 (ReceiveRecordAsyncResult_t718 * __this, Exception_t302 * ___ex, ByteU5BU5D_t609* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3763 (ReceiveRecordAsyncResult_t718 * __this, Exception_t302 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3764 (ReceiveRecordAsyncResult_t718 * __this, ByteU5BU5D_t609* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
