#include <iostream>
#include <vector>

#include "solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	int numbersCount;
	int input;

	vector<int> A;

	cout << "How many numbers: ";
	cin >> numbersCount;

	for(int i = 1; i <= numbersCount; ++i) {
		cout << "Number " << i << " -> ";
		cin >> input; 
		
		A.push_back(input);
	}

	auto result = solution(A);
	
	if(result != -1) {
		cout << "Missing element: " << result << endl;
	} else {
		cout << "Everything correct!" << endl;
	}
	return 0;
}
