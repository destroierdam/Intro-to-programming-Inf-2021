#include <iostream>
/*
Дадено е едно число. Проверете дали има 1 в цифрите му.

234
NO

54321
YES

*/
int main() {
	int n;
	std::cin >> n;
	bool flag = false;
	while (n > 0) {
		if (n % 10 == 1) {
			flag = true;
			break; // ne e nuzhno, no skip vame ostanalite cifri
		}
		n /= 10;
	}
	if (flag) {
		std::cout << "YES\n";
	}
	else {
		std::cout << "NO\n";
	}
}
