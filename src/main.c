#include <stdio.h>
#include <stdlib.h>
#include "astring/astring.h"

int main() {

    astr test;
    astr_init(&test);
    astr_create(&test, "123123");

    printf("%s\n", test.data);
    printf("%zu\n", astr_len(&test));

    return 0;
}
