#ifndef ASTRING_H
#define ASTRING_H

typedef struct astring {
    char* data;
    size_t length;
}astr;

void astrcreate(astr* str, const char* data);
void astrfree(astr* str);
size_t astrlen(astr* str);
void astrcat(astr* str1, astr* str2);
void astrncat(astr* str1, astr* str2, size_t length);

#endif //ASTRING_H
