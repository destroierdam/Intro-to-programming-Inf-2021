#include <iostream>
/*
По дадено реално число а и естествено число n намерете 1 + а + а^2 + ... + а^n, без да използвате формулата за геометрична прогресия.

Вход:
2 2

Изход:
7
*/
int main() {
    int a = 3;
    int n = 5;
    int sum = 0;
    int currentNumber = 1;


    for(int deg = 0; deg <= n; deg++) {
		std::cout << currentNumber << " + ";
        sum += currentNumber;
		currentNumber *= a;
		std::cout << (a ^ n) << " <---\n";
    }
	std::cout << "\n= ";
    std::cout << sum << "\n";

}
// 1 + 3 + 9 + 27 + 81 + 243 == 364
