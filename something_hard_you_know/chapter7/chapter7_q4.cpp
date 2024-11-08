#include <iostream>

int accumulate(int x)
{
  // 全局生命
  static int sum{0}; // initialize sum to 0 at start of program
  sum += x;
  return sum;
}

int main()
{
  std::cout << accumulate(4) << '\n'; // prints 4
  std::cout << accumulate(3) << '\n'; // prints 7
  std::cout << accumulate(2) << '\n'; // prints 9
  std::cout << accumulate(1) << '\n'; // prints 10

  return 0;
}