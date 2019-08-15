#include <iostream>
#include <vector>

#include "solution.cpp"

int loadNumber() {
	unsigned int number;

	std::cout << "Number: ";
	std::cin >> number;

	return number;
}

int main() {
	auto result = solution(loadNumber());
	std::cout << "Binary gap max lenght: " << result << std::endl;
	return 0;
}
