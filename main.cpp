#include <iostream>
#include "MyString.hpp"

int main()
{
  char string[20] = "test";
  char string2[20] = "test2";

  std::cout << strLen(string) << "\n";
  strCpy(string, string2);
  std::cout << string2 << "\n";
  strCat(string, string2);
  std::cout << string << "\n";
  strReverse(string);
  std::cout << string << "\n";
  strToUpper(string);
  std::cout << string << "\n";
  strToLower(string);
  std::cout << string << "\n";

  std::cout << strStr("My name", "me") << "\n";
  std::cout << strCmp("My name", "na") << "\n";

  return 0;
}