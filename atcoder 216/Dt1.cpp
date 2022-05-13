#include <bits/stdc++.h>

using namespace std;

#define INF 999999999
#define MOD 999999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<queue<int>> A(m);
    vector<vector<int>> v(n);
    queue<int> que;

    rep(i, m) {
        int ki;
        cin >> ki;
        queue<int> q;
        rep(j, ki) {
            int a;
            cin >> a;
            q.push(a-1);
        }
        A[i] = q;
        v[q.front()].push_back(i);
    }
    rep(i, n) {
        if (v[i].size() == 2) {
            que.push(i);
        }
    }
    while (!que.empty()) {
        int now = que.front();
        que.pop();
        for (int x : v[now]) {
            A[x].pop();
            if (!A[x].empty()) {
                v[A[x].front()].push_back(x);
                if (v[A[x].front()].size() == 2) {
                    que.push(A[x].front());
                }
            }
        }
    }
    rep(i, m) {
        if (!A[i].empty()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}