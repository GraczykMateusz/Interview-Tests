#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE solutionTEST
#include <boost/test/unit_test.hpp>
#include "solution.h"

BOOST_AUTO_TEST_SUITE ( checkSolution )
BOOST_AUTO_TEST_CASE( for1 ) {
	BOOST_CHECK( solution(1) == 0 );
}
BOOST_AUTO_TEST_CASE( for2 ) {
	BOOST_CHECK( solution(2) == 0 );
}
BOOST_AUTO_TEST_CASE( for3 ) {
	BOOST_CHECK( solution(3) == 0 );
}
BOOST_AUTO_TEST_CASE( for4 ) {
	BOOST_CHECK( solution(4) == 0 );
}
BOOST_AUTO_TEST_CASE( for5 ) {
	BOOST_CHECK( solution(5) == 1 );
}
BOOST_AUTO_TEST_CASE( for6 ) {
	BOOST_CHECK( solution(6) == 0 );
}
BOOST_AUTO_TEST_CASE( for7 ) {
	BOOST_CHECK( solution(7) == 0 );
}
BOOST_AUTO_TEST_CASE( for8 ) {
	BOOST_CHECK( solution(8) == 0 );
}
BOOST_AUTO_TEST_CASE( for9 ) {
	BOOST_CHECK( solution(9) == 2 );
}
BOOST_AUTO_TEST_CASE( for10 ) {
	BOOST_CHECK( solution(10) == 1 );
}
BOOST_AUTO_TEST_CASE( for15 ) {
	BOOST_CHECK( solution(15) == 0 );
}
BOOST_AUTO_TEST_CASE( for20 ) {
	BOOST_CHECK( solution(20) == 1 );
}
BOOST_AUTO_TEST_CASE( for32 ) {
	BOOST_CHECK( solution(32) == 0 );
}
BOOST_AUTO_TEST_CASE( for529 ) {
	BOOST_CHECK( solution(529) == 4 );
}
BOOST_AUTO_TEST_CASE( for1041 ) {
	BOOST_CHECK( solution(1041) == 5 );
}
BOOST_AUTO_TEST_CASE( for12345332 ) {
	BOOST_CHECK( solution(12345332) == 3 );
}
BOOST_AUTO_TEST_SUITE_END()
