#include <iostream>
#include "aula46h1.h"

int main() {

    Veiculo* v1 = new Veiculo(1);
    std::cout << v1->getVelMax() << "\n";

    v1->setVelMax(500);
    std::cout << v1->getVelMax() << "\n";
    return 0;
}