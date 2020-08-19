#include <vector>
#include <algorithm>
#include <iostream>
#include "solution.h"

int solution(int X, std::vector<int> &A) {
	std::vector<int> B;
	int leafPosition;

	for(auto it = A.begin(); it != A.end(); ++it) { // All positions
		leafPosition = 1;

		if(*it <= X && !(std::binary_search(B.begin(), B.end(), *it))) {
			B.push_back(*it);
			std::sort(B.begin(), B.end());
		}
		
		for(auto& n : B) { 
			if(leafPosition == X) {
				auto index = std::distance(A.begin(), it);
				return index;
			}	
			if(n == leafPosition) {
				leafPosition++;
			}
		}
	}
	return -1;
}
