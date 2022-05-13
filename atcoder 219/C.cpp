#include <iostream>
#include <string>
#include <algorithm>
#include <map>

std::string convert_string(std::string s, std::string mudar) {
    std::map<char, int> hashmap;
    for (int i = 0; i < 26; i++) {
        hashmap.insert(std::pair<char, int>(mudar[i], i));
    }
    std::string new_s = "";
    for (int i = 0; i < s.size(); i++) {
        char c = 97+hashmap[s[i]];
        new_s += c;
    }
    return new_s;
}

int main() {
    std::string x;
    std::cin >> x;
    int n;
    std::cin >> n;
    std::string strings[n];
    for (int i = 0; i < n; i++) {
        std::cin >> strings[i];
    }
    std::string new_strings[n];
    std::map<std::string, std::string> hashmap;
    for (int i = 0; i < n; i++) {
        new_strings[i] = convert_string(strings[i], x);
        hashmap.insert(std::pair<std::string, std::string>(new_strings[i], strings[i]));
    }
    std::sort(new_strings, new_strings+n);
    for (int i = 0; i < n; i++) {
        std::cout << hashmap[new_strings[i]] << "\n";
    }
    return 0;
}