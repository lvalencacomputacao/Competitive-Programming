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
    bool c = true;
    // valor pelas colunas tem que aumentar de 1 em 1
    for (ll i = 0; i < n; i++) {
        for (ll j = 1; j < m; j++) {
            if (b[i][j] != b[i][j-1]+1) c = false;
        }
    }
    // valor pelas linhas tem que aumentar de 7 em 7
    for (ll i = 1; i < n; i++) {
        if (b[i][0] != b[i-1][0]+7) c = false;
    }
    // linha 0 de a deve coincidir com linha 0 de b
    ll pos_linha_a = (b[0][0]-1) / 7;
    ll pos_coluna_a = (b[0][0]-1) % 7;
    ll valor_linha_a = pos_linha_a * 7 + 1;
    bool c1 = false, c2 = false;
    for (int i = valor_linha_a; i < valor_linha_a+7; i++) {
        if (i == b[0][0]) c1 = true;
        if (i == b[0][m-1]) c2 = true;
    }
    if (!c1 || !c2) c = false;
    std::string ans = (c) ? ("Yes") : ("No");
    std::cout << ans << std::endl;
    return 0;
}