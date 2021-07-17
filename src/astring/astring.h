#ifndef ASTRING_H
#define ASTRING_H

typedef struct astring {
    char* data;
    size_t length;
}astr;

void astr_create(astr* str, const char* data);
void astr_free(astr* str);
size_t astr_len(astr* str);
void astr_cat(astr* str1, astr* str2);

#endif //ASTRING_H
