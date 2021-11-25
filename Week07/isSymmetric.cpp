#include <iostream>
int main() {
	const int MAX_SIZE = 64;
	int arr[MAX_SIZE];
	int size;
	std::cin >> size;
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	bool isSymmetric = true;
	for (int i = 0; i < size - i - 1; i++) {
		if (arr[i] != arr[size - 1 - i]) {
			isSymmetric = false;
			break;
		}
	}

	/* Alternative
	bool isSymmetric = true;
	int j = size - 1;
	for (int i = 0 /*, j = size - 1* /; i < j; i++/*, j--* /) {
		
		if (arr[i] != arr[j]) {
			isSymmetric = false;
			break;
		}
		j--;
	}
	*/
	if (isSymmetric) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	std::cout << "\n";
	return 0;
} /*
От клавиатурата се въвеждат N числа.Проверете дали редицата е симетрична.

Пример

Вход :

7
1 2 3 4 3 2 1
Изход :

	YES
*/
