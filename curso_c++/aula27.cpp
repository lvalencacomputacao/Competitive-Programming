#include <iostream>

int main() {

    enum armas {fuzil=100, revolver=8, rifle=12, escopeta=1};

    armas a1 = fuzil;
    armas a2 = revolver;

    std::cout << a1+a2 << "\n";


    return 0;
}