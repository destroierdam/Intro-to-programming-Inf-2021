#include <iostream>
/*
По дадени три цели числа a, b и c напишете булев израз, който определя 
дали съществува триъгълник с такива страни.

Пример

Вход:
3 4 5

Изход:
YES
*/
int main() {
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    bool firstCheck = a + b > c;
    bool secondCheck = b + c > a;
    bool thirdCheck = a + c > b;
    bool triangleExists = firstCheck && secondCheck && thirdCheck;

    std::cout << std::boolalpha << triangleExists << "\n";
    
    if (triangleExists) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
}
