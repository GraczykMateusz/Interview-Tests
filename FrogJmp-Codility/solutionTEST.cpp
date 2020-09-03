#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE solutionTEST

#include <boost/test/unit_test.hpp>
#include "solution.h"

BOOST_AUTO_TEST_SUITE ( checkSolution )
BOOST_AUTO_TEST_CASE( jump0 ) {
        BOOST_CHECK( solution(20, 10, 10) == 0 );
}
BOOST_AUTO_TEST_CASE( jump1 ) {
        BOOST_CHECK( solution(0, 10, 10) == 1 );
}
BOOST_AUTO_TEST_CASE( jump2v1 ) {
        BOOST_CHECK( solution(-5, 5, 5) == 2 );
}
BOOST_AUTO_TEST_CASE( jump2v2 ) {
        BOOST_CHECK( solution(-1, 1, 1) == 2 );
}
BOOST_AUTO_TEST_CASE( jump100v1 ) {
        BOOST_CHECK( solution(0, 100, 1) == 100 );
}
BOOST_AUTO_TEST_CASE( jump100v2 ) {
        BOOST_CHECK( solution(-50, 50, 1) == 100 );
}
BOOST_AUTO_TEST_SUITE_END()

