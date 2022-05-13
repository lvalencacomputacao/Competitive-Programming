#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    string s;
    cin >> s;
    string s_result = "0";
    for (int i = 0; i < s.size()-1; i++) {
        s_result += s[i];
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s_result[i] << "";
    }
    cout << endl;
    return 0;
}