#include <iostream>
#include <regex>

void waitForRun();

int waitForX();

void calculate(int x);

bool is_integer(const std::string &s)
{
  return std::regex_match(s, std::regex("[1-9][0-9]*"));
}

int main()
{

  std::cout << "HELP FOR UNCLE McDONALD\n";
  waitForRun();
  int x = waitForX();
  calculate(x);
}

void waitForRun()
{
  std::string start;
  do
  {
    std::cout << "Enter RUN to start\n ";
    std::cin >> start;
  } while (start != "RUN");
}

void calculate(int x)
{
  int area = 0;
  int areaMax = 0;
  int aMax = 0;
  int bMax = 0;

  int a = 1;
  while (a <= (x - 2))
  {
    int b = x - (2 * a);
    int area = a * b;
    if (area > areaMax)
    {
      areaMax = area;
      aMax = a;
      bMax = b;
    }
    a++;
  }

  std::cout << "\nThe optimal area of McDonalds farm\n";
  std::cout << areaMax;
  std::cout << "\nThe optimal a lenght\n";
  std::cout << aMax;
  std::cout << "\nThe optimal b lenght\n";
  std::cout << bMax;
}

int waitForX()
{
  std::string x = "";
  int y = 0;
  bool isCorrect;

  do
  {
    std::cout << "Enter the number of fence segments\n";
    std::cin >> x;
    if (is_integer(x))
    {
      y = std::stoi(x);
    }
    isCorrect = y > 2;
    if (isCorrect)
    {
      std::cout << "Length of fence: ";
      std::cout << x;
    }
    else
    {
      std::cout << "Fence length must be integer grather than 2\n";
    }
  } while (!isCorrect);

  return y;
}
