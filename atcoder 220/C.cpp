#include <iostream>
#include <vector>

template<typename T>
void printVector(std::vector<T> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}

long long sumVector(std::vector<long long> v) {
    long long soma = 0;
    for (auto x : v) {
        soma += x;
    }
    return soma;
}

int main() {
    long long n;
    std::cin >> n;
    std::vector<long long> v;
    for (int i = 0; i < n; i++) {
        long long a;
        std::cin >> a;
        v.push_back(a);
    }
    long long x;
    std::cin >> x;
    long long soma = sumVector(v);
    long long vezes_percorrido = x/soma;
    long long total = vezes_percorrido * n;
    long long falta = x % soma;
    long long y = 0;
    for (int i = 0; i < n; i++) {
        y += v[i];
        total++;
        if (y > falta) break;
    }
    std::cout << total << "\n";
    return 0;
}