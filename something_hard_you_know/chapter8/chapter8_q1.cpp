#include <iostream>
namespace Constants
{
  constexpr double gravity{9.8};
}
// Gets tower height from user and returns it
namespace calculate
{
  double getTowerHeight()
  {
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
  }

  // Returns the current ball height after "seconds" seconds
  double calculateBallHeight(double towerHeight, int seconds)
  {

    // Using formula: s = (u * t) + (a * t^2) / 2
    // here u (initial velocity) = 0, so (u * t) = 0
    const double fallDistance{Constants::gravity * (seconds * seconds) / 2.0};
    const double ballHeight{towerHeight - fallDistance};

    // If the ball would be under the ground, place it on the ground
    if (ballHeight < 0.0)
      return 0.0;

    return ballHeight;
  }
}

// Prints ball height above ground
namespace print
{
  void printBallHeight(double ballHeight, int seconds)
  {
    if (ballHeight > 0.0)
      std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    else
      std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
  }

  // Calculates the current ball height and then prints it
  // This is a helper function to make it easier to do this
  double calculateAndPrintBallHeight(double towerHeight, int seconds)
  {
    double ballHeight{calculate::calculateBallHeight(towerHeight, seconds)};
    printBallHeight(ballHeight, seconds);
    return ballHeight;
  }
}

int main()
{
  double towerHeight{calculate::getTowerHeight()};
  int sec{0};
  // std::cout << "Enter how many seconds later would you like to know : ";
  //  std::cin >> sec;
  //  for (auto i = 0; i <= sec; i++)
  //  {
  //    print::calculateAndPrintBallHeight(towerHeight, i);
  //  }
  while (print::calculateAndPrintBallHeight(towerHeight, sec) > 0.0)
  {
    sec++;
  }

  // calculateAndPrintBallHeight(towerHeight, 0);
  // calculateAndPrintBallHeight(towerHeight, 1);
  // calculateAndPrintBallHeight(towerHeight, 2);
  // calculateAndPrintBallHeight(towerHeight, 3);
  // calculateAndPrintBallHeight(towerHeight, 4);
  // calculateAndPrintBallHeight(towerHeight, 5);

  return 0;
}