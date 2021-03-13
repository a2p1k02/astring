#include <string.h>
#include <stdlib.h>

typedef struct astring {
    char* data;
    size_t length;
}astr;

void astr_init(astr* str);
void astr_free(astr* str);
size_t astr_len(astr* str);
void astr_create(astr* str, const char* data);
