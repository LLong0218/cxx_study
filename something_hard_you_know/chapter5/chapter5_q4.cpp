#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string ask_for_name()
{
  string name;
  cout << "Enter your name : ";
  cin >> name;
  // cout << ".\n";
  return name;
}

int ask_for_age()
{
  int age;
  cout << "Enter your age : ";
  cin >> age;
  // cout << ".\n";
  return age;
}

bool compare(string name1, string name2, int age1, int age2)
{

  if (age1 > age2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void result(bool bigger, string name1, string name2)
{

  if (bigger)
  {
    cout << name1 << " 's age is bigger than " << name2;
  }
  else
  {
    cout << name2 << " 's age is bigger than " << name1;
  }
}

int main()
{
  auto name1{ask_for_name()};
  auto age1{ask_for_age()};
  auto name2{ask_for_name()};
  auto age2{ask_for_age()};
  bool res = compare(name1, name2, age1, age2);
  result(res, name1, name2);
}
// 这里是官方解法
// #include <iostream>
// #include <string>
// #include <string_view>

// std::string getName(int num)
// {
//   std::cout << "Enter the name of person #" << num << ": ";
//   std::string name{};
//   std::getline(std::cin >> std::ws, name); // read a full line of text into name

//   return name;
// }

// int getAge(std::string_view sv)
// {
//   std::cout << "Enter the age of " << sv << ": ";
//   int age{};
//   std::cin >> age;

//   return age;
// }

// void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
// {
//   if (age1 > age2)
//     std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
//   else
//     std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
// }

// int main()
// {
//   const std::string name1{getName(1)};
//   const int age1{getAge(name1)};

//   const std::string name2{getName(2)};
//   const int age2{getAge(name2)};

//   printOlder(name1, age1, name2, age2);

//   return 0;
// }