#include <stdio.h>
#include <stdlib.h>
#include "astring/astring.h"

main() {

    astr str1;
    astr_create(&str1, "Hello, ");

    astr str2;
    astr_create(&str2, "World!");

    astr_cat(&str1, &str2);

    printf("%s\n", str1.data);

    astr_create(&str1, "Hello, ");
    astr_create(&str2, "World");

    astr_cat(&str1, &str2);
    printf("%s\n", str1.data);

    astr_create(&str1, "Hola, ");
    astr_create(&str2, "User!");

    astr_cat(&str1, &str2);
    printf("%s\n", str1.data);


    return 0;
}
