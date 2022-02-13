#include <iostream>

/// Task 1

/*
Напишете функция, която приема естествено число N и връща матрица с първите N реда от триъгълника на Паскал. Използвайте динамична памет.
Триъгълник на Паскал за N = 5:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/

int** generatePascal(int n) {
	int** triangle = new int* [n];
    const int edgeValue = 1;
	for (int i = 0; i < n; i++) {

		triangle[i] = new int[i + 1];
		
		for (int j = 0; j < i + 1; j++) {
            if (j == 0 || j == i) {
			    triangle[i][j] = edgeValue;
            } else {
			    triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
                
            }
		}
	}
	return triangle;
}
void solvePascalTriangle() {
	int n = 9;
	int** answer = generatePascal(n);

    for(int i = 0; i < n; i++){
		for (int j = 0; j < i + 1; j++) {
            std::cout << answer[i][j] << " ";
        }
		std::cout << '\n';
        delete[] answer[i];
    }
    delete[] answer;
}

/// Task 2

/*
Сливане на масиви рекурсивно
Напишете функция, която приема два сортирани масива и връща нов масив, който също е сортиран.Използвайте рекурсия.
*/
void mergeRecHelper(int* arr1, int arr1Idx, int arr1Size, int* arr2, int arr2Idx, int arr2Size, int* result, int resultIdx) {
	if (arr1Idx == arr1Size) {
		if (arr2Idx == arr2Size) {
			return;
		} else {
			// Copy from arr2
			result[resultIdx] = arr2[arr2Idx];
			mergeRecHelper(arr1, arr1Idx, arr1Size, arr2, arr2Idx + 1, arr2Size, result, resultIdx + 1);
			return;
		}
	} else {
		if (arr2Idx == arr2Size) {
			// Copy from arr1
			result[resultIdx] = arr1[arr1Idx];
			mergeRecHelper(arr1, arr1Idx + 1, arr1Size, arr2, arr2Idx, arr2Size, result, resultIdx + 1);
			return;
		} else {
			if (arr1[arr1Idx] <= arr2[arr2Idx]) {
				// Copy from arr1
				result[resultIdx] = arr1[arr1Idx];
				mergeRecHelper(arr1, arr1Idx + 1, arr1Size, arr2, arr2Idx, arr2Size, result, resultIdx + 1);
				return;
			} else {
				// Copy from arr2
				result[resultIdx] = arr2[arr2Idx];
				mergeRecHelper(arr1, arr1Idx, arr1Size, arr2, arr2Idx + 1, arr2Size, result, resultIdx + 1);
				return;
			}
		}
	}
}

void mergeRecHelper2(int* arr1, int arr1Size, int* arr2, int arr2Size, int* result) {
	// Copy from arr1
	result[0] = arr1[0];
	mergeRecHelper2(arr1 + 1, arr1Size - 1, arr2, arr2Size, result + 1);
	// ...
}

int * mergeRec(int * arr1, int arr1Size, int* arr2, int arr2Size) {
	int* newArray = new int[arr1Size + arr2Size];
	mergeRecHelper(arr1, 0, arr1Size, arr2, 0, arr2Size, newArray, 0);
	return newArray;
}

void solveMerge() {
	int arr1[] = { 1, 2, 2, 4, 10, 12, 16 };
	
	// { 1, 2, 2, 4, 10, 12, 16 };
	// { 0, 1, 1, 2, 3, 4, 4};
	
	const int arr1Size = sizeof(arr1) / sizeof(int);

	int arr2[] = { 0, 1, 1, 2, 3, 4, 4};
	const int arr2Size = sizeof(arr2) / sizeof(int);

	int * merged = mergeRec(arr1, arr1Size, arr2, arr2Size);
	for (int i = 0; i < arr1Size + arr2Size; i++) {
		std::cout << merged[i] << " ";
	}
	std::cout << '\n';
}

/// Task 4

/*
Прозорци
Нека имаме няколко вида прозорци, които имат височина и широчина.
Имаме определен брой от всеки размер.

Напишете функция, която по подаден масив от прозорци и размери на мястото за поставяне
да определи дали могат да се сложат еднакви прозорци и ако да - кои.
*/

struct Window {
	int height;
	int width;
	int count;
};

bool checkIfFits(Window window, int placeHeight, int placeWidth) {
	bool heightFits = (placeHeight % window.height == 0);
	bool widthFits = (placeWidth % window.width == 0);
	bool hasCount = window.count >= (placeWidth / window.width) * (placeHeight / window.height);
	return heightFits && widthFits && hasCount;
}

int checkIfFits(Window* windows, int size, int placeHeight, int placeWidth) {
	for (int i = 0; i < size; i++) {
		bool flag = checkIfFits(windows[i], placeHeight, placeWidth);
		if (flag == true) {
			return i;
		}
	}
	return -1;
}

void solveWindows() {
	const int size = 3;
	Window windows[size];
	windows[0].height = 40;
	windows[0].width = 10;
	windows[0].count = 24;
	windows[1].height = 30;
	windows[1].width = 60;
	windows[1].count = 6;
	windows[2].height = 40;
	windows[2].width = 10;
	windows[2].count = 24;
	
	const int placeHeight = 80;
	const int placeWidth = 120;

	std::cout << checkIfFits(windows, size, placeHeight, placeWidth) << '\n';
}

int main() {
	// Task 1
	solvePascalTriangle();
	// Task 2
	solveMerge();
	// Task 4
	solveWindows();
}
