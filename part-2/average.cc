// Ethan Bui
// ethanbui888@csu.fullerton.edu
// @ethanbui888
// Partners: @Agibson2041

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  int size = static_cast<int>(arguments.size()) - 1;

  if (size < 1) {
    std::cout << "error: you need to give at least one value \n";

    return -1;
  }

  double sum{0.0};

  bool first{true};

  for (std::string& num : arguments) {
    if (first) {
      first = false;
    } else {
      double numbers = {std::stod(num, nullptr)};

      sum += numbers;
    }
  }

  double average{0.0};

  average = (sum) / size;

  std::cout << "average = " << average << "\n";

  return 0;
}