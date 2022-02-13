#include <iostream>

int biggestLocalHelper(int * arr, int size, int i, int count) {
    if(i == 0) {
        return biggestLocalHelper(arr, size, i + 1, arr[0] > arr[1]);
    }
    if(i == size - 1) {
        return count + (arr[i] > arr[i-1]);
    }
    return biggestLocalHelper(arr, size, i + 1, count + (arr[i] > arr[i-1] && arr[i] > arr[i+1]));
}

int biggestLocal(int * arr, int size) {
    return biggestLocalHelper(arr, size, 0, 0);
}

int main() {
    int arr[] = {1, 5, 1, 5, 1};

    std::cout << biggestLocal(arr, 4);
}