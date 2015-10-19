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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1839;
// System.Collections.IEnumerator
struct IEnumerator_t283;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1982;
// System.Object[]
struct ObjectU5BU5D_t298;
// System.Predicate`1<System.Object>
struct Predicate_1_t1732;
// System.Comparison`1<System.Object>
struct Comparison_1_t1738;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11842_gshared (IndexedSet_1_t1839 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11842(__this, method) (( void (*) (IndexedSet_1_t1839 *, const MethodInfo*))IndexedSet_1__ctor_m11842_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11844_gshared (IndexedSet_1_t1839 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11844(__this, method) (( Object_t * (*) (IndexedSet_1_t1839 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11844_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11846_gshared (IndexedSet_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11846(__this, ___item, method) (( void (*) (IndexedSet_1_t1839 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11846_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11848_gshared (IndexedSet_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11848(__this, ___item, method) (( bool (*) (IndexedSet_1_t1839 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11848_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11850_gshared (IndexedSet_1_t1839 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11850(__this, method) (( Object_t* (*) (IndexedSet_1_t1839 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11850_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11852_gshared (IndexedSet_1_t1839 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11852(__this, method) (( void (*) (IndexedSet_1_t1839 *, const MethodInfo*))IndexedSet_1_Clear_m11852_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11854_gshared (IndexedSet_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11854(__this, ___item, method) (( bool (*) (IndexedSet_1_t1839 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11854_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11856_gshared (IndexedSet_1_t1839 * __this, ObjectU5BU5D_t298* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11856(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1839 *, ObjectU5BU5D_t298*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11856_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11858_gshared (IndexedSet_1_t1839 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11858(__this, method) (( int32_t (*) (IndexedSet_1_t1839 *, const MethodInfo*))IndexedSet_1_get_Count_m11858_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11860_gshared (IndexedSet_1_t1839 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11860(__this, method) (( bool (*) (IndexedSet_1_t1839 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11860_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11862_gshared (IndexedSet_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11862(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1839 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11862_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11864_gshared (IndexedSet_1_t1839 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11864(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1839 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11864_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11866_gshared (IndexedSet_1_t1839 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11866(__this, ___index, method) (( void (*) (IndexedSet_1_t1839 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11866_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11868_gshared (IndexedSet_1_t1839 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11868(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1839 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11868_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11870_gshared (IndexedSet_1_t1839 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11870(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1839 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11870_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11871_gshared (IndexedSet_1_t1839 * __this, Predicate_1_t1732 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11871(__this, ___match, method) (( void (*) (IndexedSet_1_t1839 *, Predicate_1_t1732 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11871_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11872_gshared (IndexedSet_1_t1839 * __this, Comparison_1_t1738 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11872(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1839 *, Comparison_1_t1738 *, const MethodInfo*))IndexedSet_1_Sort_m11872_gshared)(__this, ___sortLayoutFunction, method)
