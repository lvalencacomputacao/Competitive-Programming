#include <bits/stdc++.h>

using namespace std;

#define INF 99999999
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define N 400

int n, x, y;
int A[N], B[N];
int dp[N][N][N];

int solve(int i, int a, int b) {
    if (a >= x && b >= y) {
        return 0;
    }
    if (i >= n) {
        return INF;
    }
    if (dp[i][a][b] != -1) {
        return dp[i][a][b];
    }
    int ans = min(solve(i+1, a, b), 1+(solve(i+1, min(x, a+A[i]), min(y, b+B[i]))));
    dp[i][a][b] = ans;
    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    cin >> x >> y;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        A[i] = a;
        B[i] = b;
    }
    memset(dp, -1, sizeof(dp));
    int ans = solve(0, 0, 0);
    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}