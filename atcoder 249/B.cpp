#include <bits/stdc++.h>

using namespace std;

#define INF 99999999
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define N 400

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool hasUp = false, hasDown = false;
    set<char> S;
    string s;
    cin >> s;
    rep(i, s.size()) {
        if (s[i] >= 65 && s[i] <= 90) {
            hasUp = true;
        }
    }
    rep(i, s.size()) {
        if (s[i] >= 97 && s[i] <= 122) {
            hasDown = true;
        }
    }
    rep(i, s.size()) {
        S.insert(s[i]);
    }
    if (hasUp && hasDown && S.size() == s.size()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}