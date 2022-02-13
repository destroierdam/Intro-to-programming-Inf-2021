#include <iostream>

int ** pascal(int n) {
    int ** matrix = new int*[n];
    for(int i = 1; i <= n; i++) {
        matrix[i-1] = new int[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
            }
        }
    }
    return matrix;
}

int main() {
    int n = 1;
    int ** matrix = pascal(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}