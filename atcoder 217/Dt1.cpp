#include <bits/stdc++.h>

using namespace std;

#define INF 9999999
#define MOD 9999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, q;
    cin >> l >> q;
    set<int> s;
    s.insert(0);
    s.insert(l);
    int ans;
    rep(i, q) {
        int c, x;
        cin >> c >> x;
        if (c == 1) {
            s.insert(x);
        } else if (c == 2) {
            set<int>::iterator up = s.upper_bound(x);
            ans = *up;
            up--;
            ans -= *up;
            cout << ans << "\n";
        }
    }
    return 0;
}