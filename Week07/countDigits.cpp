#include <iostream>
int main() {
	int number;
	std::cin >> number;
	const int NUM_OF_DIGITS = 10;
	int counters[NUM_OF_DIGITS] = { 0 };
	/*
	for (int i = 0; i < NUM_OF_DIGITS; i++) {
		counters[i] = 0;
	}
	*/
	while (number != 0) {
		int digit = number % 10;
		counters[digit]++;
		/*
		for (int j = 0; j < NUM_OF_DIGITS; j++) {
			if (j == digit) {
				counters[j]++;
			}
		}
		*/
		number /= 10;
	}
	for (int i = 0; i < NUM_OF_DIGITS; i++) {
		std::cout << i << ": " << counters[i] << "\n";
	}
	return 0;
} /*
От клавиатурата се въвежда едно число. Пребройте броя на всяка една от различните цифри, които има в числото.

Пример

Вход:

122344444
Изход:

0: 0
1: 1
2: 2
3: 1
4: 5
5: 0
6: 0
7: 0
8: 0
9: 0
*/
