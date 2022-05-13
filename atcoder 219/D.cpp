#include <bits/stdc++.h>

using namespace std;

#define INF 1e9+7
#define MOD 998244353
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

const int N = 305;
int dp[N][N][N];
int n, x, y;
int A[N], B[N];

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
    ans = min(solve((i+1), a, b), 1+solve((i+1), min(a+A[i], x), min(b+B[i], y)));
    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> x >> y;
    rep(i, n) {
        int ai, bi;
        cin >> ai >> bi;
        A[i] = ai;
        B[i] = bi;
    }
    memset(dp, -1, sizeof(dp));
    int ans = solve(0, 0, 0);
    if (ans == INF) {
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
    return 0;
}