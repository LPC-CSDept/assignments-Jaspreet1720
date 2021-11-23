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
  {
    cerr << "File open error\n";
    exit(0);
  }

  for(int i = 0; i<N; i++)
  {
    ifs >> courses[i];
    cout << courses[i] << endl;
  }

  ifs.close();

  ifs.open("addstudents.txt");
  if(ifs.fail())
  {
    cerr << "File open error\n";
    exit(0);
  }
