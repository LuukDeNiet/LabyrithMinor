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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1812;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1811;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t567;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2292;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t283;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2293;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t780;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1818;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11497_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11497(__this, method) (( void (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2__ctor_m11497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11499_gshared (Dictionary_2_t1812 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11499(__this, ___comparer, method) (( void (*) (Dictionary_2_t1812 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11499_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11501_gshared (Dictionary_2_t1812 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11501(__this, ___capacity, method) (( void (*) (Dictionary_2_t1812 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11501_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11503_gshared (Dictionary_2_t1812 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11503(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1812 *, SerializationInfo_t567 *, StreamingContext_t568 , const MethodInfo*))Dictionary_2__ctor_m11503_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11505_gshared (Dictionary_2_t1812 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11505(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1812 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11505_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11507_gshared (Dictionary_2_t1812 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11507(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1812 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11507_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11509_gshared (Dictionary_2_t1812 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11509(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1812 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11509_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11511_gshared (Dictionary_2_t1812 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11511(__this, ___key, method) (( bool (*) (Dictionary_2_t1812 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11511_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11513_gshared (Dictionary_2_t1812 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11513(__this, ___key, method) (( void (*) (Dictionary_2_t1812 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11513_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11515_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11515(__this, method) (( bool (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11515_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11517_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11517(__this, method) (( Object_t * (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11517_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11519_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11519(__this, method) (( bool (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11519_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11521_gshared (Dictionary_2_t1812 * __this, KeyValuePair_2_t1814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11521(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1812 *, KeyValuePair_2_t1814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11521_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11523_gshared (Dictionary_2_t1812 * __this, KeyValuePair_2_t1814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11523(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1812 *, KeyValuePair_2_t1814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11523_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11525_gshared (Dictionary_2_t1812 * __this, KeyValuePair_2U5BU5D_t2292* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11525(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1812 *, KeyValuePair_2U5BU5D_t2292*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11525_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11527_gshared (Dictionary_2_t1812 * __this, KeyValuePair_2_t1814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11527(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1812 *, KeyValuePair_2_t1814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11527_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11529_gshared (Dictionary_2_t1812 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11529(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1812 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11529_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11531_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11531(__this, method) (( Object_t * (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11531_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11533_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11533(__this, method) (( Object_t* (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11533_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11535_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11535(__this, method) (( Object_t * (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11535_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11537_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11537(__this, method) (( int32_t (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_get_Count_m11537_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11539_gshared (Dictionary_2_t1812 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11539(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1812 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11539_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11541_gshared (Dictionary_2_t1812 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11541(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1812 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11541_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11543_gshared (Dictionary_2_t1812 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11543(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1812 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11543_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11545_gshared (Dictionary_2_t1812 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11545(__this, ___size, method) (( void (*) (Dictionary_2_t1812 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11545_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11547_gshared (Dictionary_2_t1812 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11547(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1812 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11547_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1814  Dictionary_2_make_pair_m11549_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11549(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1814  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11549_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11551_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11551(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11551_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11553_gshared (Dictionary_2_t1812 * __this, KeyValuePair_2U5BU5D_t2292* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11553(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1812 *, KeyValuePair_2U5BU5D_t2292*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11553_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11555_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11555(__this, method) (( void (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_Resize_m11555_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11557_gshared (Dictionary_2_t1812 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11557(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1812 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11557_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11559_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11559(__this, method) (( void (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_Clear_m11559_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11561_gshared (Dictionary_2_t1812 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11561(__this, ___key, method) (( bool (*) (Dictionary_2_t1812 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11561_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11563_gshared (Dictionary_2_t1812 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11563(__this, ___value, method) (( bool (*) (Dictionary_2_t1812 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11563_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11565_gshared (Dictionary_2_t1812 * __this, SerializationInfo_t567 * ___info, StreamingContext_t568  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11565(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1812 *, SerializationInfo_t567 *, StreamingContext_t568 , const MethodInfo*))Dictionary_2_GetObjectData_m11565_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11567_gshared (Dictionary_2_t1812 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11567(__this, ___sender, method) (( void (*) (Dictionary_2_t1812 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11567_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11569_gshared (Dictionary_2_t1812 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11569(__this, ___key, method) (( bool (*) (Dictionary_2_t1812 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11569_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11571_gshared (Dictionary_2_t1812 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11571(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1812 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11571_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1818 * Dictionary_2_get_Values_m11572_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11572(__this, method) (( ValueCollection_t1818 * (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_get_Values_m11572_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11574_gshared (Dictionary_2_t1812 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11574(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1812 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11574_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11576_gshared (Dictionary_2_t1812 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11576(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1812 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11576_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11578_gshared (Dictionary_2_t1812 * __this, KeyValuePair_2_t1814  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11578(__this, ___pair, method) (( bool (*) (Dictionary_2_t1812 *, KeyValuePair_2_t1814 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11578_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1820  Dictionary_2_GetEnumerator_m11579_gshared (Dictionary_2_t1812 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11579(__this, method) (( Enumerator_t1820  (*) (Dictionary_2_t1812 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11579_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t970  Dictionary_2_U3CCopyToU3Em__0_m11581_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11581(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t970  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11581_gshared)(__this /* static, unused */, ___key, ___value, method)
