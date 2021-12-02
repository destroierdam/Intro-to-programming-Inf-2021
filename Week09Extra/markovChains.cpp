#include <iostream>
int main() {
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE], size;

	bool visitedCells[MAX_SIZE] = { 0 };

	std::cin >> size;

	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	int maxLength = -1;

	for (int i = 0; i < size; i++)
	{
		if (!visitedCells[i])
		{
			int index = i;
			int length = 0;
			while (!visitedCells[index])
			{
				length++;
				visitedCells[index] = true;
				index = arr[index];
				for(int j = 0; j < size; j++)
				{
					std::cout << visitedCells[j] << " ";
				}
				std::cout << "\n";
			}
			maxLength = length > maxLength ? length : maxLength;
			for (int j = 0; j < 40; j++) {
				std::cout << "-";
			}
			std::cout << length;
			std::cout << "\n";
		}
	}
	std::cout << maxLength;
	return 0;
}
/*
10
7 8 9 4 5 6 3 1 2 0
6

10
1 2 7 5 0 6 9 4 3 8
5
*/
