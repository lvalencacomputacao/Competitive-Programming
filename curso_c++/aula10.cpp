#include <iostream>
#include <cstdlib>

int main() {

    int n1, n2, res;
    char opc;

    inicio:

    std::cout << "Digite o valor da nota 1: ";
    std::cin >> n1;
    std::cout << "Digite o valor da nota 2: ";
    std::cin >> n2;

    res = n1+n2;

    /*
        >= 60 Aprovado
        >= 40 e < 60 Recuperação
        < 40 Reprovado
    */

    if (res >= 60) {
        std::cout << "\n\n Aluno Aprovado\n";
    } else if (res >= 40) {
        std::cout << "Aluno Recuperação\n";
    } else {
        std::cout << "\nAluno Reprovado\n";
    }

    std::cout << "\nDigitar outras notas?[s/n]: ";
    std::cin >> opc;

    if (opc == 's' || opc == 'S') {
        goto inicio;
    }

    return 0;
}