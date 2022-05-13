#include <iostream>

int main() {
    char palavra[7] = {'a', 'b', 'o', 'b', 'o', 'r', 'a'};
    bool correct[7] = {false, false, false, false, false, false, false};
    int vidas = 5;
    bool gaming = true, won = false;
    while (gaming) {
        // mostra as letras já achadas
        std::cout << "\nPalavra, por enquanto: \n";
        for (int i = 0; i < 7; i++) {
            if (correct[i]) {
                std::cout << palavra[i] << " ";
            } else {
                std::cout << " " << " ";
            }
        }
        std::cout << "\n\n";
        char letra_chutada;
        bool safe = false;
        std::cout << "Chute uma letra: ";
        std::cin >> letra_chutada;
        for (int i = 0; i < 7; i++) {
            if (letra_chutada == palavra[i]) {
                correct[i] = true;
                safe = true;
            }
        }
        std::cout << "\n\n";
        if (!safe) {
            vidas--;
        }
        //testes de término de jogo
        int correct_letters = 0;
        if (vidas <= 0) {
            gaming = false;
        }
        for (int i = 0; i < 7; i++) {
            if (correct[i]) {
                correct_letters++;
            }
        }
        if (correct_letters == 7) {
            won = true;
            gaming = false;
        }
    }
    if (won) {
        std::cout << "Você ganhou :)" << "\n";
        std::cout << "A palavra era ";
        for (int i = 0; i < 7; i++) {
            std::cout << palavra[i];
        }
        std::cout << "\n";
    } else {
        std::cout << "Você perdeu :(" << "\n";
        std::cout << "A palavra era ";
        for (int i = 0; i < 7; i++) {
            std::cout << palavra[i];
        }
        std::cout << "\n";
    }
    return 0;
}