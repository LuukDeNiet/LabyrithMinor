﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1840;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1842;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t567;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2294;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t283;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2295;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t780;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11873_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11873(__this, method) (( void (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2__ctor_m11873_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11874_gshared (Dictionary_2_t1840 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11874(__this, ___comparer, method) (( void (*) (Dictionary_2_t1840 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11874_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11875_gshared (Dictionary_2_t1840 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11875(__this, ___capacity, method) (( void (*) (Dictionary_2_t1840 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11876_gshared (Dictionary_2_t1840 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11876(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1840 *, SerializationInfo_t567 *, StreamingContext_t568 , const MethodInfo*))Dictionary_2__ctor_m11876_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11877_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11877(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11878_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11878(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1840 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11878_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11879_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11879(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1840 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11879_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11880_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11880(__this, ___key, method) (( bool (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11880_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11881_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11881(__this, ___key, method) (( void (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11881_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11882_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11882(__this, method) (( bool (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11882_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11883_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11883(__this, method) (( Object_t * (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11884_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11884(__this, method) (( bool (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11884_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11885_gshared (Dictionary_2_t1840 * __this, KeyValuePair_2_t1843  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11885(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1840 *, KeyValuePair_2_t1843 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11885_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11886_gshared (Dictionary_2_t1840 * __this, KeyValuePair_2_t1843  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11886(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1840 *, KeyValuePair_2_t1843 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11886_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11887_gshared (Dictionary_2_t1840 * __this, KeyValuePair_2U5BU5D_t2294* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11887(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1840 *, KeyValuePair_2U5BU5D_t2294*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11887_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11888_gshared (Dictionary_2_t1840 * __this, KeyValuePair_2_t1843  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11888(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1840 *, KeyValuePair_2_t1843 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11888_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11889_gshared (Dictionary_2_t1840 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11889(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1840 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11889_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11890_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11890(__this, method) (( Object_t * (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11890_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11891_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11891(__this, method) (( Object_t* (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11891_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11892_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11892(__this, method) (( Object_t * (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11892_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11893_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11893(__this, method) (( int32_t (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_get_Count_m11893_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11894_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11894(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11894_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11895_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11895(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1840 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11895_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11896_gshared (Dictionary_2_t1840 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11896(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1840 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11896_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11897_gshared (Dictionary_2_t1840 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11897(__this, ___size, method) (( void (*) (Dictionary_2_t1840 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11897_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11898_gshared (Dictionary_2_t1840 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11898(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1840 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11898_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1843  Dictionary_2_make_pair_m11899_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11899(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1843  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11899_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11900_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11900(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11900_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11901_gshared (Dictionary_2_t1840 * __this, KeyValuePair_2U5BU5D_t2294* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11901(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1840 *, KeyValuePair_2U5BU5D_t2294*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11901_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11902_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11902(__this, method) (( void (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_Resize_m11902_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11903_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11903(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1840 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11903_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11904_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11904(__this, method) (( void (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_Clear_m11904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11905_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11905(__this, ___key, method) (( bool (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11905_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11906_gshared (Dictionary_2_t1840 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11906(__this, ___value, method) (( bool (*) (Dictionary_2_t1840 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11906_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11907_gshared (Dictionary_2_t1840 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11907(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1840 *, SerializationInfo_t567 *, StreamingContext_t568 , const MethodInfo*))Dictionary_2_GetObjectData_m11907_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11908_gshared (Dictionary_2_t1840 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11908(__this, ___sender, method) (( void (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11908_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11909_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11909(__this, ___key, method) (( bool (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11909_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11910_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11910(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1840 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11910_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1845 * Dictionary_2_get_Values_m11911_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11911(__this, method) (( ValueCollection_t1845 * (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_get_Values_m11911_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11912_gshared (Dictionary_2_t1840 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11912(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11912_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11913_gshared (Dictionary_2_t1840 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11913(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1840 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11913_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11914_gshared (Dictionary_2_t1840 * __this, KeyValuePair_2_t1843  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11914(__this, ___pair, method) (( bool (*) (Dictionary_2_t1840 *, KeyValuePair_2_t1843 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11914_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1847  Dictionary_2_GetEnumerator_m11915_gshared (Dictionary_2_t1840 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11915(__this, method) (( Enumerator_t1847  (*) (Dictionary_2_t1840 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11915_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t970  Dictionary_2_U3CCopyToU3Em__0_m11916_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11916(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t970  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11916_gshared)(__this /* static, unused */, ___key, ___value, method)
