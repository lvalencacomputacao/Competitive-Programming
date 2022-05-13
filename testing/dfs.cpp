#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 998244353
#define ll long long
#define rep(i, n) for (int i = 0; i < n; ++i)

vector<int> adj[N];
vector<bool> visited(N, false);

void dfs(ll n) {
    stack<ll> s;
    s.push(n);
    while (!s.empty()) {
        ll v = s.top();
        s.pop();
        if (!visited[v]) {
            cout << v << "\n";
            visited[v] = true;
        }
        for (ll x : adj[v]) {
            if (!visited[x]) {
                s.push(x);
            }
        }
    }
}

int main() {
    rep(i, 8) adj[i] = {};
    rep(i, 8) visited.push_back(false);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(5);
    adj[2].push_back(6);
    adj[5].push_back(7);
    dfs(0);
    return 0;
}