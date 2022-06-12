#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007A TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000083 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008C TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008E System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000008F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000092 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000093 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000094 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000095 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000096 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000097 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000098 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000099 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009A System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000009B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009C System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000009D System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000009E System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x0000009F System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000A0 System.Void System.Linq.Set`1::Resize()
// 0x000000A1 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000A2 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A3 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A4 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A5 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A6 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A7 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A8 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A9 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000AA TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000AB System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AC System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AD System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000AE System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AF System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000B0 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000B1 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B2 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B3 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B4 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B5 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B6 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B7 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B8 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000BE System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C1 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C2 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C3 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C4 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C5 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C8 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CC System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D0 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D1 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D2 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D4 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D5 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D6 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D7 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000000D8 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x000000D9 T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[217] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[217] = 
{
	7505,
	7505,
	7811,
	7811,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7395,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[70] = 
{
	{ 0x02000004, { 100, 4 } },
	{ 0x02000005, { 104, 9 } },
	{ 0x02000006, { 115, 7 } },
	{ 0x02000007, { 124, 10 } },
	{ 0x02000008, { 136, 11 } },
	{ 0x02000009, { 150, 9 } },
	{ 0x0200000A, { 162, 12 } },
	{ 0x0200000B, { 177, 1 } },
	{ 0x0200000C, { 178, 2 } },
	{ 0x0200000D, { 180, 12 } },
	{ 0x0200000E, { 192, 8 } },
	{ 0x0200000F, { 200, 11 } },
	{ 0x02000010, { 211, 12 } },
	{ 0x02000011, { 223, 12 } },
	{ 0x02000012, { 235, 6 } },
	{ 0x02000013, { 241, 6 } },
	{ 0x02000014, { 247, 2 } },
	{ 0x02000016, { 249, 8 } },
	{ 0x02000018, { 257, 3 } },
	{ 0x02000019, { 262, 5 } },
	{ 0x0200001A, { 267, 7 } },
	{ 0x0200001B, { 274, 3 } },
	{ 0x0200001C, { 277, 7 } },
	{ 0x0200001D, { 284, 4 } },
	{ 0x0200001E, { 288, 25 } },
	{ 0x02000020, { 313, 2 } },
	{ 0x02000021, { 315, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 2 } },
	{ 0x0600001A, { 58, 2 } },
	{ 0x0600001B, { 60, 2 } },
	{ 0x0600001C, { 62, 4 } },
	{ 0x0600001D, { 66, 4 } },
	{ 0x0600001E, { 70, 4 } },
	{ 0x0600001F, { 74, 3 } },
	{ 0x06000020, { 77, 3 } },
	{ 0x06000021, { 80, 1 } },
	{ 0x06000022, { 81, 1 } },
	{ 0x06000023, { 82, 3 } },
	{ 0x06000024, { 85, 3 } },
	{ 0x06000025, { 88, 2 } },
	{ 0x06000026, { 90, 2 } },
	{ 0x06000027, { 92, 5 } },
	{ 0x06000028, { 97, 3 } },
	{ 0x06000039, { 113, 2 } },
	{ 0x0600003E, { 122, 2 } },
	{ 0x06000043, { 134, 2 } },
	{ 0x06000049, { 147, 3 } },
	{ 0x0600004E, { 159, 3 } },
	{ 0x06000053, { 174, 3 } },
	{ 0x060000A5, { 260, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[317] = 
{
	{ (Il2CppRGCTXDataType)2, 7543 },
	{ (Il2CppRGCTXDataType)3, 28436 },
	{ (Il2CppRGCTXDataType)2, 11866 },
	{ (Il2CppRGCTXDataType)2, 11106 },
	{ (Il2CppRGCTXDataType)3, 49117 },
	{ (Il2CppRGCTXDataType)2, 8308 },
	{ (Il2CppRGCTXDataType)2, 11136 },
	{ (Il2CppRGCTXDataType)3, 49161 },
	{ (Il2CppRGCTXDataType)2, 11119 },
	{ (Il2CppRGCTXDataType)3, 49133 },
	{ (Il2CppRGCTXDataType)2, 7544 },
	{ (Il2CppRGCTXDataType)3, 28437 },
	{ (Il2CppRGCTXDataType)2, 11902 },
	{ (Il2CppRGCTXDataType)2, 11152 },
	{ (Il2CppRGCTXDataType)3, 49180 },
	{ (Il2CppRGCTXDataType)2, 8334 },
	{ (Il2CppRGCTXDataType)2, 11180 },
	{ (Il2CppRGCTXDataType)3, 49344 },
	{ (Il2CppRGCTXDataType)2, 11166 },
	{ (Il2CppRGCTXDataType)3, 49255 },
	{ (Il2CppRGCTXDataType)2, 1306 },
	{ (Il2CppRGCTXDataType)3, 210 },
	{ (Il2CppRGCTXDataType)3, 211 },
	{ (Il2CppRGCTXDataType)2, 4316 },
	{ (Il2CppRGCTXDataType)3, 17736 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)3, 224 },
	{ (Il2CppRGCTXDataType)3, 225 },
	{ (Il2CppRGCTXDataType)2, 4334 },
	{ (Il2CppRGCTXDataType)3, 17743 },
	{ (Il2CppRGCTXDataType)3, 54855 },
	{ (Il2CppRGCTXDataType)2, 1353 },
	{ (Il2CppRGCTXDataType)3, 435 },
	{ (Il2CppRGCTXDataType)3, 54862 },
	{ (Il2CppRGCTXDataType)2, 1361 },
	{ (Il2CppRGCTXDataType)3, 471 },
	{ (Il2CppRGCTXDataType)2, 9066 },
	{ (Il2CppRGCTXDataType)3, 38754 },
	{ (Il2CppRGCTXDataType)2, 9067 },
	{ (Il2CppRGCTXDataType)3, 38755 },
	{ (Il2CppRGCTXDataType)3, 23566 },
	{ (Il2CppRGCTXDataType)3, 54792 },
	{ (Il2CppRGCTXDataType)2, 1314 },
	{ (Il2CppRGCTXDataType)3, 287 },
	{ (Il2CppRGCTXDataType)3, 54901 },
	{ (Il2CppRGCTXDataType)2, 1365 },
	{ (Il2CppRGCTXDataType)3, 503 },
	{ (Il2CppRGCTXDataType)3, 54810 },
	{ (Il2CppRGCTXDataType)2, 1342 },
	{ (Il2CppRGCTXDataType)3, 393 },
	{ (Il2CppRGCTXDataType)2, 1783 },
	{ (Il2CppRGCTXDataType)3, 3346 },
	{ (Il2CppRGCTXDataType)3, 3347 },
	{ (Il2CppRGCTXDataType)2, 8309 },
	{ (Il2CppRGCTXDataType)3, 30806 },
	{ (Il2CppRGCTXDataType)3, 54817 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)3, 407 },
	{ (Il2CppRGCTXDataType)2, 4969 },
	{ (Il2CppRGCTXDataType)3, 54726 },
	{ (Il2CppRGCTXDataType)2, 1311 },
	{ (Il2CppRGCTXDataType)3, 273 },
	{ (Il2CppRGCTXDataType)2, 6545 },
	{ (Il2CppRGCTXDataType)2, 4714 },
	{ (Il2CppRGCTXDataType)2, 4986 },
	{ (Il2CppRGCTXDataType)2, 5331 },
	{ (Il2CppRGCTXDataType)2, 6546 },
	{ (Il2CppRGCTXDataType)2, 4715 },
	{ (Il2CppRGCTXDataType)2, 4987 },
	{ (Il2CppRGCTXDataType)2, 5332 },
	{ (Il2CppRGCTXDataType)2, 6547 },
	{ (Il2CppRGCTXDataType)2, 4716 },
	{ (Il2CppRGCTXDataType)2, 4988 },
	{ (Il2CppRGCTXDataType)2, 5333 },
	{ (Il2CppRGCTXDataType)2, 4989 },
	{ (Il2CppRGCTXDataType)2, 5334 },
	{ (Il2CppRGCTXDataType)3, 17737 },
	{ (Il2CppRGCTXDataType)2, 6544 },
	{ (Il2CppRGCTXDataType)2, 4985 },
	{ (Il2CppRGCTXDataType)2, 5330 },
	{ (Il2CppRGCTXDataType)2, 3011 },
	{ (Il2CppRGCTXDataType)2, 4965 },
	{ (Il2CppRGCTXDataType)2, 4966 },
	{ (Il2CppRGCTXDataType)2, 5328 },
	{ (Il2CppRGCTXDataType)3, 17735 },
	{ (Il2CppRGCTXDataType)2, 4964 },
	{ (Il2CppRGCTXDataType)2, 5327 },
	{ (Il2CppRGCTXDataType)3, 17734 },
	{ (Il2CppRGCTXDataType)2, 4713 },
	{ (Il2CppRGCTXDataType)2, 4984 },
	{ (Il2CppRGCTXDataType)2, 4712 },
	{ (Il2CppRGCTXDataType)3, 54768 },
	{ (Il2CppRGCTXDataType)3, 16395 },
	{ (Il2CppRGCTXDataType)2, 4086 },
	{ (Il2CppRGCTXDataType)2, 4968 },
	{ (Il2CppRGCTXDataType)2, 5329 },
	{ (Il2CppRGCTXDataType)2, 5590 },
	{ (Il2CppRGCTXDataType)2, 5018 },
	{ (Il2CppRGCTXDataType)2, 5342 },
	{ (Il2CppRGCTXDataType)3, 18008 },
	{ (Il2CppRGCTXDataType)3, 28438 },
	{ (Il2CppRGCTXDataType)3, 28440 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)3, 28439 },
	{ (Il2CppRGCTXDataType)3, 28448 },
	{ (Il2CppRGCTXDataType)2, 7547 },
	{ (Il2CppRGCTXDataType)2, 11120 },
	{ (Il2CppRGCTXDataType)3, 49134 },
	{ (Il2CppRGCTXDataType)3, 28449 },
	{ (Il2CppRGCTXDataType)2, 5081 },
	{ (Il2CppRGCTXDataType)2, 5390 },
	{ (Il2CppRGCTXDataType)3, 17751 },
	{ (Il2CppRGCTXDataType)3, 54729 },
	{ (Il2CppRGCTXDataType)2, 11167 },
	{ (Il2CppRGCTXDataType)3, 49256 },
	{ (Il2CppRGCTXDataType)3, 28441 },
	{ (Il2CppRGCTXDataType)2, 7546 },
	{ (Il2CppRGCTXDataType)2, 11107 },
	{ (Il2CppRGCTXDataType)3, 49118 },
	{ (Il2CppRGCTXDataType)3, 17750 },
	{ (Il2CppRGCTXDataType)3, 28442 },
	{ (Il2CppRGCTXDataType)3, 54728 },
	{ (Il2CppRGCTXDataType)2, 11153 },
	{ (Il2CppRGCTXDataType)3, 49181 },
	{ (Il2CppRGCTXDataType)3, 28455 },
	{ (Il2CppRGCTXDataType)2, 7548 },
	{ (Il2CppRGCTXDataType)2, 11137 },
	{ (Il2CppRGCTXDataType)3, 49162 },
	{ (Il2CppRGCTXDataType)3, 30876 },
	{ (Il2CppRGCTXDataType)3, 14187 },
	{ (Il2CppRGCTXDataType)3, 17752 },
	{ (Il2CppRGCTXDataType)3, 14186 },
	{ (Il2CppRGCTXDataType)3, 28456 },
	{ (Il2CppRGCTXDataType)3, 54730 },
	{ (Il2CppRGCTXDataType)2, 11181 },
	{ (Il2CppRGCTXDataType)3, 49345 },
	{ (Il2CppRGCTXDataType)3, 28469 },
	{ (Il2CppRGCTXDataType)2, 7550 },
	{ (Il2CppRGCTXDataType)2, 11169 },
	{ (Il2CppRGCTXDataType)3, 49258 },
	{ (Il2CppRGCTXDataType)3, 28470 },
	{ (Il2CppRGCTXDataType)2, 5084 },
	{ (Il2CppRGCTXDataType)2, 5393 },
	{ (Il2CppRGCTXDataType)3, 17756 },
	{ (Il2CppRGCTXDataType)3, 17755 },
	{ (Il2CppRGCTXDataType)2, 11122 },
	{ (Il2CppRGCTXDataType)3, 49136 },
	{ (Il2CppRGCTXDataType)3, 54736 },
	{ (Il2CppRGCTXDataType)2, 11168 },
	{ (Il2CppRGCTXDataType)3, 49257 },
	{ (Il2CppRGCTXDataType)3, 28462 },
	{ (Il2CppRGCTXDataType)2, 7549 },
	{ (Il2CppRGCTXDataType)2, 11155 },
	{ (Il2CppRGCTXDataType)3, 49183 },
	{ (Il2CppRGCTXDataType)3, 17754 },
	{ (Il2CppRGCTXDataType)3, 17753 },
	{ (Il2CppRGCTXDataType)3, 28463 },
	{ (Il2CppRGCTXDataType)2, 11121 },
	{ (Il2CppRGCTXDataType)3, 49135 },
	{ (Il2CppRGCTXDataType)3, 54735 },
	{ (Il2CppRGCTXDataType)2, 11154 },
	{ (Il2CppRGCTXDataType)3, 49182 },
	{ (Il2CppRGCTXDataType)3, 28476 },
	{ (Il2CppRGCTXDataType)2, 7551 },
	{ (Il2CppRGCTXDataType)2, 11183 },
	{ (Il2CppRGCTXDataType)3, 49347 },
	{ (Il2CppRGCTXDataType)3, 30877 },
	{ (Il2CppRGCTXDataType)3, 14189 },
	{ (Il2CppRGCTXDataType)3, 17758 },
	{ (Il2CppRGCTXDataType)3, 17757 },
	{ (Il2CppRGCTXDataType)3, 14188 },
	{ (Il2CppRGCTXDataType)3, 28477 },
	{ (Il2CppRGCTXDataType)2, 11123 },
	{ (Il2CppRGCTXDataType)3, 49137 },
	{ (Il2CppRGCTXDataType)3, 54737 },
	{ (Il2CppRGCTXDataType)2, 11182 },
	{ (Il2CppRGCTXDataType)3, 49346 },
	{ (Il2CppRGCTXDataType)3, 17747 },
	{ (Il2CppRGCTXDataType)3, 17748 },
	{ (Il2CppRGCTXDataType)3, 17762 },
	{ (Il2CppRGCTXDataType)3, 438 },
	{ (Il2CppRGCTXDataType)3, 437 },
	{ (Il2CppRGCTXDataType)2, 5070 },
	{ (Il2CppRGCTXDataType)2, 5382 },
	{ (Il2CppRGCTXDataType)3, 17749 },
	{ (Il2CppRGCTXDataType)2, 5112 },
	{ (Il2CppRGCTXDataType)2, 5425 },
	{ (Il2CppRGCTXDataType)3, 440 },
	{ (Il2CppRGCTXDataType)2, 1203 },
	{ (Il2CppRGCTXDataType)2, 1354 },
	{ (Il2CppRGCTXDataType)3, 436 },
	{ (Il2CppRGCTXDataType)3, 439 },
	{ (Il2CppRGCTXDataType)3, 473 },
	{ (Il2CppRGCTXDataType)2, 5073 },
	{ (Il2CppRGCTXDataType)2, 5384 },
	{ (Il2CppRGCTXDataType)3, 475 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)2, 1362 },
	{ (Il2CppRGCTXDataType)3, 472 },
	{ (Il2CppRGCTXDataType)3, 474 },
	{ (Il2CppRGCTXDataType)3, 289 },
	{ (Il2CppRGCTXDataType)2, 10272 },
	{ (Il2CppRGCTXDataType)3, 44861 },
	{ (Il2CppRGCTXDataType)2, 5063 },
	{ (Il2CppRGCTXDataType)2, 5377 },
	{ (Il2CppRGCTXDataType)3, 44862 },
	{ (Il2CppRGCTXDataType)3, 291 },
	{ (Il2CppRGCTXDataType)2, 934 },
	{ (Il2CppRGCTXDataType)2, 1315 },
	{ (Il2CppRGCTXDataType)3, 288 },
	{ (Il2CppRGCTXDataType)3, 290 },
	{ (Il2CppRGCTXDataType)3, 505 },
	{ (Il2CppRGCTXDataType)3, 506 },
	{ (Il2CppRGCTXDataType)2, 10276 },
	{ (Il2CppRGCTXDataType)3, 44866 },
	{ (Il2CppRGCTXDataType)2, 5076 },
	{ (Il2CppRGCTXDataType)2, 5386 },
	{ (Il2CppRGCTXDataType)3, 44867 },
	{ (Il2CppRGCTXDataType)3, 508 },
	{ (Il2CppRGCTXDataType)2, 943 },
	{ (Il2CppRGCTXDataType)2, 1366 },
	{ (Il2CppRGCTXDataType)3, 504 },
	{ (Il2CppRGCTXDataType)3, 507 },
	{ (Il2CppRGCTXDataType)3, 395 },
	{ (Il2CppRGCTXDataType)2, 10274 },
	{ (Il2CppRGCTXDataType)3, 44863 },
	{ (Il2CppRGCTXDataType)2, 5066 },
	{ (Il2CppRGCTXDataType)2, 5379 },
	{ (Il2CppRGCTXDataType)3, 44864 },
	{ (Il2CppRGCTXDataType)3, 44865 },
	{ (Il2CppRGCTXDataType)3, 397 },
	{ (Il2CppRGCTXDataType)2, 936 },
	{ (Il2CppRGCTXDataType)2, 1343 },
	{ (Il2CppRGCTXDataType)3, 394 },
	{ (Il2CppRGCTXDataType)3, 396 },
	{ (Il2CppRGCTXDataType)3, 409 },
	{ (Il2CppRGCTXDataType)2, 938 },
	{ (Il2CppRGCTXDataType)3, 411 },
	{ (Il2CppRGCTXDataType)2, 1346 },
	{ (Il2CppRGCTXDataType)3, 408 },
	{ (Il2CppRGCTXDataType)3, 410 },
	{ (Il2CppRGCTXDataType)3, 275 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)2, 1312 },
	{ (Il2CppRGCTXDataType)3, 274 },
	{ (Il2CppRGCTXDataType)3, 276 },
	{ (Il2CppRGCTXDataType)2, 11918 },
	{ (Il2CppRGCTXDataType)2, 3012 },
	{ (Il2CppRGCTXDataType)3, 16439 },
	{ (Il2CppRGCTXDataType)2, 4104 },
	{ (Il2CppRGCTXDataType)2, 12395 },
	{ (Il2CppRGCTXDataType)3, 44858 },
	{ (Il2CppRGCTXDataType)3, 44859 },
	{ (Il2CppRGCTXDataType)2, 5607 },
	{ (Il2CppRGCTXDataType)3, 44860 },
	{ (Il2CppRGCTXDataType)2, 837 },
	{ (Il2CppRGCTXDataType)2, 1319 },
	{ (Il2CppRGCTXDataType)3, 315 },
	{ (Il2CppRGCTXDataType)3, 38729 },
	{ (Il2CppRGCTXDataType)2, 9068 },
	{ (Il2CppRGCTXDataType)3, 38756 },
	{ (Il2CppRGCTXDataType)2, 1784 },
	{ (Il2CppRGCTXDataType)3, 3348 },
	{ (Il2CppRGCTXDataType)3, 38735 },
	{ (Il2CppRGCTXDataType)3, 14122 },
	{ (Il2CppRGCTXDataType)2, 982 },
	{ (Il2CppRGCTXDataType)3, 38730 },
	{ (Il2CppRGCTXDataType)2, 9063 },
	{ (Il2CppRGCTXDataType)3, 3856 },
	{ (Il2CppRGCTXDataType)2, 1828 },
	{ (Il2CppRGCTXDataType)2, 3216 },
	{ (Il2CppRGCTXDataType)3, 14140 },
	{ (Il2CppRGCTXDataType)3, 38731 },
	{ (Il2CppRGCTXDataType)3, 14117 },
	{ (Il2CppRGCTXDataType)3, 14118 },
	{ (Il2CppRGCTXDataType)3, 14116 },
	{ (Il2CppRGCTXDataType)3, 14119 },
	{ (Il2CppRGCTXDataType)2, 3212 },
	{ (Il2CppRGCTXDataType)2, 11988 },
	{ (Il2CppRGCTXDataType)3, 17745 },
	{ (Il2CppRGCTXDataType)3, 14121 },
	{ (Il2CppRGCTXDataType)2, 4886 },
	{ (Il2CppRGCTXDataType)3, 14120 },
	{ (Il2CppRGCTXDataType)2, 4722 },
	{ (Il2CppRGCTXDataType)2, 11911 },
	{ (Il2CppRGCTXDataType)2, 5021 },
	{ (Il2CppRGCTXDataType)2, 5344 },
	{ (Il2CppRGCTXDataType)3, 16418 },
	{ (Il2CppRGCTXDataType)2, 4097 },
	{ (Il2CppRGCTXDataType)3, 18896 },
	{ (Il2CppRGCTXDataType)3, 18897 },
	{ (Il2CppRGCTXDataType)3, 18902 },
	{ (Il2CppRGCTXDataType)2, 5601 },
	{ (Il2CppRGCTXDataType)3, 18899 },
	{ (Il2CppRGCTXDataType)3, 56008 },
	{ (Il2CppRGCTXDataType)2, 3222 },
	{ (Il2CppRGCTXDataType)3, 14174 },
	{ (Il2CppRGCTXDataType)1, 4877 },
	{ (Il2CppRGCTXDataType)2, 11924 },
	{ (Il2CppRGCTXDataType)3, 18898 },
	{ (Il2CppRGCTXDataType)1, 11924 },
	{ (Il2CppRGCTXDataType)1, 5601 },
	{ (Il2CppRGCTXDataType)2, 12393 },
	{ (Il2CppRGCTXDataType)2, 11924 },
	{ (Il2CppRGCTXDataType)2, 5027 },
	{ (Il2CppRGCTXDataType)2, 5348 },
	{ (Il2CppRGCTXDataType)3, 38803 },
	{ (Il2CppRGCTXDataType)3, 18903 },
	{ (Il2CppRGCTXDataType)3, 18904 },
	{ (Il2CppRGCTXDataType)3, 18901 },
	{ (Il2CppRGCTXDataType)3, 18900 },
	{ (Il2CppRGCTXDataType)2, 704 },
	{ (Il2CppRGCTXDataType)3, 14190 },
	{ (Il2CppRGCTXDataType)2, 956 },
	{ (Il2CppRGCTXDataType)2, 4731 },
	{ (Il2CppRGCTXDataType)2, 11926 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	217,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	70,
	s_rgctxIndices,
	317,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
