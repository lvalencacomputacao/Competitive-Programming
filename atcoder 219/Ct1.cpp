#include <bits/stdc++.h>

using namespace std;

#define INF 99999999
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    string s;
    cin >> s;
    int x;
    cin >> x;
    vector<string> v;
    map<char, int> m;
    vector<string> v_normal;
    map<string, string> convert;
    rep(i, x) {
        string s1;
        cin >> s1;
        v.push_back(s1);
    }
    rep(i, 26) {
        m[s[i]] = i;
    }
    rep(i, x) {
        string now = v[i];
        string to_be = "";
        for (char c : now) {
            char new_c = (m[c]+97);
            to_be += new_c;
        }
        v_normal.push_back(to_be);
    }
    rep(i, x) {
        convert[v_normal[i]] = v[i];
    }
    sort(v_normal.begin(), v_normal.end());
    rep(i, x) {
        cout << convert[v_normal[i]] << endl;
    }
    return 0;
}