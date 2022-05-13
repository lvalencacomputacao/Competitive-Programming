#include <iostream>

bool typo(std::string s1, std::string s2) {
    for (int i = 0; i < s1.size()-1; i++) {
        char temp;
        temp = s1[i+1];
        s1[i+1] = s1[i];
        s1[i] = temp;
        if (s1 == s2) {
            return true;
        }
        temp = s1[i+1];
        s1[i+1] = s1[i];
        s1[i] = temp;
    }
    return s1 == s2;
}

int main() {
    std::string s, t;
    std::cin >> s >> t;
    std::string ans = (typo(s, t)) ? ("Yes") : ("No");
    std::cout << ans << "\n";
    return 0;
}