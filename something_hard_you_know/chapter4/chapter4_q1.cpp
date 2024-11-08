#include <iostream>

using namespace std;

double readNumber()
{
  cout << "Enter the number : ";
  double num{};
  cin >> num;
  // cout<<"\n";
  return num;
}

char getOperator()
{
  std::cout << "Enter +, -, *, or / : ";
  char operation{};
  std::cin >> operation;
  return operation;
}

void printf_result(char &ope, double x, double y)
{
  switch (ope)
  {
  case '+':
    cout << x << " + " << y << " is " << x + y;
    break;
  case '-':
    cout << x << " - " << y << " is " << x - y;
    break;
  case '*':
    cout << x << " * " << y << " is " << x * y;
    break;
  case '/':
    cout << x << " / " << y << " is " << x / y;
    break;
  }
}
int main()
{

  double x = {readNumber()};
  double y = {readNumber()};
  char ope = {getOperator()};
  printf_result(ope, x, y);
}