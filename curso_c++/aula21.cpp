#include <iostream>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    if (argc > 1) {
        if (!strcmp(argv[1], "sol")) {
            std::cout << "Vou ao clube.\n\n";
        } else if (!strcmp(argv[1], "nublado")) {
            std::cout << "Vou ao cinema.\n\n";
        } else {
            std::cout << "Vou ficar em casa.\n\n";
        }
    }
    return 0;
}