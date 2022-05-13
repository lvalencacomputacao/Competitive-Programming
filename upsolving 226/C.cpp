#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 998244353
#define ll long long
#define rep(i, n) for(int i = 0; i < n; ++i)

ll timing[N];
bool visited[N];
vector<ll> adj[N];

ll dfs(ll n) {
    stack<ll> s;
    s.push(n);
    ll total = 0;
    while (!s.empty()) {
        ll v = s.top();
        s.pop();
        if (!visited[v]) {
            total += timing[v];
            visited[v] = true;
        }
        for (ll u : adj[v]) {
            if (!visited[u]) {
                s.push(u);
            }
        }
    }
    return total;
}

int main() {
    ll n;
    cin >> n;
    rep(i, n) adj[i] = {};
    rep(i, n) {
        ll ti, ki;
        cin >> ti >> ki;
        timing[i] = ti;
        rep(j, ki) {
            ll x;
            std::cin >> x;
            adj[i].push_back(x-1);
        }
    }
    ll total = dfs(n-1);
    cout << total << "\n";
    return 0;
}