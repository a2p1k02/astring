#include <string.h>
#include <stdlib.h>
#include "astring.h"

astr astrcreate(const char* data)
{
    astr str;
    astrfree(&str);
    str.data = malloc(sizeof (char) * str.length);
    str.length = strlen(data);
    str.data = realloc(str.data, str.length);
    strncat(str.data, data, str.length);

    return str;
}

char* astrgetstring(astr* str)
{
    return str->data;
}

void astrfree(astr* str)
{
    str->data = "";
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
    str1->length = str1->length + str2->length;
}

void astrncat(astr* str1, astr* str2, size_t length)
{
    if (str1->data == NULL && str2->data == NULL)
        return;
    strncat(str1->data, str2->data, length);
    str1->length = str1->length + str2->length;
}

//void astrmult(astr* str, const int number)
//{
//    int counter = 2;
//    while (counter != number) {
//        strncat(str->data, str->data, str->length * number);
//        counter++;
//    }
//    str->length = number;
//}

bool astrcmp(const astr* str1, const astr* str2)
{
    bool checked = false;

    for (int i = 0; i < str1->length; i++)
        for (int j = 0; j < str2->length; j++)
            if (str1->data[i] == str2->data[j])
                checked = true;
            else
                checked = false;
    return checked;
}

bool astrncmp(const astr* str1, const astr* str2, const size_t length)
{
    bool checked = false;

    for (int i = 0; i < str1->length; i++)
        for (int j = 0; j < str2->length; j++)
            if (str1->data[i] == str2->data[j] && (str1->length == length || str2->length == length))
                checked = true;
            else
                checked = false;
    return checked;
}
