#include <iostream>
#include <vector>
#define ll long long

template <typename T>
void printVector(std::vector<T> v) {
    for (T x : v) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

ll solve(ll n, std::vector<std::vector<ll>> requirements, std::vector<ll> time, std::vector<bool>& visited) {
    if (n == 0) return 0;
    std::cout << "n: " << n << "\n";
    std::cout << "tempo: " << time[n-1] << "\n";
    ll total = time[n-1];
    for (ll i = 0; i < requirements[n-1].size(); i++) {
        std::cout << "i: " << i << "\n";
        std::cout << "requirement: " << requirements[n-1][i] << "\n";
        printVector(visited);
        if (!visited[requirements[n-1][i]]) {
            total += solve(requirements[n-1][i], requirements, time, visited);
            visited[requirements[n-1][i]] = true;
        }
    }
    return total;
}

int main() {
    ll n;
    std::cin >> n;
    std::vector<bool> visited(n, false);
    std::vector<std::vector<ll>> requirements;
    std::vector<ll> time;
    for (ll i = 0; i < n; i++) {
        ll ti, ki;
        std::cin >> ti >> ki;
        time.push_back(ti);
        std::vector<ll> to_add;
        for (ll j = 0; j < ki; j++) {
            ll a;
            std::cin >> a;
            to_add.push_back(a);
        }
        requirements.push_back(to_add);
    }

    ll total = solve(n, requirements, time, visited);
    std::cout << total << "\n";
    return 0;
}