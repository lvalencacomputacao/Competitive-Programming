#include <iostream>
#define ll long long

ll fib(ll n, ll visited[]);

int main() {
    ll n;
    std::cin >> n;
    ll visited[2000];
    for (int i = 0; i < 2000; i++) {
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        //std::cout << "i : " << i << "\n";
        std::cout << fib(i, visited) << "\n";
    }
    return 0;
}

ll fib(ll n, ll visited[]) {
    if (n == 0 || n == 1) return n;
    if (visited[n]) return visited[n];
    visited[n] = fib(n-1, visited)+fib(n-2, visited);
    return visited[n];
}