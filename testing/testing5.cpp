#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int power(int b, int e) {
    if (e == 0) return 1;
    if (e == 1) return b;
    int tmp = power(b, e/2);
    int result = tmp*tmp;
    if (e % 2 != 0) result *= b;
    return result;
}

std::vector<std::string> get_permutations(std::string s) {
    std::vector<std::string> v;
    bool c;
    do {
        v.push_back(s);
        c = std::next_permutation(s.begin(), s.end());
    }
    while (c);
    return v;
}

template <typename T>
void printVector(std::vector<T> v) {
    for (T x : v) {
        std::cout << x << "\n";
    }
} 

int main() {
    std::string s;
    std::cin >> s;
    printVector(get_permutations(s));
    return 0;
}