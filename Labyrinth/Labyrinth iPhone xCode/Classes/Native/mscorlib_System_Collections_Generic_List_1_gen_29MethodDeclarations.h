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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t480;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2338;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2339;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t283;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t342;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2111;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t564;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2115;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2118;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15441_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1__ctor_m15441(__this, method) (( void (*) (List_1_t480 *, const MethodInfo*))List_1__ctor_m15441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15442_gshared (List_1_t480 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15442(__this, ___collection, method) (( void (*) (List_1_t480 *, Object_t*, const MethodInfo*))List_1__ctor_m15442_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3075_gshared (List_1_t480 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3075(__this, ___capacity, method) (( void (*) (List_1_t480 *, int32_t, const MethodInfo*))List_1__ctor_m3075_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15443_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15443(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15443_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15444_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15444(__this, method) (( Object_t* (*) (List_1_t480 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15445_gshared (List_1_t480 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15445(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t480 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15445_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15446_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15446(__this, method) (( Object_t * (*) (List_1_t480 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15446_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15447_gshared (List_1_t480 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15447(__this, ___item, method) (( int32_t (*) (List_1_t480 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15447_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15448_gshared (List_1_t480 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15448(__this, ___item, method) (( bool (*) (List_1_t480 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15448_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15449_gshared (List_1_t480 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15449(__this, ___item, method) (( int32_t (*) (List_1_t480 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15449_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15450_gshared (List_1_t480 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15450(__this, ___index, ___item, method) (( void (*) (List_1_t480 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15450_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15451_gshared (List_1_t480 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15451(__this, ___item, method) (( void (*) (List_1_t480 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15451_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15452_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15452(__this, method) (( bool (*) (List_1_t480 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15452_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15453_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15453(__this, method) (( bool (*) (List_1_t480 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15453_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15454_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15454(__this, method) (( Object_t * (*) (List_1_t480 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15454_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15455_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15455(__this, method) (( bool (*) (List_1_t480 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15455_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15456_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15456(__this, method) (( bool (*) (List_1_t480 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15457_gshared (List_1_t480 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15457(__this, ___index, method) (( Object_t * (*) (List_1_t480 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15457_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15458_gshared (List_1_t480 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15458(__this, ___index, ___value, method) (( void (*) (List_1_t480 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15458_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15459_gshared (List_1_t480 * __this, UILineInfo_t338  ___item, const MethodInfo* method);
#define List_1_Add_m15459(__this, ___item, method) (( void (*) (List_1_t480 *, UILineInfo_t338 , const MethodInfo*))List_1_Add_m15459_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15460_gshared (List_1_t480 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15460(__this, ___newCount, method) (( void (*) (List_1_t480 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15460_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15461_gshared (List_1_t480 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15461(__this, ___collection, method) (( void (*) (List_1_t480 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15461_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15462_gshared (List_1_t480 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15462(__this, ___enumerable, method) (( void (*) (List_1_t480 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15462_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15463_gshared (List_1_t480 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15463(__this, ___collection, method) (( void (*) (List_1_t480 *, Object_t*, const MethodInfo*))List_1_AddRange_m15463_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2111 * List_1_AsReadOnly_m15464_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15464(__this, method) (( ReadOnlyCollection_1_t2111 * (*) (List_1_t480 *, const MethodInfo*))List_1_AsReadOnly_m15464_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15465_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_Clear_m15465(__this, method) (( void (*) (List_1_t480 *, const MethodInfo*))List_1_Clear_m15465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15466_gshared (List_1_t480 * __this, UILineInfo_t338  ___item, const MethodInfo* method);
#define List_1_Contains_m15466(__this, ___item, method) (( bool (*) (List_1_t480 *, UILineInfo_t338 , const MethodInfo*))List_1_Contains_m15466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15467_gshared (List_1_t480 * __this, UILineInfoU5BU5D_t564* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15467(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t480 *, UILineInfoU5BU5D_t564*, int32_t, const MethodInfo*))List_1_CopyTo_m15467_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t338  List_1_Find_m15468_gshared (List_1_t480 * __this, Predicate_1_t2115 * ___match, const MethodInfo* method);
#define List_1_Find_m15468(__this, ___match, method) (( UILineInfo_t338  (*) (List_1_t480 *, Predicate_1_t2115 *, const MethodInfo*))List_1_Find_m15468_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15469_gshared (Object_t * __this /* static, unused */, Predicate_1_t2115 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15469(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2115 *, const MethodInfo*))List_1_CheckMatch_m15469_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15470_gshared (List_1_t480 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2115 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15470(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t480 *, int32_t, int32_t, Predicate_1_t2115 *, const MethodInfo*))List_1_GetIndex_m15470_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2110  List_1_GetEnumerator_m15471_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15471(__this, method) (( Enumerator_t2110  (*) (List_1_t480 *, const MethodInfo*))List_1_GetEnumerator_m15471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15472_gshared (List_1_t480 * __this, UILineInfo_t338  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15472(__this, ___item, method) (( int32_t (*) (List_1_t480 *, UILineInfo_t338 , const MethodInfo*))List_1_IndexOf_m15472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15473_gshared (List_1_t480 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15473(__this, ___start, ___delta, method) (( void (*) (List_1_t480 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15473_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15474_gshared (List_1_t480 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15474(__this, ___index, method) (( void (*) (List_1_t480 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15474_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15475_gshared (List_1_t480 * __this, int32_t ___index, UILineInfo_t338  ___item, const MethodInfo* method);
#define List_1_Insert_m15475(__this, ___index, ___item, method) (( void (*) (List_1_t480 *, int32_t, UILineInfo_t338 , const MethodInfo*))List_1_Insert_m15475_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15476_gshared (List_1_t480 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15476(__this, ___collection, method) (( void (*) (List_1_t480 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15476_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15477_gshared (List_1_t480 * __this, UILineInfo_t338  ___item, const MethodInfo* method);
#define List_1_Remove_m15477(__this, ___item, method) (( bool (*) (List_1_t480 *, UILineInfo_t338 , const MethodInfo*))List_1_Remove_m15477_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15478_gshared (List_1_t480 * __this, Predicate_1_t2115 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15478(__this, ___match, method) (( int32_t (*) (List_1_t480 *, Predicate_1_t2115 *, const MethodInfo*))List_1_RemoveAll_m15478_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15479_gshared (List_1_t480 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15479(__this, ___index, method) (( void (*) (List_1_t480 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15479_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15480_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_Reverse_m15480(__this, method) (( void (*) (List_1_t480 *, const MethodInfo*))List_1_Reverse_m15480_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15481_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_Sort_m15481(__this, method) (( void (*) (List_1_t480 *, const MethodInfo*))List_1_Sort_m15481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15482_gshared (List_1_t480 * __this, Comparison_1_t2118 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15482(__this, ___comparison, method) (( void (*) (List_1_t480 *, Comparison_1_t2118 *, const MethodInfo*))List_1_Sort_m15482_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t564* List_1_ToArray_m15483_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_ToArray_m15483(__this, method) (( UILineInfoU5BU5D_t564* (*) (List_1_t480 *, const MethodInfo*))List_1_ToArray_m15483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15484_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15484(__this, method) (( void (*) (List_1_t480 *, const MethodInfo*))List_1_TrimExcess_m15484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15485_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15485(__this, method) (( int32_t (*) (List_1_t480 *, const MethodInfo*))List_1_get_Capacity_m15485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15486_gshared (List_1_t480 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15486(__this, ___value, method) (( void (*) (List_1_t480 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15486_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15487_gshared (List_1_t480 * __this, const MethodInfo* method);
#define List_1_get_Count_m15487(__this, method) (( int32_t (*) (List_1_t480 *, const MethodInfo*))List_1_get_Count_m15487_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t338  List_1_get_Item_m15488_gshared (List_1_t480 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15488(__this, ___index, method) (( UILineInfo_t338  (*) (List_1_t480 *, int32_t, const MethodInfo*))List_1_get_Item_m15488_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15489_gshared (List_1_t480 * __this, int32_t ___index, UILineInfo_t338  ___value, const MethodInfo* method);
#define List_1_set_Item_m15489(__this, ___index, ___value, method) (( void (*) (List_1_t480 *, int32_t, UILineInfo_t338 , const MethodInfo*))List_1_set_Item_m15489_gshared)(__this, ___index, ___value, method)
