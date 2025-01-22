#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> vec = {5, 2, 9, 1, 5, 6};

  std::sort(vec.begin(), vec.end());

  std::cout << "Sorted vector: ";
  for (int num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}