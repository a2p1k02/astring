#include <stdio.h>
#include <stdlib.h>
#include "astring/astring.h"

main()
{
    astr str1;
    astrcreate(&str1, "Hello, ");

    astr str2;
    astrcreate(&str2, "World!");

    astrcat(&str1, &str2);

    printf("%s\n", str1.data);

    astrcreate(&str1, "Hello, ");
    astrcreate(&str2, "World");

    astrcat(&str1, &str2);
    printf("%s\n", str1.data);

    astrcreate(&str1, "Hola, ");
    astrcreate(&str2, "User!");

    astrncat(&str1, &str2, str1.length + str2.length);
    printf("%s\n", str1.data);

    return 0;
}
