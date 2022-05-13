#include <bits/stdc++.h>

using namespace std;

#define INF 9999999
#define MOD 9999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    int ans = 0;
    rep(i, n) {
        rep(j, n) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                ans += (binary_search(v.begin(), v.end(), make_pair(v[i].first, v[j].second)) &&
                binary_search(v.begin(), v.end(), make_pair(v[j].first, v[i].second)));
            }
        }
    }
    cout << ans << endl;
    return 0;
}