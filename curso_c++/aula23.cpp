#include <iostream>

void soma();
void soma(int n1, int n2);

int main() {
    soma();
    soma(3, 4);
    return 0;
}

void soma(int n1, int n2) {
    int re = n1+n2;
    std::cout << "Soma de " << n1 << " com " << n2 << " = " << re << "\n";
}

void soma() {
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1+n2;
    std::cout << "Soma de " << n1 << " com " << n2 << " = " << re << "\n";
}