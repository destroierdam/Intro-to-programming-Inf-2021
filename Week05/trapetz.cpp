#include <iostream>
/*
Напишете програма, която да извежда на n реда трапец по следния начин:
n = 5:
    * * * * *
   * *     * *
  *   *   *   *
 *     * *     *
* * * * * * * * *
n = 6:
     * * * * * *
    * *       * *
   *   *     *   *
  *     *   *     *
 *       * *       *
* * * * * * * * * * *
*/
int main() {
    int n;
    std::cin >> n;
    // First row
    for (int i = 0; i < n - 1; i++) {
        std::cout << " ";
    }
    for (int i = 0; i < n; i++) {
        std::cout << "* ";
    }
    std::cout << "\n";
    // Middle rows
    int leftCornerPos = n;
    int leftLeftPos = leftCornerPos - 1;
    int rightLeftPos = leftCornerPos + 1;
    for (int j = 0; j < n - 2; j++) {
        for (int i = 1; i < 2 * n; i++) {
            if (i == leftLeftPos || i == rightLeftPos) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
        leftLeftPos--;
        rightLeftPos++;
    }
    // Last row
    for (int i = 0; i < 2*n-1; i++){
        std::cout << "* ";
    }
}
