#include <iostream>
#include "Student.hpp"
#include "Course.hpp"
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
  int N = 4;
  Course courses[N];
  ifstream ifs;

  ifs.open("coursestudents.txt");
  if(ifs.fail())
