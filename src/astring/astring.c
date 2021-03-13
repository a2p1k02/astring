#include "astring.h"

void astr_init(astr* str) {
    astr_free(str);
    str->data = malloc(sizeof (char) * str->length);
}

void astr_free(astr* str) {
    if (str->data != NULL)
        free(str->data);
    str->data = NULL;
    str->length = 0;
}

size_t astr_len(astr* str) {
    return str->length;
}

void astr_create(astr* str, const char* data) {
    if (str->data == NULL)
        return;
    str->length = strlen(data);
    str->data = realloc(str->data, str->length);
    strncat(str->data, data, str->length);
}
