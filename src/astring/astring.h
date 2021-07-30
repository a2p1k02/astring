#ifndef ASTRING_H_
#define ASTRING_H_

typedef struct astring {
    char* data;
    size_t length;
}astr;

astr astrcreate(const char* data);
void astrfree(astr* str);
size_t astrlen(astr* str);
void astrcat(astr* str1, astr* str2);
void astrncat(astr* str1, astr* str2, size_t length);
void astrmult(astr* str, const int number);

#endif //ASTRING_H_
