#include <iostream>
bool isLeap(int year) {
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	/* Equivalent
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	}
	return false;
	*/
	/* Equivalent
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	} else {
		return false;
	}
	*/
}

int daysInMonth(int month, int year) {
	int days;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		days = 28 + isLeap(year);
		break;
		// std::cout << 28 + isLeap(year) << "\n";
		/* Equivalent
		std::cout << (isLeap(year) ? 29 : 28) << "\n";
		*/
		/* Equivalent
		if (isLeap(year)) {
			std::cout << 29 << "\n";
		} else {
			std::cout << 28 << "\n";
		}
		*/
	default:
		days = 0;
	}
	return days;
}

void solve() {
	int year, month;
	std::cin >> month >> year;
	std::cout << daysInMonth(month, year) << "\n";
}
int main() {
	solve();
}
/*
По даден месец и година изведете броя дни от месеца.

Примери

Вход:

12 2014
Изход:

31
Вход:

2 2016
Изход:
29
*/
