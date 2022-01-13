#include <iostream>
#include <cstring>

void appendIntDigitAsChar(char*& str, int digit) {
    if (str == nullptr) {
        str = new char[2];
        str[0] = digit + '0';
        str[1] = '\0';
        return;
    }
    size_t length = std::strlen(str);
    char* newStr = new char[length + 1 + 1];
    for (size_t i = 0; str[i] != '\0'; i++) {
        newStr[i] = str[i];
    }
    newStr[length] = digit + '0';
    newStr[length + 1] = '\0';
    delete[] str;
    str = newStr;
}

void appendNumberAsString(char*& str, long long int number) {
    long long int reversed = 0;
    int numberLength = 0;
    while (number != 0) {
        reversed *= 10;
        reversed += number % 10;
        numberLength++;
        number /= 10;
    }

    if (str == nullptr) {
        str = new char[numberLength + 1];
        for (int i = 0; i < numberLength; i++) {
            str[i] = reversed % 10 + '0';
            reversed /= 10;
        }
        str[numberLength] = '\0';
        return;
    }

    size_t length = std::strlen(str);
    char* newStr = new char[length + 1 + numberLength];
    for (size_t i = 0; str[i] != '\0'; i++) {
        newStr[i] = str[i];
    }

    for (int i = 0; i < numberLength; i++) {
        str[i] = reversed % 10 + '0';
        reversed /= 10;
    }

    newStr[length + numberLength] = '\0';
    
    delete[] str;
    str = newStr;
}

char** generate_lookAndSay(int size) {
    char** sequence = new char* [size];
    sequence[0] = new char[2];
	
    sequence[0][0] = '1';
    sequence[0][1] = '\0';
    for (size_t i = 1; i < size; i++) {
        sequence[i] = nullptr;
    }

    for (size_t i = 1; i < size; i++) {
        char* previousNumber = sequence[i - 1];
        int repeatingDigit = previousNumber[0] - '0';
        int timesRepeating = 1;
        for (size_t j = 1; previousNumber[j] != '\0'; j++) {
            int digit = previousNumber[j] - '0';
            if (digit != repeatingDigit) {
                appendIntDigitAsChar(sequence[i], timesRepeating);
                appendIntDigitAsChar(sequence[i], repeatingDigit);
                repeatingDigit = digit;
                timesRepeating = 1;
            }
            else {
                timesRepeating++;
            }
        }
        appendNumberAsString(sequence[i], timesRepeating);
        appendIntDigitAsChar(sequence[i], repeatingDigit);
    }

    return sequence;
}

void solveLookAndSay() {
    size_t sequenceLength = 10;
    char** sequence = generate_lookAndSay(sequenceLength);
    for (size_t i = 0; i < sequenceLength; i++) {
        std::cout << sequence[i] << "\n";
        delete[] sequence[i];
    }
    delete[] sequence;
}

int main() {
    while (true) {
        solveLookAndSay();
    }
}