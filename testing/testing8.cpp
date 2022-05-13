#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n][n];
    // zerando a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < n-1; i++) {
        int ai, bi;
        std::cin >> ai >> bi;
        arr[ai-1][bi-1] = 1;
        arr[bi-1][ai-1] = 1;
    }
    bool c = false;
    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = 0; j < n; j++) {
            soma += arr[i][j];
        }
        if (soma == n-1) c = true;
    }
    std::string ans = (c) ? ("Yes") : ("No");
    std::cout << ans << "\n";
    return 0;
}