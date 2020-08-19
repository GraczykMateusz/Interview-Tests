#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE solutionTEST
#include <boost/test/unit_test.hpp>
#include "solution.h"

using std::vector;
 
BOOST_AUTO_TEST_SUITE ( checkSolution )
        vector<int> A5 = { 1, 2, 3, 4, 5 };
        vector<int> B10 = { 2, 4, 6, 8, 10, 9, 7, 5, 3, 1 };
        vector<int> C15 = { 15, 13, 10, 8, 6, 4, 2, 3, 5, 7, 9, 11, 12, 14, 1 };
        vector<int> D2 = { 1, 2 };
	vector<int> E3 = { 3, 2, 1 };
	vector<int> F6cannot = { 1, 4, 2 };
	vector<int> G4 = { 1, 3, 3, 1, 4, 5, 2, 5, 3 };
	vector<int> H7cannot = { 2, 2, 0, 3, 1, 1, 1, 3, 4, 7 };

BOOST_AUTO_TEST_CASE( arrA5 ) {
        auto result = solution(5, A5);
        BOOST_CHECK(result == 4);
}
BOOST_AUTO_TEST_CASE( arrB10 ) {
        auto result = solution(10, B10);
        BOOST_CHECK(result == 9);
}
BOOST_AUTO_TEST_CASE( arrC15 ) {
        auto result = solution(15, C15);
        BOOST_CHECK(result == 14);
}
BOOST_AUTO_TEST_CASE( arrD2 ) {
        auto result = solution(2, D2);
        BOOST_CHECK(result == 1);
}
BOOST_AUTO_TEST_CASE( arrE3 ) {
        auto result = solution(3, E3);
        BOOST_CHECK(result == 2);
}
BOOST_AUTO_TEST_CASE( arrF6cannot ) {
        auto result = solution(6, F6cannot);
        BOOST_CHECK(result == -1);
}
BOOST_AUTO_TEST_CASE( arrG4 ) {
        auto result = solution(4, G4);
        BOOST_CHECK(result == 6);
}
BOOST_AUTO_TEST_CASE( arrH7cannot ) {
        auto result = solution( 7, H7cannot);
        BOOST_CHECK(result == -1);
}
BOOST_AUTO_TEST_SUITE_END()
