#include <iostream>
#include "aula47h1.h"

int main() {
    Moto* v1 = new Moto();
    Carro* v2 = new Carro();
    Tanque* v3 = new Tanque();

    v1->imp();
    std::cout << std::endl;
    v2->imp();
    std::cout << std::endl;
    v3->imp();
    return 0;
}