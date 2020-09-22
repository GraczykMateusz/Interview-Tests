#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

#include "solution.h"

std::vector<int> randValue() {
  const int valueCount = 6;
  std::vector<int> rv;

  srand(time(NULL));
  
  for(int i = 0; i < valueCount; i++) {
    rv.push_back(rand() % 10);
  }
  return rv;
}


void printTime(std::vector<int>& sv) {
  std::cout << sv[0] << sv[1] << ":"
            << sv[2] << sv[3] << ":"
            << sv[4] << sv[5] << std::endl;
}

int main() {
  auto rv = randValue();

  sort(rv.begin(), rv.end());

  std::vector<int> sv;
  try {
    auto sv = setTime(rv);
    printTime(sv);
  } catch(const int err) {
    std::cout << "Cannot set time!\n";
  }
  return 0;
}
