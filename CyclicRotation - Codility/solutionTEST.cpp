#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE solutionTEST
#include <boost/test/unit_test.hpp>
#include "solution.cpp"

using std::vector;

BOOST_AUTO_TEST_SUITE ( checkSolution )
	vector<int> A = { 1, 2, 3, 4, 0};
	vector<int> B = { 3, 8, 9, 7, 6 };
	vector<int> C = { 0, 0, 0, 0 };
	vector<int> D = { 1, 2, 3, 4 };

BOOST_AUTO_TEST_CASE( A1 ) {
	auto result = solution(A, 1);

	for(int i = 0; i < A.size(); i++)
		BOOST_CHECK(result[i] == i);
}

BOOST_AUTO_TEST_CASE( B3 ) {
	auto result = solution(B, 3);

	BOOST_CHECK(result[0] == 9);
	BOOST_CHECK(result[1] == 7);
	BOOST_CHECK(result[2] == 6);
	BOOST_CHECK(result[3] == 3);
	BOOST_CHECK(result[4] == 8);
}
BOOST_AUTO_TEST_CASE( C1 ) {
        auto result = solution(C, 1);

	for(int i = 0; i < C.size(); i++)
		BOOST_CHECK(result[i] == 0);
}
BOOST_AUTO_TEST_CASE( D4 ) {
        auto result = solution(D, 4);

	for(int i = 0; i < D.size(); i++)
		BOOST_CHECK(result[i] == i + 1);
}
BOOST_AUTO_TEST_SUITE_END()
