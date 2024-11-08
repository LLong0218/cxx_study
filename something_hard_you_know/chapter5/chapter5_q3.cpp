#include <iostream>

// gets tower height from user and returns it
double getTowerHeight()
{
  std::cout << "Enter the height of the tower in meters: ";
  double towerHeight{};
  std::cin >> towerHeight;
  return towerHeight;
}

// Returns ball height form ground after "seconds" seconds
constexpr double calculateBallHeight(double towerHeight, int seconds)
{
  constexpr double gravity{9.8};
  // Using formula:[s = u*t + (a*t^2)/2],here u(initial velocity) = 0

  const double distanceFallen{(gravity * (seconds * seconds)) / 2.0};
  const double currentHeight{towerHeight - distanceFallen};

  return currentHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
  if (ballHeight > 0.0)
  {
    std::cout << "At" << seconds << "seconds, the ball is at height :" << ballHeight << " meters\n";
  }
  else
  {
    std::cout << "At " << seconds << " seconds,the ball is on the ground.\n";
  }
}

void printCalculateBallHeight(double towerHeight, int seconds)
{
  const double ballHeight{calculateBallHeight(towerHeight, seconds)};
  printBallHeight(ballHeight, seconds);
}

int main()
{
  double towerHeight{getTowerHeight()};

  printCalculateBallHeight(towerHeight, 0);
}