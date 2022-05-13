#include <iostream>
#include <vector>
#include <stack>
#include <queue>

const int n = 8;
std::vector<int> adj[n];
std::vector<bool> visited;
std::vector<int> dist;

const int INF = 1e9;

void dfs(int u) {
    std::stack<int> s;
    s.push(u);
    while (!s.empty()) {
        int vertice = s.top();
        s.pop();
        visited[vertice] = true;
        std::cout << vertice << "\n";
        for (int v : adj[vertice]) {
            if (!visited[v]) {
                s.push(v);
            }
        }
    }
}

void dfs2(int u) {
    visited[u] = true;
    std::cout << u << "\n";
    for (auto v : adj[u]) {
        if (!visited[v]) {
            dfs2(v);
        }
    }
}

void bfs(int u) {
    std::queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        std::cout << v << "\n";
        for (int u : adj[v]) {
            if (!visited[u]) {
                q.push(u);
            }
        }
    }
}

void bfs2(int u) {
    dist.assign(n, INF);
    std::queue<int> q;
    q.push(u);
    dist[u] = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        std::cout << v << "\n";
        for (int u : adj[v]) {
            if (dist[u] == INF) {
                dist[u] = dist[v]+1;
                q.push(u);
            }
        }
    }
}

int main() {
    visited.assign(n, false);
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