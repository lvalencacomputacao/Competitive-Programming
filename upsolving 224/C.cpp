#include <iostream>
#define ll long long

struct Ponto {
    int x;
    int y;
};

int main() {

    int n;
    std::cin >> n;
    Ponto pontos[n];
    for (int i = 0; i < n; i++) {
        int xi, yi;
        std::cin >> xi >> yi;
        Ponto p;
        p.x = xi;
        p.y = yi;
        pontos[i] = p;
    }
    ll count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                Ponto p1 = pontos[i];
                Ponto p2 = pontos[j];
                Ponto p3 = pontos[k];
                int x1 = p1.x, y1 = p1.y;
                int x2 = p2.x, y2 = p2.y;
                int x3 = p3.x, y3 = p3.y;
                count += (x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3 != 0);
            }
        }
    }
    std::cout << count << "\n";
    return 0;
}