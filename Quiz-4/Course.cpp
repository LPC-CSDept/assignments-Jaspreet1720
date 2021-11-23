#include "Course.hpp"
#include "Student.hpp"
#include <cstring>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int Course::NUM_COURSES = 0;

Course::Course()
{
  NUM_COURSES += 1;
}
