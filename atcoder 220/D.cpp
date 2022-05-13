#include <bits/stdc++.h>

using namespace std;

#define INF 1e9+7
#define MOD 998244353
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll dp[n+1][10];
    memset(dp, 0, sizeof(dp));
    dp[1][a[1]] = 1;
    for (ll i = 1; i <= n-1; i++) {
        for (ll j = 0; j <= 9; j++) {
            dp[i+1][(j+a[i+1])%10] = (dp[i+1][j+a[i+1]%10] % MOD + dp[i][j] % MOD) % MOD;
            dp[i+1][(j*a[i+1])%10] = (dp[i+1][j*a[i+1]%10] % MOD + dp[i][j] % MOD) % MOD;
        }
    }
    for (ll K = 0; K <= 9; K++) {
        cout << dp[n][K] % MOD << "\n";
    }

    return 0;
}