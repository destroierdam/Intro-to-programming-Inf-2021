#include <iostream>
int main() {
	
	int number, startNumber = 1;
	std::cin >> number;

	
	while(startNumber <= number) {
		std::cout << startNumber << " ";
		startNumber++;
	}
	

	int i = 666;

	/*
	for (;;) {
		std::cout << i << " ";
	}
	std::cout << i << " ";
	*/
	
	number = 5;
	while (number > 0) {
		number -= 2;
	}
	do {
		std::cout << "Number is " << number << "\n";
		number -= 2;
	} while (number > 0);
	
}