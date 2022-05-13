#include <iostream>

int main() {
    int vetor[5];

    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    std::cout << vetor+1 << "\n";

    for (int i = 0; i < 5; i++) {
        std::cout << vetor[i] << "\n";
    }
    for (int i = 0; i < sizeof(vetor)/sizeof(int); i++) {
        std::cout << vetor[i] << "\n";
    }

    int vetor2[7] = {10, 20, 30, 40, 50}; // Valores posteriores ao de indice 4, já vem com valor 0
    std::cout << vetor2[5] << "\n";

    // Maximum array size: 65536 bytes

    return 0;
}