#include <iostream>

int main() {
    
    int matriz[3][4];
    int l, c;

    for (l=0; l < 3; l++) {
        for (c=0; c < 4; c++) {
            std::cin >> matriz[l][c];
        }
    }

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 4; c++) {
            std::cout << matriz[l][c] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}