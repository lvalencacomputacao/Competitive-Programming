#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; ++i)

vector<int> adj[N];
bool visited[N];

void dfs(int n) {
    stack<int> s;
    s.push(n);
    while (!s.empty()) {
        int v = s.top();
        s.pop();
        if (!visited[v]) {
            cout << v << "\n";
            visited[v] = true;
        }
        for (int u : adj[v]) {
            if (!visited[u]) {
                s.push(u);
            }
        }
    }
}

void bfs(int n) {
    queue<int> q;
    q.push(n);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if (!visited[v]) {
            cout << v << "\n";
            visited[v] = true;
        }
        for (int u : adj[v]) {
            if (!visited[u]) {
                q.push(u);
            }
        }
    }    
}

int main() {
    rep(i, 8) adj[i] = {};
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(5);
    adj[2].push_back(6);
    adj[5].push_back(7);
    bfs(0);
    return 0;
}