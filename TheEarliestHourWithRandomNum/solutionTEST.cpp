#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE solutionTEST
#include <boost/test/unit_test.hpp>
#include "solution.h"

BOOST_AUTO_TEST_SUITE ( checkSolution )

const unsigned int MAX = 6;

BOOST_AUTO_TEST_CASE( xx_xx_xx_same_succes ) {
  std::vector<int> test { 1, 1, 1, 1, 1, 1 };
  
  auto testResult = setTime(test);

  for(int i = 0 ; i < MAX; ++i)
    BOOST_CHECK(testResult[i] == test[i]);
}

BOOST_AUTO_TEST_CASE( xx_xx_xx_failed ) {
  std::vector<int> test { 9, 9, 9, 9, 9, 9 };

  try {
    auto testResultError = setTime(test); 
    const int testFailed = true;
    BOOST_CHECK( testFailed != true );
  
  } catch(const int err) {
    BOOST_CHECK( err == -1 );
  }
}

BOOST_AUTO_TEST_CASE( xx_xx_xx_rand_success ) {
  std::vector<int> test { 1, 2, 2, 4, 5, 6 };
    
  auto testResult = setTime(test);
  for(int i = 0; i < MAX; ++i)
    BOOST_CHECK( testResult[i] == test[i] );
}

BOOST_AUTO_TEST_CASE( x0_00_00_success ) {
  std::vector<int> test { 2, 0, 0, 0, 0, 0 };

  auto testResult = setTime(test);

  for(int i = 0; i < MAX; ++i)
    BOOST_CHECK(testResult[i] == test[i]);
}

BOOST_AUTO_TEST_CASE(x0_00_00_failed) {
  std::vector<int> test { 3, 0, 0, 0, 0, 0 };

  try {
    auto testResultError = setTime(test);
    const int testFailed = true;
    BOOST_CHECK( testFailed != true );
  } catch(const int err) {
    BOOST_CHECK( err == -1 );
  }
}

BOOST_AUTO_TEST_CASE( Ox_00_00_success ) { 
  std::vector<int> test { 0, 4, 0, 0, 0, 0 };
 
  auto testResult = setTime(test);

  for(int i = 0; i < MAX; ++i)
    BOOST_CHECK(testResult[i] == test[i]);
}

BOOST_AUTO_TEST_CASE( Ox_00_00_failed ) {
  std::vector<int> test { 0, 5, 0, 0, 0, 0 };
  
  try {                 
    auto testResultError = setTime(test);
    const int testFailed = true; 
    BOOST_CHECK( testFailed != true );
  } catch(const int err) {
    BOOST_CHECK( err == -1 );    
  }
}

BOOST_AUTO_TEST_CASE( O0_x0_x0_success ) {
  std::vector<int> test { 0, 0, 5, 0, 5, 0 };

  auto testResult = setTime(test);

  for(int i = 0; i < MAX; ++i)
    BOOST_CHECK(testResult[i] == test[i]);
}

BOOST_AUTO_TEST_CASE( O0_x0_00_failed ) {
  std::vector<int> test { 0, 0, 6, 0, 0, 0 };

  try {
    auto testResultError = setTime(test);
    const int testFailed = true;
    BOOST_CHECK( testFailed != true );
  } catch(const int err) {
    BOOST_CHECK( err == -1 );
  }
}

BOOST_AUTO_TEST_CASE( O0_00_x0_failed ) {
  std::vector<int> test { 0, 0, 0, 0, 6, 0 };
     
  try {
    auto testResultError = setTime(test);
    const int testFailed = true;
    BOOST_CHECK( testFailed != true );
  } catch(const int err) {
    BOOST_CHECK( err == -1 );
  }
}

BOOST_AUTO_TEST_SUITE_END()
