#include <iostream>
inline namespace V1
{
  void do_something()
  {
    std::cout << "v1" << std::endl;
  }
}
// 同名函数下，inline的将被优先调用

namespace V2
{
  void do_something()
  {
    std::cout << "v2" << std::endl;
  }
}

int main()
{
  V1::do_something();
  V2::do_something();
  do_something();
}