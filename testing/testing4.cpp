#include <iostream>
#define ll long long

int power(int b, int e) {
    if (e == 0) return 1;
    if (e == 1) return b;
    int tmp = power(b, e/2);
    if (e % 2 == 0) {
        return tmp*tmp;
    } else {
        return tmp*tmp*b;
    }
}

int main() {
    ll x, y;
    std::cin >> x >> y;
    std::cout << x*y << "\n";
    return 0;
}