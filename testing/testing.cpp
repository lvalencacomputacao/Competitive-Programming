#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

template <typename T>
void printVector(std::vector<T> v) {
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << "\n";
}

int main() {
  std::vector<int> v;
  std::vector<int> v2 = {1, 2, 3, 4, 5};
  std::vector<int> v3(5, 10);
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    v.push_back(a);
  }

  printVector(v);
  std::cout << "\n";
  printVector(v2);
  std::cout << "\n";
  printVector(v3);
  std::cout << "\n";
  std::cout << v.at(0) << " " << v[0] << "\n";
  v.at(0) = 1;
  std::cout << v.at(0) << "\n";
  printVector(v);
  v.insert(v.begin()+3, 1);
  printVector(v);
  std::vector<int>::iterator it;
  std::vector<int>::iterator it2 = std::find(v.begin(), v.end(), 1);
  v.erase(it2);
  it2 = std::find(v.begin(), v.end(), 1);
  v.erase(it2);
  printVector(v);
  return 0;
}
