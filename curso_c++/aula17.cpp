#include <iostream>

int main() {

    /*
        for (ini; cond; inc/dec) {
            //comandos
        }
    */

   int x, y;
   for (x=0, y=1; x<10;x++, y+=2) {
       std::cout << x << "\n";
   }

    return 0;
}