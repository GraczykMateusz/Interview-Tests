#include <iostream>
#include <memory>

using std::cin;
using std::cout;

int* selectNumbers() {
	int* arr = new int[2];
	
	cout << "First number:";
	cin >> arr[0];
	cout << "Second number:";
	cin >> arr[1];
	
	return arr; 
}

int calculations(int* arr) {
	if(arr[0] == arr[1])	
		return arr[0];
	if(arr[0] > arr[1])
		arr[0] -= arr[1];
	if(arr[0] < arr[1])
		arr[1] -= arr[0];
	calculations(arr);	
}

int main() {
	auto selectedArr = selectNumbers();	
	
	cout << "Greatest common divisor:" << calculations(selectedArr) << '\n';	
	selectedArr = NULL;
	delete selectedArr;
	return 0;
}
