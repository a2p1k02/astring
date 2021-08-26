#include <stdio.h>
#include <stdlib.h>
#include <chkd.h>
#include "astring/astring.h"

void astrcreate_test()
{
    astr str = astrcreate("Hello");
    chkd_str_eq(astrgetstring(&str), "Hello");
}

void astrfree_test()
{
    astr str = astrcreate("Hola");
    astrfree(&str);
    chkd_int_eq(astrlen(&str), 0);
    chkd_str_eq(astrgetstring(&str), NULL);
}

void astrlen_test()
{
    astr str = astrcreate("User");
    chkd_int_eq(astrlen(&str), 4);
}

void astrcat_test()
{
    astr str1 = astrcreate("Hello, ");
    astr str2 = astrcreate("World!");
    astrcat(&str1, &str2);
    chkd_str_eq(astrgetstring(&str1), "Hello, World!");
}

//void astrmult_test()
//{
//    astr str = astrcreate("*");
//    astrmult(&str, 3);
//    chkd_str_eq(astrgetstring(&str), "***");
//    printf("%s\n", str.data);
//    printf("%zu\n", str.length);
//}

main(void)
{
    return 0;
}
