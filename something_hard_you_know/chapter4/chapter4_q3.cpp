#include <iostream>
using namespace std;
const double gravity = 9.8;
void caculate(int seconds)
{
  cout << "Enter the height of the tower: ";
  double height;
  cin >> height;
  for (int i = 0; i < seconds; i++)
  {
    auto left = height - ((gravity * i * i) / 2);
    if (left < 0)
    {
      cout << "Already at ground." << endl;
      break;
    }
    cout << "At " << i << " second." << " The ball is at height " << left << "m" << endl;
  }
}
int main()
{
  caculate(6);
  return 0;
}