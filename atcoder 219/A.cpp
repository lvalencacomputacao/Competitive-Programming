#include <iostream>
#include <string>

int main() {
    int x;
    std::cin >> x;
    if (x >= 0 && x < 40) {
        std::cout << 40-x << "\n";
    } else if (x >= 40 && x < 70) {
        std::cout << 70-x << "\n";
    } else if (x >= 70 && x < 90) {
        std::cout << 90-x << "\n";
    } else {
        std::cout << "expert" << "\n";
    }
    return 0;
}