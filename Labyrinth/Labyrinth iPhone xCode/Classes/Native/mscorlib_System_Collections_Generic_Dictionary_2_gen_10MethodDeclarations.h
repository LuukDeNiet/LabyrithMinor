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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2163;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1842;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t567;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2341;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t283;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2342;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t780;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16007_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16007(__this, method) (( void (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2__ctor_m16007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16008_gshared (Dictionary_2_t2163 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16008(__this, ___comparer, method) (( void (*) (Dictionary_2_t2163 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16008_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16010_gshared (Dictionary_2_t2163 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16010(__this, ___capacity, method) (( void (*) (Dictionary_2_t2163 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16010_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16012_gshared (Dictionary_2_t2163 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16012(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2163 *, SerializationInfo_t567 *, StreamingContext_t568 , const MethodInfo*))Dictionary_2__ctor_m16012_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16014_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16014(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16014_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16016_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16018_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16018(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16018_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16020_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16020(__this, ___key, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16020_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16022_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16022(__this, ___key, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16022_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16024_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16024(__this, method) (( bool (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16026_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16026(__this, method) (( Object_t * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16028_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16028(__this, method) (( bool (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16028_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16030_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t2165  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16030(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2163 *, KeyValuePair_2_t2165 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16030_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16032_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t2165  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16032(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2163 *, KeyValuePair_2_t2165 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16032_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16034_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2U5BU5D_t2341* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16034(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, KeyValuePair_2U5BU5D_t2341*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16034_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16036_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t2165  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16036(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2163 *, KeyValuePair_2_t2165 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16036_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16038_gshared (Dictionary_2_t2163 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16038(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16038_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16040_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16040(__this, method) (( Object_t * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16040_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16042_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16042(__this, method) (( Object_t* (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16042_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16044_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16044(__this, method) (( Object_t * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16044_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16046_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16046(__this, method) (( int32_t (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_get_Count_m16046_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16048_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16048(__this, ___key, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16048_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16050_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16050(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16050_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16052_gshared (Dictionary_2_t2163 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16052(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2163 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16052_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16054_gshared (Dictionary_2_t2163 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16054(__this, ___size, method) (( void (*) (Dictionary_2_t2163 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16054_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16056_gshared (Dictionary_2_t2163 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16056(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16056_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2165  Dictionary_2_make_pair_m16058_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16058(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2165  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16058_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16060_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16060(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16060_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16062_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2U5BU5D_t2341* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16062(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, KeyValuePair_2U5BU5D_t2341*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16062_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16064_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16064(__this, method) (( void (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_Resize_m16064_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16066_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16066(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16066_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16068_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16068(__this, method) (( void (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_Clear_m16068_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16070_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16070(__this, ___key, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16070_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16072_gshared (Dictionary_2_t2163 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16072(__this, ___value, method) (( bool (*) (Dictionary_2_t2163 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16072_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16074_gshared (Dictionary_2_t2163 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16074(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2163 *, SerializationInfo_t567 *, StreamingContext_t568 , const MethodInfo*))Dictionary_2_GetObjectData_m16074_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16076_gshared (Dictionary_2_t2163 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16076(__this, ___sender, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16076_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16078_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16078(__this, ___key, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16078_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16080_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16080(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16080_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2168 * Dictionary_2_get_Values_m16082_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16082(__this, method) (( ValueCollection_t2168 * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_get_Values_m16082_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16084_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16084(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16084_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16086_gshared (Dictionary_2_t2163 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16086(__this, ___value, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16086_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16088_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t2165  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16088(__this, ___pair, method) (( bool (*) (Dictionary_2_t2163 *, KeyValuePair_2_t2165 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16088_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2170  Dictionary_2_GetEnumerator_m16090_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16090(__this, method) (( Enumerator_t2170  (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16090_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t970  Dictionary_2_U3CCopyToU3Em__0_m16092_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16092(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t970  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16092_gshared)(__this /* static, unused */, ___key, ___value, method)
