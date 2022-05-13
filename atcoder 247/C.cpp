#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

string seq(int n, string arr[]) {
    if (n == 1) return "1";
    if (arr[n] != "") return arr[n];
    string ans = seq(n-1, arr)+" "+to_string(n)+" "+seq(n-1, arr);
    arr[n] = ans;
    return arr[n];
}

int main() {
    int n;
    cin >> n;
    string arr[n+1];
    for (int i = 0; i < n+1; i++) {
        arr[i] = "";
    }
    string s = seq(n, arr);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}