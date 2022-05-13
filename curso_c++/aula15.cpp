#include <iostream>

int main() {
    int cont;

    cont = 0;
    while (cont < 1000) {
        std::cout << cont << "\n";
        if (cont == 200) {
            break;
        }
        cont++;
    }
    return 0;
}