#include <iostream>
#include <algorithm>

int main() {
    short a, b, c;
    std::cin >> a >> b >> c;
    short value = -1;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            value = i;
        }
    }
    std::cout << value << "\n";
    return 0;
}