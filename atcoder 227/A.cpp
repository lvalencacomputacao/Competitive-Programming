#include <bits/stdc++.h>

using namespace std;

#define N 1000
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    cout << (k+a-2)%n+1 << "\n";
    return 0;
}