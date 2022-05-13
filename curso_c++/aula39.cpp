#include <iostream>
#include <stdio.h> // Para função gets
#include <stdlib.h> // Para função malloc

int main() {

    char vnome[50];

    gets(vnome); //Similar ao std::getline (???)

    std::cout << vnome << "\n";

    char* vnome2;
    vnome2 = (char*) malloc(sizeof(char));

    gets(vnome2);

    std::cout << vnome2 << "\n";


    return 0;
}