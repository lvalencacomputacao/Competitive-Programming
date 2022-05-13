#include <iostream>

class Aviao {

public:
    int vel = 0;
    int velMax;
    std::string tipo;
    void ini(int tp);

private:

};

void Aviao::ini(int tp) { //1=Jato, 2=Monomotor, 3=Planador
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

int main() {
    Aviao* aviao1 = new Aviao();
    aviao1->ini(1);
    std::cout << aviao1->velMax << "\n";
    return 0;
}