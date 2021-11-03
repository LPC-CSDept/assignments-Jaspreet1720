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
