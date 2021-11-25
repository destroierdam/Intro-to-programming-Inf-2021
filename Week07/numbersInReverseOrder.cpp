#include <iostream>
int main() {
	int n, number, previousNumber;

    const int MAX_SIZE = 64;
    int size;
    
	std::cin >> size;
    int arr[MAX_SIZE];

    for(int i = 0; i < size; i++){
        std::cin >> arr[i];
    }

    for(int j = size - 1; j >= 0; j--){
        std::cout << arr[j] << " ";
    }

} /*
От клавиатурата се въвеждат N числа. Да се изведат в обратен ред.

Вход:
4
1 2 3 4
Изход:
4 3 2 1
*/
