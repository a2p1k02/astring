#include <string.h>
#include <stdlib.h>
#include "astring.h"

void astr_create(astr* str, const char* data) {
    astr_free(str);
    str->data = malloc(sizeof (char) * str->length);
    if (str->data == NULL)
        return;
    str->length = strlen(data);
    str->data = realloc(str->data, str->length);
    strncat(str->data, data, str->length);
}

void astr_free(astr* str) {
    str->data = NULL;
    str->length = 0;
}

size_t astr_len(astr* str) {
    return str->length;
}

void astr_cat(astr* str1, astr* str2) {
    if (str1->data == NULL && str2->data == NULL)
        return;
    strncat(str1->data, str2->data, str1->length + str2->length);
}
