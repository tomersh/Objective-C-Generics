Objective C Generics
====================

Objective C Generics is an effort to try to support basic generics in Objective C.

#Usage#

Copy `ObjectiveCGenerics.h` to your project.
When defining a new class use the `GENERICSABLE` macro.
```objectivec
#import "ObjectiveCGenerics.h"

GENERICSABLE(MyClass)

@interface MyClass : NSObject<MyClass>

@end
```
Now you can use generics with arrays and sets just as you normally do in Java, C#, etc.
![code](http://s22.postimg.org/hx8f1rlc1/Screen_Shot_2013_07_15_at_5_35_12_PM.png)

