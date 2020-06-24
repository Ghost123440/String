#ifndef MY_STRING_HPP
#define MY_STRING_HPP

unsigned int strLen(const char* str);
void strCpy(char* source, char* dest);
void strCat(char* source, char* dest);
void strReverse(char* str);
void strToUpper(char* str);
void strToLower(char* str);
int strStr(const char* str, const char* subStr);
int strCmp(const char* str, const char* str2);

#endif // !MY_STRING_HPP
