#include <iostream>
#include "Numbers.hpp"
using namespace std;

int main()
{
  Numbers n1(10);
  printNumbers(n1);

  Numbers n2(n1);
  printNumbers(n2);
  

  cout << "\nMaximum value in n1: " <<n1.getMax();
  cout << "\nMaximum value in n2: " <<n2.getMax() << "\n";

  return 0;

}