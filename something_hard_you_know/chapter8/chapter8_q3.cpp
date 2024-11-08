#include <iostream>
#include <random>

namespace random_num
{
  int init()
  {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> res(1, 100);
    return res(gen);
  }
}

namespace game
{
  bool guess(int num);
  void game_init()
  {
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << std::endl;
  }

  bool play_again()
  {
    char ans{};
    std::cout << "Would you like to play again? (y/n): ";
    std::cin >> ans;
    return (ans == 'y');
  }

  bool guess(int num)
  {
    for (int i = 1; i <= 7; ++i)
    {
      std::cout << "Guess #" << i << ": ";
      int guess_num{};
      std::cin >> guess_num;

      if (guess_num > num)
      {
        std::cout << "Your guess is too high." << std::endl;
      }
      else if (guess_num < num)
      {
        std::cout << "Your guess is too low." << std::endl;
      }
      else
      {
        std::cout << "Correct! You win!" << std::endl;
        return true;
      }
    }
    std::cout << "Sorry, you lose. The correct number was " << num << "." << std::endl;
    return false;
  }

  void play()
  {
    game_init();
    do
    {
      int number_to_guess = random_num::init();
      (guess(number_to_guess));
    } while (play_again());
    std::cout << "Thank you for playing." << std::endl;
  }
}

int main()
{
  game::play();
  return 0;
}