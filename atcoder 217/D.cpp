#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 998244353
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, q;
    cin >> l >> q;
    set<int> s;
    set<int>::iterator up, down;
    int ans;
    s.insert(0);
    s.insert(l);
    while (q--) {
        int ci, xi;
        cin >> ci >> xi;
        if (ci == 1) {
            s.insert(xi);
        } else if (ci == 2) {
            up = s.upper_bound(xi);

            ans = *up;
            up--;
            ans -= *up;

            cout << ans << "\n";
        }
    }
    return 0;
}