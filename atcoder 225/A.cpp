#include <iostream>

int main() {
    std::string s;
    std::cin>> s;
    if (s[0] == s[1] && s[1] == s[2]) {
        std::cout << 1 << "\n";
    } else if (s[0] == s[1] || s[0] == s[2] || s[1] == s[2]) {
        std::cout << 3 << "\n";
    } else {
        std::cout << 6 << "\n";
    }
    return 0;
}