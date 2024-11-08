#include <iostream>
#include <string>
#include <string.h>
using namespace std;
// Write the function getQuantityPhrase() here
//< 0 = “negative” 0 = “no” 1 = “a single” 2 = “a couple of” 3 = “a few” > 3 = “many”
constexpr string getQuantityPhrase(int apple_number)
{
  if (apple_number < 0)
    return "negative";
  else if (apple_number == 0)
    return "no";
  else if (apple_number == 1)
    return "a single";
  else if (apple_number == 2)
    return "a couple of";
  else if (apple_number == 3)
    return "a few";
  else
    return "many";
}
// Write the function getApplesPluralized() here

constexpr string getApplesPluralized(int num)
{
  if (num <= 1)
    return "apple";
  else
    return "apples";
}

int main()
{
  constexpr int maryApples{3};
  std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;

  std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

  return 0;
}