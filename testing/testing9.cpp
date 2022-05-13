#include <iostream>
#define ll long long

int main() {
    ll n, m;
    std::cin >> n >> m;
    ll b[n][m];
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            std::cin >> b[i][j];
        }
    }
    ll v = b[0][0];
    bool c = true;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (b[i][j] != v) c = false;
            v++;
        }
        v += (7-m);
    }
    std::string ans = (c) ? ("Yes") : ("No");
    std::cout << ans << std::endl;
    return 0;
}