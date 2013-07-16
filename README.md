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
![code](http://s17.postimg.org/72yxa3v73/splash.png)

