#ifndef aula45h1_h_Included
#define aula45h1_h_Included

#include <iostream>
#include <string>


class Aviao {

public:
    int vel = 0;
    int velMax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();
private:

};

Aviao::Aviao(int tp) {
    switch (tp) {
        case 1:
            this->velMax = 800;
            this->tipo = "Jato";
            break;
        case 2:
            this->velMax = 350;
            this->tipo = "Monomotor";
            break;
        case 3:
            this->velMax = 180;
            this->tipo = "Planador";
            break;
    }
}

void Aviao::imprimir() {
    std::cout << "Tipo: " << this->tipo << std::endl;
    std::cout << "Velocidade máxima: " << this->velMax << std::endl;
    std::cout << "Velocidade atual: " << this->vel << std::endl;
}

#endif