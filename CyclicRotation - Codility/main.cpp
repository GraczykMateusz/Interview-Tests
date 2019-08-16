#include <iostream>
#include <vector>

#include "solution.cpp"

using std::cin;
using std::cout;
using std::vector;
using std::endl;

void setVector(vector<int> &A) {
	int size, number;

	cout << "How many numbers: ";
        cin >> size;
	
	for(int i = 1; i <= size; i++) {
                cout << i << " number: ";
                cin >> number;
                A.push_back(number);
        }
}

int rotateInput() {
	int K;

	cout << "How many rotations: ";
        cin >> K;

	return K;
}

void showA(vector<int> &A) {
	for(auto x : A)
		cout << x << " ";
	cout << endl;
}

int main() {
	vector<int> A;

	setVector(A);
	solution(A, rotateInput());

	showA(A);

	return 0;
}
