#include <iostream>
#include <cstring>

int strlen_safe(const char str[], int sizeInBytes) {
	int length = 0, i;
	for(i = 0; i < sizeInBytes && str[i] != '\0'; i++){
		length++;
	}
	if (i == sizeInBytes) {
		std::cout << "No NULL character found\n";
	}

	return length;
}

int main() {
	char str[3] = "He";
	str[2] = '!';
	std::cout << str << "\n";
	std::cout << strlen_safe(str, sizeof(str)) << "\n";

	return 0;
}

/*
## Безопасни функции
Имплементирайте безопасни версии на функциите strlen, strcmp, strcpy, strcat и strstr от библиотеката cstring.
Безопасните функции не трябва нито да четат нито да пишат извън границите на масивите от низове, с които работят.
При записване на символни низове или целият низ трябва да бъде записан или да не бъде записан изобщо.

*/