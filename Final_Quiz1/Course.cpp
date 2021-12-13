#include "Course.hpp"
#include <iostream>
using namespace std;

Course::Course()
{
  id = 0;
  name = " ";
  credit = 0;
}

Course::Course(int id, string name, int credit) : id(id), name(name), credit(credit){}

