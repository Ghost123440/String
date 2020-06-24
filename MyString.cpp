#include "MyString.hpp"
#include <cstring>

unsigned int strLen(const char* str)
{
  const char* end = str;
  while (*end++ != 0);
  return end - str - 1;
}

void strCpy(char* source, char* dest)
{
  while (*source) *dest++ = *source++;
  ++* dest = '\0';
}

void strCat(char* source, char* dest) 
{
  while (*source++);
  source--;
  while (*source++ = *dest++);
}

void strReverse(char* str)
{
  char* p = str;
  char* s = str + strLen(str) - 1;
  while (p < s)
  {
    char tmp = *p;
    *p++ = *s;
    *s-- = tmp;
  }
}

void strToUpper(char* str)
{
  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *str = *str - ('a' - 'A');
    }
    str++;
  }
}

void strToLower(char* str)
{
  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *str = *str + ('a' - 'A');
    }
    str++;
  }
}

int strStr(const char* str, const char* subStr) {
  if (strLen(str) < strLen(subStr))
  {
    return -1;
  }
  if (*str == '\0' && *subStr == '\0')
  {
    return 0;
  }
  else if (*subStr != '\0' && *str == '\0')
  {
    return -1;
  }
  else if (*str != '\0' && *subStr == '\0')
  {
    return 0;
  }
  bool temp = true;
  const char* t = str;
  const char* p = subStr;
  int i = 0;
  for (; *str; str++)
  {
    t = str; p = subStr; i++;
    while (*p && *t) 
    {
      temp = true;
      if (*p != *t) 
      { 
        temp = false;  
        break; 
      }
      p++; 
      t++;
    }
    if (temp)
    {
      return i - 1;
    }
  }
  return -1;
}

int strCmp(const char* str, const char* str2) {
  while (*str && *str2) 
  {
    if (*str < *str2)
    {
      return -1;
    }
    if (*str > * str2)
    {
      return 1;
    }
    ++str; ++str2;
  }
  return *str ? -1 : *str2 ? 1 : 0;
}

//индивидуальная функция
/* 
char* subStr(char* str, char* toReturn, unsigned int n, unsigned int m)
{
  if (m < n)
  {
    return nullptr;
  }
  unsigned int counter = 0;
  for (unsigned int i = 0; i < strLen(str); i++)
  {
    if ((i >= n) && (i < m))
    {
      *toReturn++ = *str;
      counter++;
    }
    str++;
  }
  for (unsigned int i = 0; i < counter; i++)
  {
    *toReturn--;
  }
  return toReturn;
}
*/
