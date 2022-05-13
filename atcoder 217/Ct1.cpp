#include <bits/stdc++.h>

using namespace std;

#define INF 9999999
#define MOD 9999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int P[n+1];
    for (int i = 1; i < n+1; i++) {
        cin >> P[i];
    }
    int Q[n+1];
    for (int i = 1; i < n+1; i++) {
        Q[P[i]] = i;
    }
    for (int i = 1; i < n+1; i++) {
        cout << Q[i] << " ";
    }
    cout << endl;
    return 0;
}