#include <iostream>
#include <limits>

int main()
{
  int largest_int = std::numeric_limits<int>::max();
  double largest_double = std::numeric_limits<double>::max();

  std::cout << largest_int << "\n"
            << largest_double << std::endl
            << largest_int + 1 << std::endl
            << largest_double + 1.0 << std::endl;
}