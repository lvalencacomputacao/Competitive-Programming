#include <iostream>

int fib(int n);
int fat(int n);

int main() {
    std::cout << fib(7) << "\n";
    std::cout << fat(5) << "\n";
    return 0;
}

int fib(int n) {
    if (n == 0 || n == 1) return n;
    return fib(n-1)+fib(n-2);
}
int fat(int n) {
    if (n == 0) return 1;
    return n*fat(n-1);
}
