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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1728;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t283;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t298;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1982;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1727;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10496_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10496(__this, method) (( void (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1__ctor_m10496_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10497_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10497(__this, method) (( bool (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10497_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10498_gshared (Collection_1_t1728 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10498(__this, ___array, ___index, method) (( void (*) (Collection_1_t1728 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10498_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10499_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10499(__this, method) (( Object_t * (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10499_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10500_gshared (Collection_1_t1728 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10500(__this, ___value, method) (( int32_t (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10500_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10501_gshared (Collection_1_t1728 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10501(__this, ___value, method) (( bool (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10501_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10502_gshared (Collection_1_t1728 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10502(__this, ___value, method) (( int32_t (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10502_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10503_gshared (Collection_1_t1728 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10503(__this, ___index, ___value, method) (( void (*) (Collection_1_t1728 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10504_gshared (Collection_1_t1728 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10504(__this, ___value, method) (( void (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10504_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10505_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10505(__this, method) (( bool (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10505_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10506_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10506(__this, method) (( Object_t * (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10506_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10507_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10507(__this, method) (( bool (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10507_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10508_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10508(__this, method) (( bool (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10509_gshared (Collection_1_t1728 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10509(__this, ___index, method) (( Object_t * (*) (Collection_1_t1728 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10509_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10510_gshared (Collection_1_t1728 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10510(__this, ___index, ___value, method) (( void (*) (Collection_1_t1728 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10510_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10511_gshared (Collection_1_t1728 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10511(__this, ___item, method) (( void (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_Add_m10511_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10512_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10512(__this, method) (( void (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_Clear_m10512_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10513_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10513(__this, method) (( void (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_ClearItems_m10513_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10514_gshared (Collection_1_t1728 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10514(__this, ___item, method) (( bool (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10515_gshared (Collection_1_t1728 * __this, ObjectU5BU5D_t298* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10515(__this, ___array, ___index, method) (( void (*) (Collection_1_t1728 *, ObjectU5BU5D_t298*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10515_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10516_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10516(__this, method) (( Object_t* (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_GetEnumerator_m10516_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10517_gshared (Collection_1_t1728 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10517(__this, ___item, method) (( int32_t (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10518_gshared (Collection_1_t1728 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10518(__this, ___index, ___item, method) (( void (*) (Collection_1_t1728 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10519_gshared (Collection_1_t1728 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10519(__this, ___index, ___item, method) (( void (*) (Collection_1_t1728 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10519_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10520_gshared (Collection_1_t1728 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10520(__this, ___item, method) (( bool (*) (Collection_1_t1728 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10521_gshared (Collection_1_t1728 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10521(__this, ___index, method) (( void (*) (Collection_1_t1728 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10521_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10522_gshared (Collection_1_t1728 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10522(__this, ___index, method) (( void (*) (Collection_1_t1728 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10522_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10523_gshared (Collection_1_t1728 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10523(__this, method) (( int32_t (*) (Collection_1_t1728 *, const MethodInfo*))Collection_1_get_Count_m10523_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10524_gshared (Collection_1_t1728 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10524(__this, ___index, method) (( Object_t * (*) (Collection_1_t1728 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10524_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10525_gshared (Collection_1_t1728 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10525(__this, ___index, ___value, method) (( void (*) (Collection_1_t1728 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10525_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10526_gshared (Collection_1_t1728 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10526(__this, ___index, ___item, method) (( void (*) (Collection_1_t1728 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10526_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10527_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10527(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10527_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10528_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10528(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10528_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10529_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10529(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10529_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10530_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10530(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10530_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10531_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10531(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10531_gshared)(__this /* static, unused */, ___list, method)
