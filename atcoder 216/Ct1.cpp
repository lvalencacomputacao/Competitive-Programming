#include <bits/stdc++.h>

using namespace std;

#define INF 99999999
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    string inv = "";
    while (n) {
        if (n%2 == 0) {
            inv += 'B';
            n /= 2;
        } else {
            inv += 'A';
            n--;
        }
    }
    string ans = "";
    for (int i = inv.size()-1; i >= 0; i--) {
        ans += inv[i];
    }
    cout << ans << "\n";
    return 0;
}