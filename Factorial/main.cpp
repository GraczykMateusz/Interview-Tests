#include <iostream>

using std::cout;
using std:: cin;

int loadData() {
	int loadNumber;	

	cout << "Number: ";
	cin >> loadNumber;
	return loadNumber;
}

int iterationCalculations(int number) {
	auto result = 1;

	for(int i = 1; i <= number; i++) {
		result *= i;
	}	
	return result;
}

int recursionCalculations(int number) {
	if(number == 1)
		return 1;
	else return recursionCalculations(number - 1) * number;	
}

bool selectType() {
	bool select;
	
	cout << "Factorial" << '\n';
	cout << "0.Iteration" << '\n';
	cout << "1.Recursion" << '\n';
	cout << "Select:";
	cin >> select;
	return select;
}
int main() {
	auto select = selectType();
	auto number = loadData();
	
	if(select == 0)
		cout << "Restult: " << iterationCalculations(number) << '\n';
	if(select == 1)
		cout << "Restult: " << recursionCalculations(number) << '\n';
	return 0;
}
