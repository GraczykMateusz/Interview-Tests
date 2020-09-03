#include <iostream>
#include <vector>

#include "solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	int X;
	vector<int> A;
	
	int input;	
	int inputCount = 0;
	
	cout << "End of the river's position: ";
	cin >> X;

	cout << "Enter the positions of the leafs at times(end -> -1): " << endl;
	do {		
		cout << "Second: " << inputCount << " -> ";
		cin >> input;

		inputCount++;
		A.push_back(input);

	} while(input != -1);

	auto result = solution(X, A);
	
	if(result != -1) {
		cout << "The frog can jump in second: " << result << endl;
	} else {
		cout << "The frog can't jump other side of the river!";
	}
	return 0;
}
