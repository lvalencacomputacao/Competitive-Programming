#include <iostream>

int main() {
    int n;
    std::cin >> n;
    bool c = false;
    int contador[n+1];
    for (int i = 0; i < n+1; i++) {
        contador[i] = 0;
    }
    for (int i = 0; i < n-1; i++) {
        int ai, bi;
        std::cin >> ai >> bi;
        contador[ai]++;
        contador[bi]++;
    }
    for (int i = 0; i < n+1; i++) {
        if (contador[i] == n-1) c = true;
    }
    std::string ans = (c) ? ("Yes") : ("No");
    std::cout << ans << "\n";
    return 0;
}