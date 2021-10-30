#include <iostream>

/*

От клавиатурата се въвежда естествено число. Намерете сбора на цифрите му.

Пример:

Вход: 5550

Изход: 15
*/

int main() {
	int number;
	std::cin >> number;
	
	int sum = 0;

	do {
		sum += number % 10;
		number = number / 10;
	} while (number != 0);

	std::cout << sum << "\n";
}
