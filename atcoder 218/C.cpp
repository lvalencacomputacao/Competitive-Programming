#include <iostream>
#include <string>

void printMatrix(int n, int M[5][5]) {

}

int main() {
    int N;
    std::cin >> N;
    int m1[N][N], m2[N][N], m3[N][N], m4[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char c;
            std::cin >> c;
            m1[i][j] = (c == '.') ? (0) : (1);
        }
    }
    return 0;
}