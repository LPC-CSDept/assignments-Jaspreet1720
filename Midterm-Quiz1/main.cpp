#include "Numbers.hpp"
#include <iostream>
using namespace std;

int main()
{
  srand(time(0));
  Numbers n1(112, 14);
  srand(time(0));
  Numbers n2(478, 6);

  cout << "Object 1: ";
  printNumbers(n1);
  printNumbers(n2);
}
