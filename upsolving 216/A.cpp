#include <bits/stdc++.h>

using namespace std;

#define N 200100
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    string n;
    cin >> n;
    if (n[n.size()-1] <= '2') {
        cout << (int) stoi(n) << "-" << "\n";
    } else if (n[n.size()-1] <= '6') {
        cout << (int) stoi(n) << "\n";
    } else {
        cout << (int) stoi(n) << "+" << "\n";
    }
    return 0;
}