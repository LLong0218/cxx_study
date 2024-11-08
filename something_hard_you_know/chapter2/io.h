#include <iostream>
using namespace std;
int Readnumber()
{
  int num{};
  cout << "Enter a number to add: " << "\n";
  cin >> num;
  return num;
}

void Writenumber()
{
  auto num1 = Readnumber();
  auto num2 = Readnumber();
  auto sum = num1 + num2;
  cout << "Summary is " << sum << "\n";
}