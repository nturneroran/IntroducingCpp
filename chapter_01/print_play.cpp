#include <iostream>

// File for playing with << streaming cout and using endl to flush

int main() {
  std::cout << "Hello, world! (with no parenthesis!)" << '\n';

  (std::cout << "Hello, world! (with parenthesis!)") << '\n';

  // lyrics to Cave by Muse printed in chunks (hopefully)
  std::cout << "Leave me alone, it's nothing serious." << '\n'
            << "I'll do it myself, it's got nothing to do with you" << '\n'
            << "and there's nothing that you can do" << '\n'
            << std::endl
            << "You can see it and you can almost hear it too" << '\n'
            << "You can almost taste it, it's nothing to do with you" << '\n'
            << "And there's nothing that you can do" << '\n'
            << std::endl;
}