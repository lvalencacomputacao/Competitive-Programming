#include <iostream>

int main() {

    int val;

    std::cout << "Selecione uma cor:\n";
    std::cout << "[1]=Verde, [2]=Azul, [3]=Vermelho\n";

    std::cin >> val;

    switch(val) {
        case 1:
            std::cout << "Cor selecionada: Verde\n";
            break;
        case 2:
            std::cout << "Cor selecionada: Azul\n";
            break;
        case 3:
            std::cout << "Cor selecionada: Vermelho\n";
        default:
            std::cout << "Valor selecionado inválido\n";
    }

    std::cout << "\n\nSelecione uma cor:\n";
    std::cout << "[1, 2, 3]=Verde, [4, 5, 6]=Azul\n";

    std::cin >> val;

    // Basicamente, os cases do switch funcionam como labels, que você pula baseado no valor de val. O valor de val é o
    // nome do label dos cases

    switch(val) {
        case 1:
        case 2:
        case 3:
            std::cout << "Cor selecionada: Verde\n";
            break;
        case 4:
        case 5:
        case 6:
            std::cout << "Cor selecionada: Azul\n";
            break;
        default:
            std::cout << "Valor selecionado inválido\n";
    }

    std::cout << "\n\nSelecione um transporte:\n";
    std::cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helicoptero\n";

    std::cin >> val;

    switch(val) {
        case 1:
        case 2:
            std::cout << "\nTransporte terrestre\n";
            switch(val) {
                case 1:
                    std::cout << "Carro selecionado\n";
                    break;
                case 2:
                    std::cout << "Moto selecionada\n";
                    break;
            }
            break;
        case 3:
        case 4:
            std::cout << "\nTransporte Aereo\n";
            switch(val) {
                case 3:
                    std::cout << "Aviao selecionado\n";
                    break;
                case 4:
                    std::cout << "Helicoptero selecionado\n";
                    break;
            }
            break;
    }

    std::cout << "Programa finalizado\n";

    return 0;
}