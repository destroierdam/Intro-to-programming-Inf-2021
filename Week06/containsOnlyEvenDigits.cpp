#include <iostream>
bool containsOnlyEven(int number);

int main() {

	int number;
	std::cin >> number;
    std::cout << std::boolalpha << containsOnlyEven(number);
}

bool isOdd(int number);

bool containsOnlyEven(int number) {
	while (number > 0) {
        int currentNum = number % 10;
        if(isOdd(currentNum)) {
            return false;
        }
        number /= 10;
	}
    return true;
}

bool isOdd(int number) {
    return number % 2 != 0;
}

/*
22228 -> true
22218 -> false
22268 -> true

*/
