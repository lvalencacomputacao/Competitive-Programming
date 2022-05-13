#include <iostream>
#include <stack>

int main() {

    std::stack<std::string> cartas;
    cartas.push("rei de Copas");
    cartas.push("rei de Espadas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus"); 

    std::cout << "Tamanho da pilha: " << cartas.size() << "\n";

    std::cout << "Carta do topo: " << cartas.top() << "\n";

    cartas.pop();
    cartas.pop();

    std::cout << "Nova carta do topo: " << cartas.top() << "\n";

    std::cout << "Tamanho da pilha: " << cartas.size() << "\n";

    if (cartas.empty()) {
        std::cout << "Pilha vazia\n\n";
    } else {
        std::cout << "Pilha com cartas\n\n";
    }

    while (!cartas.empty()) cartas.pop();

    std::cout << "Tamanho da pilha: " << cartas.size() << "\n";

    /*
    push
    pop
    empty
    size
    top
    */

    return 0;
}