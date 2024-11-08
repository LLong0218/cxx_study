#include <iostream>
#include "io.h"
using namespace std;
// 将函数封装为头文件
int main()
{
  Writenumber();
  return 0;
}
// 以下是官方解法，少了些耦合，我还是在封装
//  #include <iostream>

// int readNumber()
// {
//   std::cout << "Enter a number to add: ";
//   int x{};
//   std::cin >> x;
//   return x;
// }

// void writeAnswer(int x)
// {
//   std::cout << "The answer is " << x << '\n';
// }

// int main()
// {
//   int x{readNumber()};
//   int y{readNumber()};
//   writeAnswer(x + y); // using operator+ to pass the sum of x and y to writeAnswer()
//   return 0;
// }