// Don't use using namespace...ever again!

// here's why

#include <iostream>

using namespace std;
namespace MY
{
  int cout()
  {
    return 1;
  }
}

int main()
{
  // learn to use namespace specifically
  std::cout << MY::cout << endl;
  // you can see that the compiler can't tell which cout should be used;
}