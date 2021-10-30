#include <iostream>

/*
Имаме n броя пулове. Можем ли да ги поставим всичките по ръбовете без ъглите на квадратна дъска, разграфена на квадратчета, с някакъв размер? Например, ако имаме 4 пула, можем да ги поставим на дъска 2 х 2, но ако имаме 10 пула, не можем да ги поставим на какъвто и да е размер дъска.

По дадени n броя пулове определете дали съществува дъска с някакъв размер, на чийто ръбове могат да бъдат сложени точно n броя пулове.

Примери

Вход: 20

Изход: YES

Вход: 13

Изход: NO
*/

int main() {
    int checkers;
    std::cout << "Your checkers are ";
    std::cin >> checkers;
    bool isPossible = checkers % 4 == 0 || checkers == 1;

    if (isPossible) {
        std::cout << "yes\n";
    }
    else {
        std::cout << "no\n";
    }
    // Alternative
    if (checkers == 1) {
        std::cout << "yes, checkers is 1\n";
    }
    else if (checkers % 4 == 0) {
        std::cout << "yes\n";
    }
    else {
        std::cout << "no\n";
    }

}
/* Hint
1 -> 1
2 -> 4 == 1 * 4

5
7

3 -> 8 == 2 * 4

10

4 -> 12 == 3 * 4

15
*/