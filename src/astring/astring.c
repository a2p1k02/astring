#include <string.h>
#include <stdlib.h>
#include "astring.h"

void astrcreate(astr* str, const char* data)
{
    astrfree(str);
    str->data = malloc(sizeof (char) * str->length);
    if (str->data == NULL)
        return;
    str->length = strlen(data);
    str->data = realloc(str->data, str->length);
    strncat(str->data, data, str->length);
}

void astrfree(astr* str)
{
    str->data = NULL;
    str->length = 0;
}

size_t astrlen(astr* str)
{
    return str->length;
}

void astrcat(astr* str1, astr* str2)
{
    if (str1->data == NULL && str2->data == NULL)
        return;
    strncat(str1->data, str2->data, str1->length + str2->length);
}

void astrncat(astr* str1, astr* str2, size_t length)
{
    if (str1->data == NULL && str2->data == NULL)
        return;
    strncat(str1->data, str2->data, length);
}

void astrmult(astr* str, const int number)
{
    for (int i = 1; i < number; i++)
        strncat(str->data, str->data, str->length * number);
}
