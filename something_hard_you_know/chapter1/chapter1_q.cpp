#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  cout << "Enter number1:  ";
  cin >> num1;
  cout << "\n";
  cout << "Enter number2:  ";
  cin >> num2;
  cout << "\n";

  auto sum = num1 + num2;
  cout << num1 << " + " << num2 << " is " << sum << endl;
  auto sub = num1 > num2 ? num1 - num2 : num2 - num1;
  auto sub2 = num1 - num2;
  cout << num1 << " - " << num2 << " is " << sub2 << endl;
  return 0;
}