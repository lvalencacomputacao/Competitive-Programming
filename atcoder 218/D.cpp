#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 998244353
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    rep(i, n) {
        int xi, yi;
        cin >> xi >> yi;
        v.push_back(make_pair(xi, yi));
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                if (binary_search(v.begin(), v.end(), make_pair(v[i].first, v[j].second)) &&
                binary_search(v.begin(), v.end(), make_pair(v[j].first, v[i].second))) {
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}