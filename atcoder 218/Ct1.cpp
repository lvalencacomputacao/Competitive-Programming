#include <bits/stdc++.h>

using namespace std;

#define INF 9999999
#define MOD 9999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int cont(vector<vector<char>> v) {
    int n = v.size();
    int ans = 0;
    rep(i, n) {
        rep(j, n) {
            if (v[i][j] == '#') {
                ans++;
            }
        }
    }
    return ans;
}

vector<vector<char>> rot(vector<vector<char>> v) {
    vector<vector<char>> w;
    int n = v.size();
    rep(i, n) {
        vector<char> row;
        rep(j, n) {
            row.push_back(v[j][n-1-i]);
        }
        w.push_back(row);
    }
    return w;
}

pair<int, int> find_first(vector<vector<char>> m) {
    int n = m.size();
    rep(i, n) {
        rep(j, n) {
            if (m[i][j] == '#') {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(INF, INF);
}

bool match(vector<vector<char>> m1, vector<vector<char>> m2) {
    int n = m1.size();
    pair<int, int> p1 = find_first(m1);
    pair<int, int> p2 = find_first(m2);
    int dx = p2.first - p1.first;
    int dy = p2.second - p1.second;
    rep(i, n) {
        rep(j, n) {
            if (m1[i][j] == '#') {
                if (!(i+dx < n && i+dx >= 0 && j+dy < n && j+dy >= 0 && m2[i+dx][j+dy] == '#')) {
                    return false;
                }
            }
        }
    }
    if (cont(m1) != cont(m2)) {
        return false;
    }
    return true;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<char>> v;
    rep(i, n) {
        string s;
        cin >> s;
        vector<char> row;
        rep(j, n) {
            row.push_back(s[j]);
        }
        v.push_back(row);
    }
    vector<vector<char>> target;
    rep(i, n) {
        string s;
        cin >> s;
        vector<char> row;
        rep(j, n) {
            row.push_back(s[j]);
        }
        target.push_back(row);
    }
    vector<vector<char>> m1 = v;
    vector<vector<char>> m2 = rot(m1);
    vector<vector<char>> m3 = rot(m2);
    vector<vector<char>> m4 = rot(m3);
    if (match(m1, target) || match(m2, target) || match(m3, target) || match(m4, target)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}