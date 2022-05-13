#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    if (s[n-2] == 'e' && s[n-1] == 'r') {
        std::cout << "er\n";
    } else {
        std::cout << "ist\n";
    }
    return 0;
}