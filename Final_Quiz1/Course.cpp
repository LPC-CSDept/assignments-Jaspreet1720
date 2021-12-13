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

// used getter method
int Course::getId() const
{
  return id;
}

const string &Course::getName() const
{
  return name;
}

int Course::getCredit() const
{
  return credit;
}

void Course::setId(int id)
{
  this->id = id;
}

void Course::setName(const string &name)
{
  this->name = name;
}

void Coure::setCredit(int credit)
{
  this->credit = credit;
}

void Course::print() const 
{
  cout << "Course{id =" << id << ", name = " << name << ", credit = "<< credit << "}" << endl;
}