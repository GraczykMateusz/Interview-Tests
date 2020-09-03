#include <iostream>
#include <boost/variant/variant.hpp>
//g++ -o main.cpp -lboost_unit_test_framework

template<typename T, typename Y>
boost::variant<T, Y> find_min(T a, Y b) {
  if ( a < b )
    return a;
  else
    return b;
}

int main () {
  int x = 1;
  float y = 2.5f;

  auto result = find_min(x, y);
  std::cout << result;
  return 0;
}
