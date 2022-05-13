#include <iostream>

int main() {
    double x;
    std::cin >> x;
    int x_int = (int) x;
    if (x-x_int >= 0.5) x_int++;
    std::cout << x_int << "\n";
    return 0;
}