#ifndef NUMBERS_H
#define NUMBERS_H
#include <vector>
#include <algorithm>
using namespace std;

class Numbers 
{
private:
       int ID;
       vector<int> numbers;

public:
      Numbers(); // default constructor
      Numbers(int, int); // parameterized constructor
      int getID() const; // function return ID
      int getSize() const; // returns the size of Numbers
      int getElm(int) const; // to get the i-th element
      int getMax() const; // to get the max element
      int getMin() const; // to get the min element
      int getSum() const; // to get the sum of elements
      void deleteElm(int); // to delete the values passed
};

#endif