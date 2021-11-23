#include "Student.hpp"
#include <string>

using namespace std;

Student::Student() {}
Student::Student(int ID, string sname, char grade, double scores)
{
  this->ID = ID;
  this->sname = sname;
  this->grade = grade;
  this->scores = scores;
}

