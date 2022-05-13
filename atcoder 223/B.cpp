#include <iostream>

int main() {
    std::string s, new_s;
    std::cin >> s;
    std::string menor_string = s;
    std::string maior_string = s;
    int n = s.size();
    s = s+s;
    for (int i = 0; i < n; i++) {
        new_s = "";
        for (int j = i; j < n+i; j++) {
            new_s += s[j];
        }
        if (new_s < menor_string) {
            menor_string = new_s;
        }
    }
    for (int i = 0; i < n; i++) {
        new_s = "";
        for (int j = i; j < n+i; j++) {
            new_s += s[j];
        }
        if (new_s > maior_string) {
            maior_string = new_s;
        }
    }
    std::cout << menor_string << std::endl;
    std::cout << maior_string << std::endl;
    return 0;
}