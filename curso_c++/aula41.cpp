#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

int main() {
    float pi = M_PI;
    printf("Valor do pi: %.1f\n", pi);

    int num=50000;
    printf("Valor de NUM: %07d", num);

    num=15;
    std::cout << "Valor de NUM em dec: " << num << std::endl;
    std::cout << "Valor de NUM em hex: " << std::hex << num << std::endl;
    std::cout << "Valor de NUM em oct: " << std::oct << num << std::endl;
    std::cout << "Valor de NUM em dec (forma geral): " << std::dec << num << std::endl;
    std::cout << "Valor de NUM na base base: " << std::setbase(16) << num << std::endl;

    std::cout << "Valor de pi: " << std::setprecision(3) << pi << "\n";
    std::cout.precision(30);
    std::cout << "Valor de pi: " << pi << "\n";
    std::cout.precision(-1); // faz voltar ao normal

    std::cout << "Valor de pi: " << std::scientific << pi << "\n";

    std::cout << "\n\n\n";

    num = 30;
    std::cout << 3.1 << "\n";
    std::cout << "Valor de NUM: " << std::setw(10) << num << "\n";


    return 0;
}