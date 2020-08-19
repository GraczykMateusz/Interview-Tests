#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE solutionTEST
#include <boost/test/unit_test.hpp>
#include "solution.h"

using std::vector;

BOOST_AUTO_TEST_SUITE ( checkSolution )
	vector<int> A = { 1, 2, 3, 4, 0};
        vector<int> B = { 1, 2, 4, 5, 6 };
        vector<int> C = { 2, 1, 0, 4, 5, 7, 3 };
        vector<int> D = { 6, 4, 5, 2 };

BOOST_AUTO_TEST_CASE( A12340 ) {
        auto result = solution(A);
        BOOST_CHECK(result == -1);
}
BOOST_AUTO_TEST_CASE( B12456 ) {
        auto result = solution(B);
        BOOST_CHECK(result == 3);
}
BOOST_AUTO_TEST_CASE( C2104573 ) {
        auto result = solution(C);
        BOOST_CHECK(result == 6);
}
BOOST_AUTO_TEST_CASE( D6452 ) {
        auto result = solution(D);
        BOOST_CHECK(result == 3);
}
BOOST_AUTO_TEST_SUITE_END()
