#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)


int main() {
    string s;
    cin >> s;
    string s_tobe = "";
    bool f = false;
    for (int i = 0; i < 10; i++) {
        s_tobe += "oxx";
    }
    if (s_tobe.find(s) != string::npos) f = true;
    string ans = (f) ? ("Yes") : ("No");
    cout << ans << "\n";
    return 0;
}