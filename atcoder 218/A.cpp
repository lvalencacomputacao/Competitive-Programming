#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;
    std::string ans = (S[N-1] == 'o') ? ("Yes") : ("No");
    std::cout << ans << "\n";
    return 0;
}