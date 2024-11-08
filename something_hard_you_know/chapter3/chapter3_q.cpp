#include <iostream>
// fix the program
int readNumber() // 这里我的想法是把改成引用地址，这样就可以反覆盖了
// 官方解法如下
{
  // 简单的解耦合
  int x{};
  std::cout << "Please enter a number: ";
  std::cin >> x;
  return x;
}

void writeAnswer(int x)
{
  std::cout << "The sum is: " << x << '\n';
}

int main()
{
  int x = {readNumber()};

  x = x + readNumber();
  writeAnswer(x);

  return 0;
}