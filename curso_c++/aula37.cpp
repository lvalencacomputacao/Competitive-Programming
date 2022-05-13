#include <iostream>

int main() {

    int* p;
    int vetor[10];

    p = vetor;  //p=&vetor[0]

    std::cout << "\n" << p << "\n";
    std::cout << "\n" << p+1 << "\n";

    *p = 10;
    std::cout << "\n" << vetor[0] << "\n";

    p++;
    *p=20;
    std::cout << "\n" << vetor[1] << "\n";

    p++;
    *p = 30;
    std::cout << "\n" << vetor[2] << "\n";

    return 0;
}