# astring
### Simple string from C.

This is a my version system string instead of default string in C++.
C styled string is rule!

## Features:
- Concatenate string by ```astrcat``` and ```astrncat``` functions
- Length of string by ```astrlen``` function
- Free string by ```astrlen```
- Create string by ```astrcreate```
- Multiply string by ```astrmulti```

# Quick Start

### Copy this in top in your file:

```c
#include "astring/astring.h"
```
# Examples

### String create: 
```c
astr str1;
astrcreate(&str1, "Hello, ");

astr str2;
astrcreate(&str2, "World!");
```

### String concatenate:
```c
astrcat(&str1, &str2);
printf("%s\n", str1.data); /*Output: Hello, World!*/
```
### Another concatenate: 

```c
astrncat(&str1, &str2, str1.length + str2.length);
```

### String multiply:
```c
astr str3;
astrcreate(&str3, "test");
astrmult(&str3, 2);
printf("%s\n", str3.data); /*Output: testtest*/

```
