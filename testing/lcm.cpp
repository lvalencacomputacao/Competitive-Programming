#include <iostream>
#include <vector>

int euclid(int a, int b) {
    if (b == 0) return a;
    return euclid(b, a%b);
}

int lcm(int a, int b) {
    return a*b/euclid(a, b);
}

int lcm_vector(std::vector<int> v) {
    if (v.size() == 0) {
        return -1;
    }
    int result = v[0];
    for (int i = 1; i < v.size(); i++) {
        result = lcm(result, v[i]);
    }
    return result;
}

int gcd_vector(std::vector<int> v) {
    if (v.size() == 0) {
        return -1;
    }
    int result = v[0];
    for (int i = 1; i < v.size(); i++) {
        result = euclid(result, v[i]);
    }
    return result;
}

int main() {
    std::vector<int> v1 = {9, 9, 18, 18, 9, 9};
    std::vector<int> v2 = {2, 8, 9, 23, 7, 4};
    std::cout << gcd_vector(v1) << "\n";
    std::cout << gcd_vector(v2) << "\n";
    std::cout << lcm_vector(v1) << "\n";
    std::cout << lcm_vector(v2) << "\n";
    return 0;
}