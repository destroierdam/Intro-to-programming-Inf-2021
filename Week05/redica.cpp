#include <iostream>
/*

Нека имаме редица от естествени числа, в която всяко число присъства толкова пъти колкото самото то, 
тоест редицата 

1 2 2 3 3 3 4 4 4 4 и тка нататъка. По подадено число N изкарайте първите N члена на редицата.

5 -> 1 2 2 3 3
*/
int main() {
    
    int n, counter = 0;
    std::cin >> n;
    /* // Reshenie na Antoan
    for(int i = 0; i < n; i++){
        for(int j = n - i; j < n; j++){
            std::cout << i << " ";
            counter++;
            if (counter == n) {
                return 0;
            }
        }
    }
    */
    bool continueLoop = true;

    for (int i = 1; ; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << i << " ";
            counter++;
            if (counter == n) {
                continueLoop = false;
                break;
            }
        }
        if (continueLoop == false) {
            break;
        }
    }
    std::cout << "Gotina zadacha\n";
}
