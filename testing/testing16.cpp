#include <bits/stdc++.h>

using namespace std;

#define INF 1e9+7
#define MOD 998244353
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

const int N = 305;
int dp[N][N][N];
int n, x, y;
int A[N];
int B[N];

int solve(int i, int a, int b) {
    if (a >= x && b >= y) {
        return 0;
    }
    if (i >= n) {
        return INF;
    }
    int& ans = dp[i][a][b];
    if (ans != -1) {
        return ans;
    }
    ans = min((solve((i+1), a, b)), 1+solve((i+1), min(a+A[i], x), min(b+B[i], y)));
    return ans;
}

int main() {
    cin >> n >> x >> y;
    rep(i, n) cin >> A[i] >> B[i];
    memset(dp, -1, sizeof(dp));
    int ans = solve(0, 0, 0);
    if (ans == INF) {
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
    return 0;
}