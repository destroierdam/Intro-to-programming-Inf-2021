#include <iostream>
const int MAX_SIZE = 64;

int aliveCellsCount(int matrix[][MAX_SIZE], int i, int j) {
	int aliveCells = 0;

	if (matrix[i + 1][j] == 1) {
		aliveCells++;
	}
	if (matrix[i][j - 1] == 1) {
		aliveCells++;
	}
	if (matrix[i - 1][j] == 1) {
		aliveCells++;
	}
	if (matrix[i][j + 1] == 1) {
		aliveCells++;
	}
	if (matrix[i + 1][j - 1] == 1) {
		aliveCells++;
	}
	if (matrix[i + 1][j + 1] == 1) {
		aliveCells++;
	}
	if (matrix[i - 1][j - 1] == 1) {
		aliveCells++;
	}
	if (matrix[i - 1][j + 1] == 1) {
		aliveCells++;
	} 
	return aliveCells;
}

void generateEpoch(int matrix[][MAX_SIZE], int secondMatrix[][MAX_SIZE], int rows, int cols) {
	int aliveCells;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= cols; j++) {

			aliveCells = aliveCellsCount(matrix, i, j);
			// std::cout << aliveCells << " ";
			if (aliveCells < 2) {
				secondMatrix[i][j] = 0;
			}
			else if (aliveCells == 2) {
				/*if (matrix[i][j] == 1) {
					secondMatrix[i][j] = 1;
				}
				else {
					secondMatrix[i][j] = 0;
				}*/
				secondMatrix[i][j] = matrix[i][j];

			}
			else if (aliveCells == 3) {
				secondMatrix[i][j] = 1;
			}
			else if (aliveCells > 3) {
				secondMatrix[i][j] = 0;
			}
		}
	}
}


int main() {
	int matrix[MAX_SIZE][MAX_SIZE] = { {0} }, secondMatrix[MAX_SIZE][MAX_SIZE] = { {0} }, rows, cols;
	int aliveCells, deadCells, epochsCount;

	std::cin >> rows;
	std::cin >> cols;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= cols; j++) {
			std::cin >> matrix[i][j];
		}
	}

	std::cin >> epochsCount;

	for (int i = 0; i < epochsCount; i++) {
		if (i % 2 == 0) {
			generateEpoch(matrix, secondMatrix, rows, cols);
			for (int i = 1; i <= rows; i++) {
				for (int j = 1; j <= cols; j++) {
					std::cout << secondMatrix[i][j] << " ";
				}
				std::cout << "\n";
			}
		}
		else {
			generateEpoch(secondMatrix, matrix, rows, cols);
			for (int i = 1; i <= rows; i++) {
				for (int j = 1; j <= cols; j++) {
					std::cout << matrix[i][j] << " ";
				}
				std::cout << "\n";
			}
		}

		for (int j = 0; j < cols; j++) {
			std::cout << "-";
		}
		std::cout << "\n";
	}




	return 0;
}
/*
Ако една жива клетка е заобиколена от по-малко от два живи съсeда, то тя умира.
Ако една жива клетка е заобиколена от два или три съсeда, то тя продължава да живее.
Ако една жива клетка е заобиколена от повече от три съседа, то тя умира.
Ако една мъртва клетка е заобиколена от точно три съседа се съживява.
*/
/*
5 5
0 0 0 0 0
0 0 0 0 0
0 1 1 1 0
0 0 0 0 0
0 0 0 0 0
2

5 5
0 1 0 0 0
0 0 1 0 0
1 1 1 0 0
0 0 0 0 0
0 0 0 0 0
7


*/
