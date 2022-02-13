#include <iostream>

void mergeHelper(int* left, int leftSize, int * right, int rightSize, int * result) {
    if(leftSize == 0) {
        if(rightSize == 0) {
            return;
        } else {
            result[0] = right[0];
            mergeHelper(left, leftSize, right + 1, rightSize - 1, result + 1);
            return;
        }
    }
    if (rightSize == 0) {
        result[0] = left[0];
        mergeHelper(left + 1, leftSize - 1, right, rightSize, result + 1);
        return;
    }
    if(left[0] <= right[0]) {
        result[0] = left[0];
        mergeHelper(left + 1, leftSize - 1, right, rightSize, result + 1);
    } else {
        result[0] = right[0];
        mergeHelper(left, leftSize, right + 1, rightSize - 1, result + 1);
    }
}

int * merge(int* left, int leftSize, int * right, int rightSize) {
    int * result = new int[leftSize + rightSize];
    mergeHelper(left, leftSize, right, rightSize, result);
    return result;
}

int main() {
    int arr1[] = {1, 2, 14, 15, 15, 19, 22};
    int arr1Size = sizeof(arr1)/sizeof(int);
    int arr2[] = {0, 1, 1, 2, 3, 4, 10, 14, 17, 22};
    int arr2Size = sizeof(arr2)/sizeof(int);
    
    int * merged = merge(arr1, arr1Size, arr2, arr2Size);
    for(int i = 0; i < arr1Size + arr2Size; i++) {
        std::cout << merged[i] << " ";
    }
    std::cout << '\n';
    return 0;
}
