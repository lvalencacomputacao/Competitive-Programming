#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    double a[n];
    double b[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i] >> b[i];
    }
    double t = 0;
    for (int i = 0; i < n; i++) {
        t += (a[i]/b[i]);
    }
    t /= 2;
    int k = 0;
    double total = 0;
    while (t >= a[k]/b[k] && k < n) {
        total += a[k];
        t -= a[k]/b[k];
        k++;
    }
    total += b[k]*t;
    std::cout << total << "\n";
    return 0;
}