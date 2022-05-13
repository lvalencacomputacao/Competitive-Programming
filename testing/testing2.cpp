#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

template<typename T>
void printVector(std::vector<T> v) {
    for (int& e : v) {
        std::cout << e << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> num1;
    std::vector<int> num2;
    int tam, i;
    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);

    //num1.swap(num2);
    tam = num1.size();
    std::cout << tam << std::endl;

    for (i = 0; i < tam; i++) {
        std::cout << num1.at(i) << " ";
    }
    std::cout << std::endl;
    for (i = 0; i < num2.size(); i++) {
        std::cout << num2.at(i) << " ";
    }
    std::cout << std::endl;
    std::cout << num1.front() << "\n";
    std::cout << num1.back() << "\n";

    num1.erase(num1.begin());
    printVector(num1);

    while (!num1.empty()) {
        std::cout << num1.back() << "\n";
        num1.pop_back();
    }
    
    num2.clear();

    std::cout << "\n\n\n";

    std::map<int, std::string> m;
    std::map<int, std::string>::iterator itmap;

    m[5] = "alo";
    m.insert(std::pair<int, std::string>(3, "ola"));

    for (std::map<int, std::string>::iterator it = m.begin(); it != m.end(); it++) {
        std::cout << it->first << " " << it->second << std::endl;
    }

    itmap = m.find(4);
    if (itmap == m.end()) {
        std::cout << "Valor não encontrado" << "\n";
    } else {
        std::cout << "Valor encontrado" << "\n";
        std::cout << itmap->second << "\n";
    }

    return 0;
}