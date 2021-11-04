#include<iostream>
int main() {
	int n, counter;
	bool containsOnlyOddNumbers = true;
	std::cin >> n;

	// Using while
	/* 
	counter = n;
	while (counter > 0) {
		std::cin >> n;
		// logic...
		counter--;
	}
	*/
	
	// Using for
	for (int i = 0; i < n; i++) {
		int number;
		std::cin >> number;
		if (number % 2 == 0) {
		    containsOnlyOddNumbers = false;
		}
	}
	
	// Another way of looping n times
	/*
	while (n--) {
		// logic...
	}
	*/

	if (containsOnlyOddNumbers) {
		std::cout << "Yes";
	} else {
		std::cout << "No";
	}
}