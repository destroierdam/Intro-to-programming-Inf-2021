#include <iostream>

int strcmp_safe(const char str[], int strSizeInBytes, const char str2[], int str2SizeInBytes) {

	for (int i = 0;(i < strSizeInBytes && i < str2SizeInBytes) && (str[i] != '\0' || str2[i] != '\0'); i++) {

		if (str[i] < str2[i]) {
			return -1;
		} else if (str[i] > str2[i]) {
			return 1;
		}
	}

	return 0;
}

int main() {
	char str[40] = "ABC";
	char str2[10] = "ABCA";

	std::cout << strcmp_safe(str, sizeof(str), str2, sizeof(str2));

	return 0;
}
