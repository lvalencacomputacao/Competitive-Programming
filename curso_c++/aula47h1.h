#ifndef aula47h1_h
#define aula47h1_h

#include <iostream>
#include <vector>

class Veiculo {
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();
private:
    int tipo;
    int velMax;
    bool arma;
};

class Moto:public Veiculo {
public:
    Moto();
private:
};

class Carro: public Veiculo {
public:
    Carro();
private:
};

class Tanque: public Veiculo {
public:
    Tanque();
private:
};

// Métodos veículo:
void Veiculo::imp() {
    std::cout << "Velocidade: " << this->vel << "\n";
    std::cout << "Blindagem: " << this->blind << "\n";
    std::cout << "Rodas: " << this->rodas << "\n";
    std::cout << "Tipo: " << this->tipo << "\n";
    std::cout << "Velocidade Máxima: " << this->velMax << "\n";
    std::cout << "Condição de armamento: " << this->arma << "\n";
}

void Veiculo::setTipo(int tp) {
    this->tipo = tp;
}
void Veiculo::setVelMax(int vm) {
    this->velMax = vm;
}
void Veiculo::setArma(bool ar) {
    this->arma = ar;
}

// Métodos Moto
Moto::Moto() {
    this->vel = 0;
    this->blind = 0;
    this->rodas = 2;
    this->setTipo(1);
    this->setVelMax(120);
    this->setArma(false);
}

// Métodos Carro
Carro::Carro() {
    this->vel = 0;
    this->blind = 0;
    this-> rodas  = 4;
    this->setTipo(2);
    this->setVelMax(120);
    this->setArma(false);
}

// Métodos tanque
Tanque::Tanque() {
    this->vel = 0;
    this->blind = 1;
    this->rodas = 8;
    this->setTipo(4);
    this->setVelMax(200);
    this->setArma(false);
}

#endif