#ifndef aula46h1_h_included
#define aula46h1_h_included

#include <iostream>

class Veiculo {
public:
    int velMax;
    int tipo;
    Veiculo(int tp);
    int getVelMax();
    void setVelMax(int vm);
private:
    std::string nome;
    int vel;
    bool ligado;
};

Veiculo::Veiculo(int tp) {
    this->tipo = tp;
    switch (tipo) {
        case 1:
            this->nome = "Carro";
            this->velMax = 200;
            break;
        case 2:
            this->nome = "Aviao";
            this->velMax = 800;
            break;
        case 3:
            this->nome = "Navio";
            this->velMax = 120;
            break;
    }
}

int Veiculo::getVelMax() {
    return this->velMax;
}

void Veiculo::setVelMax(int vm) {
    this->velMax = vm;
}

#endif