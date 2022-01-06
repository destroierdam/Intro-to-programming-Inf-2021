#include <iostream>

int factoriel(int n) {

	if (n < 0) {
		return -1;
	}
	else if (n == 0) {
		return 1;
	}
	else {
		return n * factoriel(n - 1);
	}
}

int main() {
	
	return 0;
}
