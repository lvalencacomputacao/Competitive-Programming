#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector<pair<string, string>> v;
    map<string, int> cont;
    for (int i = 0; i < n; i++) {
        pair<string, string> p;
        string si, st;
        cin >> si >> st;
        p.first = si;
        p.second = st;
        v.push_back(p);
        if (si == st) {
            cont[si]++;
        }
        else {
            cont[si]++;
            cont[st]++;
        }
    }
    bool c = true;
    for (int i = 0; i < n; i++) {
        string si, st;
        si = v[i].first;
        st = v[i].second;
        if (cont[si] > 1 && cont[st] > 1) {
            c = false;
        }
    }
    string ans = (c) ? ("Yes") : ("No");
    cout << ans << "\n";
    return 0;
}