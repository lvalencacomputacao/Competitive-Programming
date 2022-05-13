#include <iostream>

int main() {
    std::string veiculo = "Carro";
    std::string* pv;

    pv = &veiculo; //operador de endereço

    std::cout << "Endereço: " << pv << std::endl;
    std::cout << "Valor: " << *pv << std::endl;

    std::cout << veiculo << std::endl;

    std::cout << "\n\n\n";

    return 0;
}