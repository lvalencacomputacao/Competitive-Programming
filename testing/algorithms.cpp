#include <bits/stdc++.h>

std::pair<int, int> mirror(int a, int b) {
    std::pair<int, int> p = {a, b};
    return p;
}

int main() {
    std::pair<int, int> p = mirror(3, 4);
    int x = p.first;
    int y = p.second;
    std::cout << x << " " << y << "\n";
    return 0;
}