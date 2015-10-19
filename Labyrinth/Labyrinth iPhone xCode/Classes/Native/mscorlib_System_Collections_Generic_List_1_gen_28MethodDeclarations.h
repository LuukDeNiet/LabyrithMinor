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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t479;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2335;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2336;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t283;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2337;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2102;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t563;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2106;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2109;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m15297_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1__ctor_m15297(__this, method) (( void (*) (List_1_t479 *, const MethodInfo*))List_1__ctor_m15297_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15298_gshared (List_1_t479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15298(__this, ___collection, method) (( void (*) (List_1_t479 *, Object_t*, const MethodInfo*))List_1__ctor_m15298_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3074_gshared (List_1_t479 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3074(__this, ___capacity, method) (( void (*) (List_1_t479 *, int32_t, const MethodInfo*))List_1__ctor_m3074_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15299_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15299(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15300_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15300(__this, method) (( Object_t* (*) (List_1_t479 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15300_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15301_gshared (List_1_t479 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15301(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t479 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15301_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15302_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15302(__this, method) (( Object_t * (*) (List_1_t479 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15302_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15303_gshared (List_1_t479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15303(__this, ___item, method) (( int32_t (*) (List_1_t479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15303_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15304_gshared (List_1_t479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15304(__this, ___item, method) (( bool (*) (List_1_t479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15304_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15305_gshared (List_1_t479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15305(__this, ___item, method) (( int32_t (*) (List_1_t479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15305_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15306_gshared (List_1_t479 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15306(__this, ___index, ___item, method) (( void (*) (List_1_t479 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15306_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15307_gshared (List_1_t479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15307(__this, ___item, method) (( void (*) (List_1_t479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15307_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15308_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15308(__this, method) (( bool (*) (List_1_t479 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15308_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15309_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15309(__this, method) (( bool (*) (List_1_t479 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15309_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15310_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15310(__this, method) (( Object_t * (*) (List_1_t479 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15310_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15311_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15311(__this, method) (( bool (*) (List_1_t479 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15311_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15312_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15312(__this, method) (( bool (*) (List_1_t479 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15312_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15313_gshared (List_1_t479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15313(__this, ___index, method) (( Object_t * (*) (List_1_t479 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15313_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15314_gshared (List_1_t479 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15314(__this, ___index, ___value, method) (( void (*) (List_1_t479 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15314_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m15315_gshared (List_1_t479 * __this, UICharInfo_t340  ___item, const MethodInfo* method);
#define List_1_Add_m15315(__this, ___item, method) (( void (*) (List_1_t479 *, UICharInfo_t340 , const MethodInfo*))List_1_Add_m15315_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15316_gshared (List_1_t479 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15316(__this, ___newCount, method) (( void (*) (List_1_t479 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15316_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15317_gshared (List_1_t479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15317(__this, ___collection, method) (( void (*) (List_1_t479 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15317_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15318_gshared (List_1_t479 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15318(__this, ___enumerable, method) (( void (*) (List_1_t479 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15318_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15319_gshared (List_1_t479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15319(__this, ___collection, method) (( void (*) (List_1_t479 *, Object_t*, const MethodInfo*))List_1_AddRange_m15319_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2102 * List_1_AsReadOnly_m15320_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15320(__this, method) (( ReadOnlyCollection_1_t2102 * (*) (List_1_t479 *, const MethodInfo*))List_1_AsReadOnly_m15320_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15321_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_Clear_m15321(__this, method) (( void (*) (List_1_t479 *, const MethodInfo*))List_1_Clear_m15321_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15322_gshared (List_1_t479 * __this, UICharInfo_t340  ___item, const MethodInfo* method);
#define List_1_Contains_m15322(__this, ___item, method) (( bool (*) (List_1_t479 *, UICharInfo_t340 , const MethodInfo*))List_1_Contains_m15322_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15323_gshared (List_1_t479 * __this, UICharInfoU5BU5D_t563* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15323(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t479 *, UICharInfoU5BU5D_t563*, int32_t, const MethodInfo*))List_1_CopyTo_m15323_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t340  List_1_Find_m15324_gshared (List_1_t479 * __this, Predicate_1_t2106 * ___match, const MethodInfo* method);
#define List_1_Find_m15324(__this, ___match, method) (( UICharInfo_t340  (*) (List_1_t479 *, Predicate_1_t2106 *, const MethodInfo*))List_1_Find_m15324_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15325_gshared (Object_t * __this /* static, unused */, Predicate_1_t2106 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15325(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2106 *, const MethodInfo*))List_1_CheckMatch_m15325_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15326_gshared (List_1_t479 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2106 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15326(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t479 *, int32_t, int32_t, Predicate_1_t2106 *, const MethodInfo*))List_1_GetIndex_m15326_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2101  List_1_GetEnumerator_m15327_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15327(__this, method) (( Enumerator_t2101  (*) (List_1_t479 *, const MethodInfo*))List_1_GetEnumerator_m15327_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15328_gshared (List_1_t479 * __this, UICharInfo_t340  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15328(__this, ___item, method) (( int32_t (*) (List_1_t479 *, UICharInfo_t340 , const MethodInfo*))List_1_IndexOf_m15328_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15329_gshared (List_1_t479 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15329(__this, ___start, ___delta, method) (( void (*) (List_1_t479 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15329_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15330_gshared (List_1_t479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15330(__this, ___index, method) (( void (*) (List_1_t479 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15330_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15331_gshared (List_1_t479 * __this, int32_t ___index, UICharInfo_t340  ___item, const MethodInfo* method);
#define List_1_Insert_m15331(__this, ___index, ___item, method) (( void (*) (List_1_t479 *, int32_t, UICharInfo_t340 , const MethodInfo*))List_1_Insert_m15331_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15332_gshared (List_1_t479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15332(__this, ___collection, method) (( void (*) (List_1_t479 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15332_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15333_gshared (List_1_t479 * __this, UICharInfo_t340  ___item, const MethodInfo* method);
#define List_1_Remove_m15333(__this, ___item, method) (( bool (*) (List_1_t479 *, UICharInfo_t340 , const MethodInfo*))List_1_Remove_m15333_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15334_gshared (List_1_t479 * __this, Predicate_1_t2106 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15334(__this, ___match, method) (( int32_t (*) (List_1_t479 *, Predicate_1_t2106 *, const MethodInfo*))List_1_RemoveAll_m15334_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15335_gshared (List_1_t479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15335(__this, ___index, method) (( void (*) (List_1_t479 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15335_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15336_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_Reverse_m15336(__this, method) (( void (*) (List_1_t479 *, const MethodInfo*))List_1_Reverse_m15336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15337_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_Sort_m15337(__this, method) (( void (*) (List_1_t479 *, const MethodInfo*))List_1_Sort_m15337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15338_gshared (List_1_t479 * __this, Comparison_1_t2109 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15338(__this, ___comparison, method) (( void (*) (List_1_t479 *, Comparison_1_t2109 *, const MethodInfo*))List_1_Sort_m15338_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t563* List_1_ToArray_m15339_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_ToArray_m15339(__this, method) (( UICharInfoU5BU5D_t563* (*) (List_1_t479 *, const MethodInfo*))List_1_ToArray_m15339_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15340_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15340(__this, method) (( void (*) (List_1_t479 *, const MethodInfo*))List_1_TrimExcess_m15340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15341_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15341(__this, method) (( int32_t (*) (List_1_t479 *, const MethodInfo*))List_1_get_Capacity_m15341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15342_gshared (List_1_t479 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15342(__this, ___value, method) (( void (*) (List_1_t479 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15342_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15343_gshared (List_1_t479 * __this, const MethodInfo* method);
#define List_1_get_Count_m15343(__this, method) (( int32_t (*) (List_1_t479 *, const MethodInfo*))List_1_get_Count_m15343_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t340  List_1_get_Item_m15344_gshared (List_1_t479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15344(__this, ___index, method) (( UICharInfo_t340  (*) (List_1_t479 *, int32_t, const MethodInfo*))List_1_get_Item_m15344_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15345_gshared (List_1_t479 * __this, int32_t ___index, UICharInfo_t340  ___value, const MethodInfo* method);
#define List_1_set_Item_m15345(__this, ___index, ___value, method) (( void (*) (List_1_t479 *, int32_t, UICharInfo_t340 , const MethodInfo*))List_1_set_Item_m15345_gshared)(__this, ___index, ___value, method)
