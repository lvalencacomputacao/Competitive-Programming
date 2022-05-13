#include <iostream>
#include <algorithm>
#include <string>

void printVector(std::vector<char> v) {
    for (char x : v) {
        std:: cout << x << " ";
    }
    std::cout << "\n";
}

std::vector<std::pair<std::string, std::string>> separate(std::string s) {
    std::vector<std::pair<std::string, std::string>> v;
    for (int i = 1; i < s.size(); i++) {
        std::string s1 = s.substr(0, i);
        std::string s2 = s.substr(i, s.size()-i);
        std::pair<std::string, std::string> p = {s1, s2};
        v.push_back(p);
    }
    return v;
}

std::vector<std::pair<int, int>> convert(std::vector<std::pair<std::string, std::string>> v) {
    std::vector<std::pair<int, int>> to_return;
    for (auto x : v) {
        int x1 = std::stoi(x.first);
        int x2 = std::stoi(x.second);
        std::pair<int, int> p = {x1, x2};
        to_return.push_back(p);
    }
    return to_return;
}

int get_maximum(std::vector<std::pair<int, int>> v) {
    long long maximum = 0;
    for (auto x : v) {
        long long candidate = x.first * x.second;
        std::cout << x.first << " " << x.second << "\n";
        std::cout << candidate << "\n";
        if (candidate > maximum) {
            maximum = candidate;
        }
    }
    return maximum;
}

std::vector<std::string> get_permutations(std::string s) {
    std::vector<std::string> v;
    do
    {
        v.push_back(s);
    }
    while ( std::next_permutation(s.begin(), s.end()));
    return v;
}

int main() {
    std::string s;
    std::cin >> s;
    std::vector<std::string> v = get_permutations(s);

    long long maximum_all = 0;
    for (auto x : v) {
        std::vector<std::pair<std::string, std::string>> v1 = separate(x);
        std::vector<std::pair<int, int>> v2 = convert(v1);
        long long maximum = get_maximum(v2);
        if (maximum > maximum_all) maximum_all = maximum;
    }
    std::cout << maximum_all << "\n";
    return 0;
}