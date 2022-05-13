#include <iostream>
#include <string>
#include <vector>
#include <map>

template<typename T>
void print2DVector(std::vector<std::vector<T>> vector2D) {
    for (std::vector v : vector2D) {
        for (T x : v) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
}

template<typename T>
void printVector(std::vector<T> v) {
    for (T x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

std::vector<int> new_array(int n, std::map<int, int> vitorias) {
    std::vector<int> new_v;
    std::vector<std::vector<int>> v;
    for (int i = 0; i <= 100; i++) {
        std::vector<int> vitorias_i = {};
        v.push_back(vitorias_i);
    }
    for (int i = 1; i <= 2*n; i++) {
        v[vitorias[i]].push_back(i);
    }
    for (int i = 100; i >= 0; i--) {
        std::vector<int> vitorias_i = v[i];
        for (int x : vitorias_i) {
            new_v.push_back(x);
        }
    }
    return new_v;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<char>> a;
    for (int i = 0; i < 2*n; i++) {
        std::vector<char> v;
        std::string s;
        std::cin >> s;
        for (int i = 0; i < s.size(); i++) {
            v.push_back(s[i]);
        }
        a.push_back(v);
    }
    std::vector<int> arr;
    for (int i = 0; i < 2*n; i++) {
        arr.push_back(i+1);
    }

    std::map<char, char> ganha;
    ganha['G'] = 'C';
    ganha['C'] = 'P';
    ganha['P'] = 'G';

    std::map<int, int> vitorias;
    for (int i = 1; i <= 2*n; i++) {
        vitorias[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        for (int k = 0; k < n; k++) {
            int p1 = arr[2*k];
            int p2 = arr[2*k+1];
            char p1_result = a[p1-1][i];
            char p2_result = a[p2-1][i];
            if (ganha[p1_result] == p2_result) vitorias[p1]++;
            else if (ganha[p2_result] == p1_result) vitorias[p2]++;
        }
        arr = new_array(n, vitorias);
    }

    for (int ai : arr) {
        std::cout << ai << std::endl;
    }

    return 0;
}