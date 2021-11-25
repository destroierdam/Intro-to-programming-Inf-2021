#include <iostream>
int main() {
	const int MAX_ROWS = 20, MAX_COLS = 20;
	int matrix[MAX_ROWS][MAX_COLS];
	int rows, cols;
	std::cin >> rows >> cols;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cin >> matrix[i][j];
		}
	}

	std::cout << "The matrix is: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "Primary diagonal: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == j) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}

	std::cout << "Below primary diagonal: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i > j) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}

	std::cout << "Above primary diagonal: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i < j) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}

	std::cout << "Secondary diagonal: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i + j == rows - 1) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}

	std::cout << "Above secondary diagonal: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i + j < rows - 1) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}

	std::cout << "Below secondary diagonal: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i + j > rows - 1) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}

	std::cout << "Transposed by primary diagonal: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << matrix[j][i] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "Transposed by secondary diagonal: \n";
	for (int i = rows - 1; i >= 0; i--) {
		for (int j = cols - 1; j >= 0; j--) {
			std::cout << matrix[j][i] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
/*
3 3
1 2 3
4 5 6
7 8 9
*/
