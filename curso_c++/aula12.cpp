#include <iostream>

int main() {
    
    // (expressao) ? (valor1) : (valor2);

    int n1, n2, nota;
    std::string res;

    std::cout << "Digite a primeira nota: ";
    std::cin >> n1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> n2;

    nota = n1+n2;

    //res = (nota >= 60) ? ("Aprovado") : ("Reprovado");
    (nota >= 60) ? res="Aprovado" : res="Reprovado";

    std::cout << "\nSituacao do aluno: " << res << std::endl;

    int x;
    x = 5;

    std::cout << "Digite um valor: ";
    std::cin >> n1;
    (x >= 10) ? (x++) : (x--);

    std::cout << "Novo valor de X: " << x << "\n";

    return 0;
}