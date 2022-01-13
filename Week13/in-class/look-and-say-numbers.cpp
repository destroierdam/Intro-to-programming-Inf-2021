#include <iostream>
#include <cstring>

void append(char*& str, int number)
{
	int counter = 0;
	int reversed = 0;
	while(number > 0)
	{
		reversed *= 10;
		reversed += (number % 10);
		number /= 10;
		counter++;
	}
	char* newStr = new char[std::strlen(str)+1+counter];
	
	int index = 0;
	while(str[index] != '\0')
	{
		newStr[index] = str[index];
		index++;
	}

	for(int i = 0; i < counter;i++)
	{
		newStr[index] = reversed % 10 + '0';
		reversed /=10;
		index++;
	}
	newStr[index] = '\0';
	delete[] str;
	str = newStr;
}

void solve() {
	int size = 10;
	char** strings = new char*[size];
	strings[0] = new char[2];
	strings[0][0] = '1';
	strings[0][1] = '\0';
	for (int i = 1; i < size; i++) {
		strings[i] = new char[1];
		strings[i][0] = '\0';
	}

	for(int i = 1; i < size; i++){
		char* previous = strings[i-1];
		int indexInNew = 0;
		int indexPrevious = 1;
		char current = previous[0];
		int counter = 0;
		while(previous[indexPrevious+1] != '\0') 
		{
			counter++;
			if(previous[indexPrevious+1] != current || previous[indexPrevious + 1] == '\0')
			{
				append(strings[i], counter);
				append(strings[i], current - '0');
				indexInNew += 2;
				counter = 0;
			}
			current = previous[indexPrevious];
			indexPrevious++;
		}
		std::cout << strings[i] << std::endl;
	}
	//TODO: delete strings
}

int main() {
	solve();
}
/*
1
11
21
1211
111221
312211

*/
