#include <iostream>

int main() {
    int x = 3;
    int y = 4;
    int* p1 = &x;
    int* p2 = &y;
    std::cout << ++(*p1) << "\n";
    std::cout << p1 << " " << p2 << "\n";
    return 0;
}