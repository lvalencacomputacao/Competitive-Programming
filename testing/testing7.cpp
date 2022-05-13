#include <iostream>
#include <array>
#include <stack>
#include <queue>

int test(int n, int a[]);
void test2(int n, int a[]);

int main() {
    int a[] = {1, 2, 3, 4};
    test2(4, a);
    test(4, a);
    std::array<int, 5> v;

    enum armas {
        a1=1,
        b1=2,
        c1=3,
    };

    armas arma1 = a1;
    armas arma2 = b1;
    armas arma3 = c1;
    std::cout << arma1+arma2+arma3 << std::endl;

    std::cout << "\n\n\n";

    std::stack<int> s;
    s.push(3);
    s.push(4);
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.empty() << "\n";

    return 0;
}

int test(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << "\n";
    }
}

void test2(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        a[i]++;
    }
}