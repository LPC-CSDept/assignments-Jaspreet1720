#ifndef COURSE_H
#define COURSE_H
#include <iostream>

using namespace std;

class Course
{
  private:
  int id; // its a data member to store the course id
  string name; // its a data member to store the course name
  int credit; // its a data member to store the course credit

  public:

  course(); // its a default constructor
  Course(int id, string name, int credit);//its a parameterized constructor
  int getId() const;//Will return the course id
  const string &getName() const; // will return the course name
  int getCredit() const;// will return the course credit
  void setId(int id);//it sets the course id
  void setName(const string &name);//it sets the course name
  void setcredit(int credit); //it sets the course credit
  void print() const;//it will display the course details
};

#endif