#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    if (s[s.size()-2] == 'e' && s[s.size()-1] == 'r') {
        std::cout << "er\n";
    } else { // A string sempre termina com er ou ist, entao nao ha necessidade de checar
        std::cout << "ist\n";
    }
    return 0;
}