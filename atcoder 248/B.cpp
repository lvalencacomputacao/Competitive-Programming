#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    ll tot = 0;
    while (a < b) {
        a *= k;
        tot++;
    }
    cout << tot << "\n";
    return 0;
}