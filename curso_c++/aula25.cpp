#include <iostream>

void contador(int num, int cont=0);

int main() {
    contador(3);
    return 0;
}

void contador(int num, int cont) {
    std::cout << cont << "\n";
    if (cont != num) {
        contador(num, cont+1);
    }
}