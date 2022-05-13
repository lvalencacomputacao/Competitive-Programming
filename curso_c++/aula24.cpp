#include <iostream>

void imp(std::string txt="Lucas");

int main() {
    imp("Bruno");
    imp();
    return 0;
}

void imp(std::string txt) {
    std::cout << "\n" << txt << "\n";
}