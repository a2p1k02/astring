#include <stdio.h>
#include <stdlib.h>
#include "astring/astring.h"

main()
{
    astr str1 = astrcreate("Hello, ");

    astr str2 = astrcreate("World!");

    astrcat(&str1, &str2);

    printf("%s\n", str1.data);

    str1 = astrcreate("Hello, ");
    str2 = astrcreate("World");

    astrcat(&str1, &str2);
    printf("%s\n", str1.data);

    str1 = astrcreate("Hola, ");
    str2 = astrcreate("User!");

    astrncat(&str1, &str2, str1.length + str2.length);
    printf("%s\n", str1.data);
    
    astr str3 =  astrcreate("test");
    astrmult(&str3, 2);
    printf("%s\n", str3.data);

    return 0;
}
