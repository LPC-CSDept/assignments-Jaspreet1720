#include <iostream>
#include <time.h>
#include "Numbers.hpp"

int findMax(Numbers *numberset, int size)
{
  int max_diff = -1;
  int max_ID;

  for(int i = 0; i < size; i++)
  {
    int curr_diff = numberset[i].getMax() - numberset[i].getMin();
    if(curr_diff > max_diff)
    {
      max_diff = curr_diff;
      max_ID = numberset[i].getID();
    }
  }
  return max_ID;
}

void deDup(Numbers &numberset1, Numbers &numberset2)
{
  vector<int> duplicates;
  for(int i = 0; i < numberset1.getSize(); i++)
  {
    for(int j = 0; j < numberset2.getSize(); j++)
    {
      if(numberset1.getElm(i) == numberset2.getElm(i))
      {
        duplicates.push_back(numberset1getElm(i)) break;
      }
    }

  }

  for(int i = 0; i < duplicates.size(); i++)
  {
    numberset1.deleteElm(duplicates.at(i));
    numberset2.deleteElm(duplicates.at(i));
  }
}

void printNumbers(Numbers &n)
{
  for(int i = 0; i < n.getSize(); i++)
  {
    cout << n.getElm(i) << " " ;
  }
  cout << endl;
}

void printNumberSet(Numbers *numberset, int size)
{
  for(int j = 0; j < size; j++)
  {
    printNumbers(numberset[j]);
  }
  cout << endl;
}