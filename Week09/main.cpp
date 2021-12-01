#include <iostream>
void swap(int * num1, int * num2) {
	int temp = *num2;
	*num2 = *num1;
	*num1 = temp;
}





void printArr(int * arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}



void multiplyArray(int *arr, int size, int multiplyer) {
	for(int i = 0; i < size; i++){
		arr[i] *= multiplyer;
	}
}


int* find(int* arr, int size, int toFind) {

	for(int i = 0; i < size; i++){
		if(arr[i] == toFind){
			return &arr[i];
		}
	}
	return nullptr;
}

int main() {
	int arr[15] = { 1, 5, 4, 7, 2 };
	int * result = find(arr, 5, 50);
	if (result != nullptr) {
		*result = 44;
	} else {
		std::cout << "Result is nullptr\n";
	}
	
	std::cout << arr[2];


	return 0;
}
