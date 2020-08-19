#include <iostream>

#include "solution.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x, y, d;

	cout << "Start point (X) -> ";
	cin >> x;
	
	cout << "Finish point (Y) -> ";
	cin >> y;

	cout << "Jump distance (D) -> ";
	cin >> d;

	auto result = solution(x, y, d);
	cout << "Result: " << result << " jump/s" << endl;
	
	return 0;
}
