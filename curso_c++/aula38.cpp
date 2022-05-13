#include <iostream>

void somar(float* var, float valor);
void iniVetor(float* v);

int main() {

    float num = 0;
    std::cout << num << "\n";

    somar(&num, 15);
    std::cout << num << "\n";

    float vetor[5];
    iniVetor(vetor);

    for (int i = 0; i < 5; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void somar(float* var, float valor) {
    *var += valor;
}

void iniVetor(float* v) {
    v[0] = 5;
    v[1] = 5;
    v[2] = 5;
    v[3] = 5;
    v[4] = 4;
}