#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 9999999
#define ll long long
#define rep(i, n) for (int i = 1; i < n; i++)

int main() {
    int n;
    cin >> n;
    set<int> s;
    int area = 0;
    rep(a, 1001) {
        rep(b, 1001) {
            area = 3*a + 3*b + 4*a*b;
            s.insert(area);
            if (area > 1000) break;
        }
    }
    int total = 0;
    rep(i, n) {
        int a;
        cin >> a;
        if (s.find(a) == s.end()) {
            total++;
        }
    }
        cout << total << "\n";
    return 0;
}