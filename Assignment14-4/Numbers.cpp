#include <iostream>
#include "Numbers.hpp"
using namespace std;

Numbers::Numbers()
{
  size = 0;
  numbers = nullptr;
}

Numbers::Numbers(int s)
{
  int i;
  size = s;
  numbers = new int[size];


 for(i = 0; i<size; i++)
 {
  numbers[i] = i * 10;
 }
}

Numbers::Numbers(const Numbers &other)
{
  int i;
  size = other.size;

  numbers = new int[size];

  for(i=0; i<size; i++)
  {
    numbers[i] = other.numbers[i];
  }
} 

int Numbers::getMax() const
{
  int i, max = numbers[0];

  for(i = 0; i<size; i++)
  {
    if(numbers[i] > max)
    {
      max = numbers[i];
    }
    return max;
  }
}

void printNumbers(Numbers n)
{
  int i;
  cout << "\nValues in Numbers array: ";
  for(i = 0; i<n.size; i++)
  {
    cout << " " << n.numbers[i];
    cout << "\n";
  }
}

Numbers::~Numbers()
{
  delete[] numbers;
}