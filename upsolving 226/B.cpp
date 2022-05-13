#include <iostream>
#include <vector>
#include <set>

int main() {
    int n;
    std::cin >> n;
    std::set<std::vector<int>> s;
    for (int i = 0; i < n; i++) {
        int li;
        std::vector<int> v;
        std::cin >> li;
        for (int j = 0; j < li; j++) {
            int a;
            std::cin >> a;
            v.push_back(a);
        }
        s.insert(v);
    }
    std::cout << s.size() << "\n";
    return 0;
}