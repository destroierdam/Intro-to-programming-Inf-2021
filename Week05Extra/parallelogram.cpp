#include <iostream>
/* Напишете програма, която по въведено нечетно число n, извежда успоредник заедно с две от височините му.
n = 3:
  * * * * * *
 **       **
* * * * * *
n = 5:
    ​* * * * * * * * * *
   ​**             *  *     
  ​* *             * *
​ *  *             **
* * * * * * * * * *
*/
int main() {
	int n;
	std::cin >> n;
	// First row
	for (int i = 0; i < n - 1; i++) {
		std::cout << " ";
	}
	for (int i = 0; i < 2 * n; i++) {
		std::cout << "* ";
	}
	std::cout << "\n";
	// Middle rows
	int leftSide = n - 1;
	int leftHeight = n;
	int rightHeight = 4 * n - 1;
	int rightSide = 5 * n - 3;
	for (int i = 0; i < n - 2; i++) {
		for (int j = 1; j <= 5 * n - 3; j++) {
			if (j == leftSide || j == leftHeight || j == rightHeight || j == rightSide) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		leftSide--;
		rightSide--;
		std::cout << "\n";
	}
	// Last row
	for (int i = 0; i < 2 * n; i++) {
		std::cout << "* ";
	}
}
