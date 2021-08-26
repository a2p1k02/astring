#ifndef ASTRING_H_
#define ASTRING_H_

typedef enum {
    false = 0,
    true = 1
} bool;

typedef unsigned long size_t;

typedef struct astring {
    char* data;
    size_t length;
}astr;

astr astrcreate(const char* data);
char* astrgetstring(astr* str);
void astrfree(astr* str);
size_t astrlen(astr* str);
void astrcat(astr* str1, astr* str2);
void astrncat(astr* str1, astr* str2, size_t length);
void astrmult(astr* str, const int number);
bool astrcmp(const astr* str1, const astr* str2);
bool astrncmp(const astr* str1, const astr* str2, const size_t length);

#endif //ASTRING_H_
