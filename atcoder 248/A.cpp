#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    bool A[10];
    rep(i, 10) A[i] = false;
    string s;
    cin >> s;
    rep(i, 9) A[s[i]-'0'] = true;
    rep(i, 10) {
        if (A[i] == false) {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}