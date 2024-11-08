#include <cstdint> // for std::uint8_t
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  std::int16_t age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: ";

  constexpr std::int16_t allowed_age = 16;
  if (age >= allowed_age)
    std::cout << "Yes";
  else
    std::cout << "No";

  std::cout << ". \n";

  return 0;
}