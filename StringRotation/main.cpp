#include <iostream>
#include <cstring>

int main() {
  const char* s = "abcdefg";
  
  for(int i = strlen(s); i >= 0; --i)
    std::cout << s[i];

  return 0;
}
