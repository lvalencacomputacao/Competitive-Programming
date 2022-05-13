#include <iostream>

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(std::string tra[4]);

int main(int argc, char* argv[]) {
    
    int res;
    std::string transp[4] = {"carro", "moto", "barco", "aviao"};

    soma(7, 3);
    res = soma2(175, 25);

    std::cout << "Valor de res: " << res << std::endl;

    tr(transp);

    for (int i = 0; i < 10; i++) {
        texto();
    }

    return 0;
}

void texto() {
    std::cout << "\nCanal Fessor Bruno\n";
}

void soma(int n1, int n2) {
    std::cout << "Soma dos valores: " <<  n1+n2 << "\n";
}

int soma2(int n1, int n2) {
    return n1+n2;
}

void tr(std::string tra[4]) {
    for (int i = 0; i < 4; i++) {
        std::cout << tra[i] << "\n";
    }
}