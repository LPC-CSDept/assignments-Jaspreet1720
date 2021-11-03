#include "Numbers.hpp"

Numbers::Numbers()
{
  ID = -1; // set the id as -1
}

Numbers::Numbers(int id, int size)
{
  ID = id; //  set the id
  for(int i=0; i <size; i++)
  { 
    int x = rand() % 100; // generate an integer
    numbers.push_back(x); // push it back to the vector
 }
}

int Numbers::getID() const 
{
  return ID;
}

int Numbers::getSize() const
{
  return numbers.size();
}

int NUmbers::getElm(int i) const
{
  return numbers.at(i);
}

int Numbers::getMax() const
{
  int Max = getElm(0); // initializing max as the first
  for(int i = 1; i < getSize(); i++)
  {
    if(getElm(i) > Max)
    Max = getElm(i);
  } 
  return Max;
}

int Numbers::getMin() const
{
  int Min = getElm(0); // initializing min as the first
  for(int i = 1; i < getSize(); i++)
  {
    if(getElm(i) < Min) // update the min element
    Min = getElm(i);

  }
  return Min;
}
