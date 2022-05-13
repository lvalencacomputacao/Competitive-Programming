#include <iostream>

int main() {

    int num;
    /*
    1 2 3 4 5 6 7 8 9 10
    3 a 6
    10 a 14
    16 a 19
    */
   num = 8;
   if ((num >= 3 && num <= 6) || (num >= 10 && num <= 14) ||(num >= 16 && num <= 19)) {
       std::cout << "\n\nValor aceito\n";
   } else {
       std::cout << "\n\nNAO aceito\n";
   }

    num = 1;

    /*
    if (num == 1) / if (num)
    if (num == 0) / if (!num)
    if (num != 1) / if (!num)
    */

    if (!num) {
        std::cout << "\n\nVou ao clube\n";
    } else {
        std::cout << "\n\nVou ao cinema\n";
    }
    return 0;
}