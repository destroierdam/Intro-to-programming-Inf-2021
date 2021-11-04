#include <iostream>
int main() {

	int number;
	int result = 1;
	std::cin >> number;

	// 3! == 3 * 2 * 1
	// 5! == 5 * 4 * 3 * 2 * 1
	// 0! == 1

	for(int i = number; i > 0; i--) {
		result *= i;
	}

	std::cout << result;
}