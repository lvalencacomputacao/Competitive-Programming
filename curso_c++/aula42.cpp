#include <iostream>
#include <vector>

int main() {
    std::vector<int> num1;
    std::vector<int> num2;
    int tam1, tam2, i;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    num1.insert(num1.end(), 888);
    num1.erase(num1.end()-1);

    tam1 = num1.size();
    tam2 = num2.size();

    std::cout << "Primeiro valor de num1: " << num1.front() << "\n";
    std::cout << "Ultimo  valor de num1: " << num1.back() << "\n";
    std::cout << "Valor do meio: " << num1.at(tam1/2) << "\n";

    std::cout << "Tamanho do vector num1: " << tam1 << "\n";

    for (int i = 0; i < tam1; i++) {
        std::cout << num1[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < tam2; i++) {
        std::cout << num2[i] << " ";
    }
    std::cout << "\n";

    /*
        push_back
        pop_back
        front
        back
        empty
        size
        insert
        erase
        clear
        sort
        swap
        at
    */

    return 0;
}