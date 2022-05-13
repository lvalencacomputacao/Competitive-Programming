#include <iostream>
#include <string>

int main() {
    std::string s = "";
    for (int i = 0; i < 26; i++) {
        int pi;
        std::cin >> pi;
        char c = 96+pi;
        s += c;
    }
    std::cout << s << "\n";
    return 0;
}