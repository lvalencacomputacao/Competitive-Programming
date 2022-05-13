#include <iostream>

int teto(int a, int b);
int chao(int a, int b);

int main() {
    std::cout << (teto(4, 2)) << "\n";
    std::cout << (chao(4, 2)) << "\n";
    return 0;
}

int teto(int a, int b) {
    return (a+b-1)/b;
}

int chao(int a, int b) {
    return a / b;
}