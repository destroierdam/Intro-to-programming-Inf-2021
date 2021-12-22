#include <iostream>
#include <typeinfo> // for typeid

const int MAX_SIZE = 32;
void find(int matricata[][MAX_SIZE], int rows, int cols, int toFind, int & numberRow, int & numberCol) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matricata[i][j] == toFind) {
				numberRow = i;
				numberCol = j;
				return;
			}
		}
	}
}
void demoReferences() {
	int number = 0;
	int traicho = 20;
	int& aReference = number;
	aReference = traicho;
	std::cout << "Number is: " << number << "\n";
}

void swap(int & first, int & second) {
	int temp = first;
	first = second;
	second = temp;
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << i[arr] << " ";
	}
	std::cout << "\n";
}

int main() {
	
	int arr[MAX_SIZE] = { 1, 2, 3, 4, 5 };
	int size = 5;

	printArr(arr, size);

	int number1 = 45;
	int* ptr = &number1;

	std::cout << "Size in bytes of array of int with length MAX_SIZE: ";
	std::cout << sizeof(int[MAX_SIZE]) << "\n";
	std::cout << "Size in bytes of int: ";
	std::cout << sizeof(int) << "\n";

	std::cout << "Name of the variable with name \"arr\": ";
	std::cout << typeid(arr).name() << "\n";
	std::cout << "Name of the variable with name \"ptr\": ";
	std::cout << typeid(ptr).name() << "\n";

	int traicho = 5, pencho = 10;
	int & ref1 = traicho, & ref2 = pencho;
	int* ptr1 = &traicho;
	int* ptr2 = &pencho;

	swap(traicho, pencho);
	std::cout << "Traicho: " << traicho << ", Pencho: " << pencho << "\n";

	int matrix[MAX_SIZE][MAX_SIZE];
	int rows, cols;
	std::cin >> rows >> cols;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cin >> matrix[i][j];
		}
	}

	int number;
	std::cin >> number;
	int numberRow, numberCol;

	find(matrix, rows, cols, number, numberRow, numberCol);
	std::cout << numberRow << ", " << numberCol << "\n";
	
	return 0;
}
/*
= { {1, 2, 3, 4, 5, 6},
{1, 2, 3, 4, 5, 6},
{7, 8, 8, 9, 9, 9},
{7, 8, 9, 9, 9, 9} };
*/
