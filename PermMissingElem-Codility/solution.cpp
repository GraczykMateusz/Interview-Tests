#include <vector>
#include <algorithm>
#include <iostream>
#include "solution.h"

using std::vector;

int solution(vector<int> &A) {
	sort(A.begin(), A.end());

	auto element = *(A.begin());

	for(auto i : A) {
		if(i != element)
			return element;	
		element++;
	}
	return -1;
} 
