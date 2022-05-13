#include <iostream>
#include <queue>

int main() {

    std::queue<std::string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    std::cout << "Tamanho da fila: " << cartas.size() << "\n";
    std::cout << "Primeira Carta: " << cartas.front() << "\n";
    std::cout << "Última carta: " << cartas.back() << "\n";

    while (!cartas.empty()) {
        std::cout << "Primeira Carta: " << cartas.front() << "\n";
        cartas.pop();
    }

    /*
    empty
    size
    front
    back
    push
    pop
    */
}