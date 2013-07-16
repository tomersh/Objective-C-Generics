//Copyright 2013 Tomer Shiri generics@shiri.info
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.

#if NS_BLOCKS_AVAILABLE
#define GENERICSABLE(__className) \
GENERICSABLEWITHOUTBLOCKS(__className) \
GENERICSABLEWITHBLOCKS(__className)
#else
#define GENERICSABLE(__className) GENERICSABLEWITHOUTBLOCKS(__className)
#endif

#define GENERICSABLEWITHOUTBLOCKS(__className)\
@protocol __className <NSObject> \
@end \
@class __className;  \
typedef NSComparisonResult (^__className##Comparator)(__className* obj1, __className* obj2);  \
\
@interface NSEnumerator (__className##_NSEnumerator_Generics) <__className>  \
- (__className*)nextObject;  \
- (NSArray<__className>*)allObjects; \
@end  \
\
@interface NSArray (__className##_NSArray_Generics) <__className> \
\
- (__className*)objectAtIndex:(NSUInteger)index; \
- (NSArray<__className>*)arrayByAddingObject:(__className*)anObject; \
- (NSArray*)arrayByAddingObjectsFromArray:(NSArray<__className>*)otherArray; \
- (BOOL)containsObject:(__className*)anObject; \
- (__className*)firstObjectCommonWithArray:(NSArray<__className>*)otherArray; \
- (NSUInteger)indexOfObject:(__className*)anObject; \
- (NSUInteger)indexOfObject:(__className*)anObject inRange:(NSRange)range; \
- (NSUInteger)indexOfObjectIdenticalTo:(__className*)anObject; \
- (NSUInteger)indexOfObjectIdenticalTo:(__className*)anObject inRange:(NSRange)range; \
- (BOOL)isEqualToArray:(NSArray<__className>*)otherArray; \
- (__className*)lastObject; \
- (NSEnumerator<__className>*)objectEnumerator; \
- (NSEnumerator<__className>*)reverseObjectEnumerator; \
- (NSArray<__className>*)sortedArrayUsingFunction:(NSInteger (*)(__className*, __className*, void *))comparator context:(void *)context; \
- (NSArray<__className>*)sortedArrayUsingFunction:(NSInteger (*)(__className*, __className*, void *))comparator context:(void *)context hint:(NSData *)hint; \
- (NSArray<__className>*)sortedArrayUsingSelector:(SEL)comparator; \
- (NSArray<__className>*)subarrayWithRange:(NSRange)range; \
- (NSArray<__className>*)objectsAtIndexes:(NSIndexSet *)indexes; \
- (__className*)objectAtIndexedSubscript:(NSUInteger)idx NS_AVAILABLE(10_8, 6_0); \
\
+ (NSArray<__className>*)array; \
+ (NSArray<__className>*)arrayWithObject:(__className*)anObject; \
+ (NSArray<__className>*)arrayWithObjects:(const id [])objects count:(NSUInteger)cnt; \
+ (NSArray<__className>*)arrayWithObjects:(__className*)firstObj, ... NS_REQUIRES_NIL_TERMINATION; \
+ (NSArray<__className>*)arrayWithArray:(NSArray<__className>*)array; \
\
- (NSArray<__className>*)initWithObjects:(const id [])objects count:(NSUInteger)cnt; \
- (NSArray<__className>*)initWithObjects:(id)firstObj, ... NS_REQUIRES_NIL_TERMINATION; \
- (NSArray<__className>*)initWithArray:(NSArray *)array; \
- (NSArray<__className>*)initWithArray:(NSArray *)array copyItems:(BOOL)flag; \
\
+ (NSArray<__className>*)arrayWithContentsOfFile:(NSString *)path; \
+ (NSArray<__className>*)arrayWithContentsOfURL:(NSURL *)url; \
- (NSArray<__className>*)initWithContentsOfFile:(NSString *)path; \
- (NSArray<__className>*)initWithContentsOfURL:(NSURL *)url; \
\
@end \
\
@interface NSMutableArray (__className##_NSMutableArray_Generics) <__className> \
\
- (void)addObjectsFromArray:(NSArray<__className>*)otherArray; \
- (void)removeObject:(__className*)anObject inRange:(NSRange)range; \
- (void)removeObject:(__className*)anObject; \
- (void)removeObjectIdenticalTo:(__className*)anObject inRange:(NSRange)range; \
- (void)removeObjectIdenticalTo:(__className*)anObject; \
- (void)removeObjectsInArray:(NSArray<__className>*)otherArray; \
\
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(NSArray<__className>*)otherArray range:(NSRange)otherRange; \
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(NSArray<__className>*)otherArray; \
- (void)setArray:(NSArray<__className>*)otherArray; \
- (void)sortUsingFunction:(NSInteger (*)(__className*, __className*, void *))compare context:(void *)context; \
\
- (void)insertObjects:(NSArray<__className>*)objects atIndexes:(NSIndexSet *)indexes; \
- (void)removeObjectsAtIndexes:(NSIndexSet *)indexes; \
- (void)replaceObjectsAtIndexes:(NSIndexSet *)indexes withObjects:(NSArray<__className>*)objects; \
\
- (void)setObject:(__className*)obj atIndexedSubscript:(NSUInteger)idx NS_AVAILABLE(10_8, 6_0); \
\
+ (NSMutableArray<__className>*)array; \
+ (NSMutableArray<__className>*)arrayWithObject:(__className*)anObject; \
+ (NSMutableArray<__className>*)arrayWithObjects:(const id [])objects count:(NSUInteger)cnt; \
+ (NSMutableArray<__className>*)arrayWithObjects:(__className*)firstObj, ... NS_REQUIRES_NIL_TERMINATION; \
+ (NSMutableArray<__className>*)arrayWithArray:(NSArray<__className>*)array; \
\
- (NSMutableArray<__className>*)initWithObjects:(const id [])objects count:(NSUInteger)cnt; \
- (NSMutableArray<__className>*)initWithObjects:(id)firstObj, ... NS_REQUIRES_NIL_TERMINATION; \
- (NSMutableArray<__className>*)initWithArray:(NSArray *)array; \
- (NSMutableArray<__className>*)initWithArray:(NSArray *)array copyItems:(BOOL)flag; \
\
+ (NSMutableArray<__className>*)arrayWithContentsOfFile:(NSString *)path; \
+ (NSMutableArray<__className>*)arrayWithContentsOfURL:(NSURL *)url; \
- (NSMutableArray<__className>*)initWithContentsOfFile:(NSString *)path; \
- (NSMutableArray<__className>*)initWithContentsOfURL:(NSURL *)url; \
\
@end \
\
@interface NSSet (__className##_NSSet_Generics) <__className> \
\
- (__className*)member:(__className*)object; \
- (NSEnumerator<__className>*)objectEnumerator; \
\
- (NSArray<__className>*)allObjects; \
- (__className*)anyObject; \
- (BOOL)containsObject:(__className*)anObject; \
- (BOOL)intersectsSet:(NSSet<__className>*)otherSet; \
- (BOOL)isEqualToSet:(NSSet<__className>*)otherSet; \
- (BOOL)isSubsetOfSet:(NSSet<__className>*)otherSet; \
\
- (NSSet<__className>*)setByAddingObject:(__className*)anObject NS_AVAILABLE(10_5, 2_0); \
- (NSSet<__className>*)setByAddingObjectsFromSet:(NSSet<__className>*)other NS_AVAILABLE(10_5, 2_0); \
- (NSSet<__className>*)setByAddingObjectsFromArray:(NSArray *)other NS_AVAILABLE(10_5, 2_0); \
\
+ (NSSet<__className>*)set; \
+ (NSSet<__className>*)setWithObject:(__className*)object; \
+ (NSSet<__className>*)setWithObjects:(const id [])objects count:(NSUInteger)cnt; \
+ (NSSet<__className>*)setWithObjects:(__className*)firstObj, ... NS_REQUIRES_NIL_TERMINATION; \
+ (NSSet<__className>*)setWithSet:(NSSet<__className>*)set; \
+ (NSSet<__className>*)setWithArray:(NSArray<__className>*)array; \
\
- (NSSet<__className>*)initWithObjects:(const id [])objects count:(NSUInteger)cnt; \
- (NSSet<__className>*)initWithObjects:(__className*)firstObj, ... NS_REQUIRES_NIL_TERMINATION; \
- (NSSet<__className>*)initWithSet:(NSSet<__className>*)set; \
- (NSSet<__className>*)initWithSet:(NSSet<__className>*)set copyItems:(BOOL)flag; \
- (NSSet<__className>*)initWithArray:(NSArray<__className>*)array; \
\
@end \
\
@interface NSMutableSet (__className##_NSMutableSet_Generics) <__className> \
\
- (void)addObject:(__className*)object; \
- (void)removeObject:(__className*)object; \
- (void)addObjectsFromArray:(NSArray<__className>*)array; \
- (void)intersectSet:(NSSet<__className>*)otherSet; \
- (void)minusSet:(NSSet<__className>*)otherSet; \
- (void)unionSet:(NSSet<__className>*)otherSet; \
\
- (void)setSet:(NSSet<__className>*)otherSet; \
+ (NSSet<__className>*)setWithCapacity:(NSUInteger)numItems; \
- (NSSet<__className>*)initWithCapacity:(NSUInteger)numItems; \
\
@end \
\
@interface NSCountedSet (__className##_NSCountedSet_Generics) <__className> \
\
- (NSSet<__className>*)initWithCapacity:(NSUInteger)numItems;  \
- (NSSet<__className>*)initWithArray:(NSArray<__className>*)array; \
- (NSSet<__className>*)initWithSet:(NSSet<__className>*)set; \
- (NSUInteger)countForObject:(__className*)object; \
- (NSEnumerator<__className>*)objectEnumerator; \
- (void)addObject:(__className*)object; \
- (void)removeObject:(__className*)object; \
\
@end \

#if NS_BLOCKS_AVAILABLE

#define GENERICSABLEWITHBLOCKS(__className) \
\
@interface NSMutableArray (__className##_NSMutableArray_BLOCKS_Generics) <__className> \
- (void)sortUsingComparator:(__className##Comparator)cmptr NS_AVAILABLE(10_6, 4_0); \
- (void)sortWithOptions:(NSSortOptions)opts usingComparator:(__className##Comparator)cmptr NS_AVAILABLE(10_6, 4_0); \
@end \
@interface NSSet (__className##_NSSet_BLOCKS_Generics) <__className> \
- (void)enumerateObjectsUsingBlock:(void (^)(__className* obj, BOOL *stop))block NS_AVAILABLE(10_6, 4_0); \
- (void)enumerateObjectsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(__className* obj, BOOL *stop))block NS_AVAILABLE(10_6, 4_0); \
- (NSSet<__className>*)objectsPassingTest:(BOOL (^)(__className* obj, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0); \
- (NSSet<__className>*)objectsWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(__className* obj, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0); \
@end \

#endif
