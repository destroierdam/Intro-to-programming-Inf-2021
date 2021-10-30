#include <iostream>

/*
От клавиатурата се въвеждат произволен брой числа. Намерете сбора на всички числа до въвеждането на 0.

Пример:

Вход: 1 2 3 0 5

Изход: 6
*/

int main() {
    int firstNumber;

    int sum = 0;

    do {
        // Kakvo se povtaia
        std::cin >> firstNumber;
        sum += firstNumber;

    } while ( firstNumber != 0 ); // До кога се повтаря

    std::cout << sum;
}
