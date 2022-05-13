#include <bits/stdc++.h>

using namespace std;

#define INF 99999999
#define MOD 99999999
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define N 400

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    swap(a, b);
    swap(d, e);

    bool descansando1 = false, descansando2 = false;
    int tot1 = 0, tot2 = 0;

    int tmpb = b, tmpc = c, tmpe = e, tmpf = f;
    rep(i, x) {
        if (tmpb == 0) {
            descansando1 = true;
            tmpb = b;
        }
        if (tmpc == 0) {
            descansando1 = false;
            tmpc = c;
        }
        if (!descansando1) {
            tot1 += a;
            tmpb--;
        } else {
            tmpc--;
        }
    }
    rep(i, x) {
        if (tmpe == 0) {
            descansando2 = true;
            tmpe = e;
        }
        if (tmpf == 0) {
            descansando2 = false;
            tmpf = f;
        }
        if (!descansando2) {
            tot2 += d;
            tmpe--;
        } else {
            tmpf--;
        }
    }
    if (tot1 > tot2) {
        cout << "Takahashi" << endl;
    } else if (tot1 == tot2) {
        cout << "Draw" << endl;
    } else {
        cout << "Aoki" << endl;
    }
    

    return 0;
}