#include <iostream>

int main() {
    int h, w;
    std::cin >> h >> w;
    int a[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cin >> a[i][j];
        }
    }
    bool c = true;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int i1 = i;
            int j1 = j;
            for (int k = i+1; k < h; k++) {
                for (int v = j+1; v < w; v++) {
                    int i2 = k;
                    int j2 = v;
                    if (a[i1][j1]+a[i2][j2] > a[i1][j2]+a[i2][j1]) {
                        c = false;
                    }
                }
            }
        }
    }
    std::string ans = (c) ? ("Yes") : ("No");
    std::cout << ans << "\n";
    return 0;
}