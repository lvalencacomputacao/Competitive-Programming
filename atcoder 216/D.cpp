#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 998244353
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
	int n, m;
	cin >> n >> m;
	queue<int> que;
	vector<queue<int>> A(m);
	vector<vector<int>> mem(n);
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int a;
			cin >> a;
			A[i].push(a-1);
		}
		mem[A[i].front()].push_back(i);
	}
	for (int i = 0; i < n; i++) {
		if (mem[i].size() == 2) {
			que.push(i);
		}
	}
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		for (int p : mem[now]) {
			A[p].pop();
			if (!A[p].empty()) {
				mem[A[p].front()].push_back(p);
				if (mem[A[p].front()].size() == 2) {
					que.push(A[p].front());
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		if (!A[i].empty()) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}