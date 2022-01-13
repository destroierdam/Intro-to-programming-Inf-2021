#include <iostream>
int* multiply(int* arr, int size, int times)
{
	int* multiplied = new int[size*times];
	for(int i = 0; i < times; i++)
	{
		for(int j = 0; j < size; j++)
		{
			multiplied[j+i*size] = arr[j];
		}
	}
	return multiplied;
}
void solve() {
	int size = 4;
	std::cin >> size;
	int* arr = new int[size];
	for(int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	int times = 4;
	std::cin >> times;
	
	int * result = multiply(arr, size, times);
	for (int i = 0; i < size * times; i++) {
	std::cout << result[i] << " ";
	}
	delete[] arr;
	delete[] result;
}

int main() {
	solve();
}
