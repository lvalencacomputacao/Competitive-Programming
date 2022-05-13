#include <iostream>

int main() {
    long long k;
    std::cin >> k;
    long long a, b;
    std::cin >> a >> b;
    long long a_base10 = 0, b_base10 = 0;
    long long value = 1;
    while (a) {
        long long digito = a % 10;
        a /= 10;
        a_base10 += digito*value;
        value *= k;
    }
    value = 1;
    while (b) {
        long long digito = b % 10;
        b /= 10;
        b_base10 += digito*value;
        value *= k;
    }
    std::cout << a_base10*b_base10 << "\n";
    return 0;
}