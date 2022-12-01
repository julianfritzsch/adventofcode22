#include "ProjectConfig.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::ifstream infile{std::string(DIR) + "/inputs/day1input1.txt"};
  if (!infile) {
    std::cerr << "File could not be opened!" << std::endl;
    return 1;
  }
  std::string line{};
  std::vector<int> elves;
  int calories{0};
  while (std::getline(infile, line)) {
    if (line == "") {
      elves.push_back(calories);
      calories = 0;
    } else {
      calories += std::stoi(line);
    }
  }
  elves.push_back(calories);
  std::sort(elves.begin(), elves.end(), [](int a, int b) { return a > b; });
  std::cout << "Most calories of single elf: " << elves[0] << '\n';
  std::cout << "Most calories of three elves: "
            << std::accumulate(elves.begin(), elves.begin() + 3, 0) << '\n';

  return 0;
}