#include <iostream>
#include <string>

int main() {
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;
    std::string t;
    std::cin >> t;
    std::string s = "";
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '1') s += s1;
        else if (t[i] == '2') s += s2;
        else s += s3;
    }
    std::cout << s << "\n";
    return 0;
}