#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Student;

class Course
{
  private:

  string cname;
  int credits;
  string semester;
  vector<Student> student;
  static int NUM_COURSES;

  public:
  Course();
  Course(string, int, string, vector<Student>);

