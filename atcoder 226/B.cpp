#include <iostream>
#include <set>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::set<std::vector<int>> S;
    for (int i = 0; i < n; i++) {
        int li;
        std::cin >> li;
        std::vector<int> v;
        for (int j = 0; j < li; j++) {
            int a;
            std::cin >> a;
            v.push_back(a);
        }
        S.insert(v);
    }
    std::cout << S.size() << std::endl;
    return 0;
}