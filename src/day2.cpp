#include "ProjectConfig.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::ifstream infile{std::string(DIR) + "/inputs/day2input1.txt"};
  if (!infile) {
    std::cerr << "File could not be opened!" << std::endl;
    return 1;
  }
  std::string line{};
  int score1{0}, score2{0};
  char a, b;

  // Part 1
  while (std::getline(infile, line)) {
    a = line[0];
    b = line[2];
    switch (b) {
    case 'X':
      if (a == 'A') {
        score1 += 4;
        score2 += 3;
      } else if (a == 'B') {
        score1 += 1;
        score2 += 1;
      } else {
        score1 += 7;
        score2 += 2;
      }
      break;
    case 'Y':
      if (a == 'A') {
        score1 += 8;
        score2 += 4;
      } else if (a == 'B') {
        score1 += 5;
        score2 += 5;
      } else {
        score1 += 2;
        score2 += 6;
      }
      break;
    case 'Z':
      if (a == 'A') {
        score1 += 3;
        score2 += 8;
      } else if (a == 'B') {
        score1 += 9;
        score2 += 9;
      } else {
        score1 += 6;
        score2 += 7;
      }
      break;
    }
  }
  std::cout << "Initial tactic score: " << score1 << '\n';
  std::cout << "Final tactic score: " << score2 << '\n';

  return 0;
}