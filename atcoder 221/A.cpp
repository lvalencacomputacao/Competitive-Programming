#include <iostream>

long long power(long long base, long long exp) {
    long long ans = 1;
    for (int i = 0; i < exp; i++) {
        ans *= base;
    }
    return ans;
}

int main() {
    long long a, b;
    std::cin >> a >> b;
    std::cout << power(32, a-b) << "\n";
}