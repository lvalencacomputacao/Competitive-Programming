#include <iostream>

int main() {
    int n, p;
    std::cin >> n >> p;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a < p) count++;
    }
    std::cout << count << std::endl;
    return 0;
}