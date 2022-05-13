#include <iostream>

int main() {
    int num=10;
    std::cout << -num << "\n\n";
    num *= -1;
    std::cout << num << "\n\n";
    std::cout << -num << "\n\n";
    num = -num;
    std::cout << num << "\n\n";
    std::cout << -num << "\n\n";
    return 0;
}