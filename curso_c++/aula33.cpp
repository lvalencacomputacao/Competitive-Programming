#include <iostream>

struct Carro {
    std::string nome;
    std::string cor;
    int pot;
    int velMax;
    int vel;

    void insere(std::string stnome, std::string stcor, int stpot, int stvelMax) {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
        vel = 0;
    }

    void mostra() {
        std::cout << "Nome:............. " << nome << "\n";
        std::cout << "Cor:.............. " << cor << "\n";
        std::cout << "Potência:......... " << pot << "\n";
        std::cout << "Velocidade atual:. " << vel << "\n";
        std::cout << "Velocidade máxima: " << velMax << "\n\n";
    }

    void mudaVel(int mv) {
        vel = mv;
        if (vel > velMax) {
            vel = velMax;
        }
        if (vel < 0) {
            vel = 0;
        }
    }

};   // Note que termina com ;

struct Ponto {
    int x;
    int y;

    void insere(int x1, int y1) {
        x = x1;
        y = y1;
    }
};

int main() {

    Carro car1, car2, car3, car4, car5;
    Carro* carros = new Carro[5];

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot = 450;
    car1.velMax = 350;

    car2.nome = "Luxo";
    car2.cor = "Preto";
    car2.pot = 250;
    car2.velMax = 260;

    car3.insere("Relampago", "Vermelho", 600, 400);
    car3.mostra();


    std::cout << "Carro1:" << std::endl;
    std::cout << "Nome:............. " << car1.nome << "\n";
    std::cout << "Cor:.............. " << car1.cor << "\n";
    std::cout << "Potência:......... " << car1.pot << "\n";
    std::cout << "Velocidade máxima: " << car1.velMax << "\n";

    car3.mudaVel(50);
    std::cout << "\nCarro3:\n";
    car3.mostra();

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].insere("Tornado", "Vermelho", 450, 350);
    carros[1].insere("Luxo", "Preto", 250, 260);
    carros[2].insere("Familia", "Prata", 150, 180);
    carros[3].insere("Trabalho", "Branco", 80, 120);
    carros[4].insere("Padrao", "Cinza", 100, 150);

    for (int i = 0; i < 5; i++) {
        std::cout << "Carro: " << i+1 << "\n";
        carros[i].mostra();
    }

    Ponto ponto1;
    ponto1.insere(3, 4);
    std::cout << ponto1.x << "\n";

    return 0;
}