#include <bits/stdc++.h>

using namespace std;

#define INF 99999999
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define N 400

vector<string> v;

vector<string> get_all(int n) {
    int b = 0;
    vector<string> result;
    for (int b = 0; b < (1<<n); b++) {
        string s1 = "";
        for (int i = 0; i < n; i++) {
            if (b&(1<<i)) {
                s1 += v[i];
            }
        }
        result.push_back(s1);
    }
    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    rep(i, n) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<string> words = get_all(n);
    int mg = 0, ml = 0;
    char inicial = 'a';
    for (string word : words) {
        map<char, int> m;
        ml = 0;
        for (char c : word) {
            m[c]++;
        }
        for (pair<char, int> p : m) {
            if (p.second == k) {
                ml++;
            }
        }
        mg = max(mg, ml);
    }
    cout << mg << endl;
    return 0;
}