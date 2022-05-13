#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    while (s.size() != 4) {
        s = '0' + s;
    }
    std::cout << s << "\n";
    return 0;
}