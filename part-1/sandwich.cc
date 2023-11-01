// Ethan Bui
// ethanbui888@csu.fullerton.edu
// @ethanbui888
// Partners: @Agibson2041

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguements. \n";

    return 2;
  }

  std::string protein{arguments[1]};

  std::string bread{arguments[2]};

  std::string condiment{arguments[3]};

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".\n";

  return 0;
}
