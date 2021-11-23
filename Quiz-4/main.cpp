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

  string courseId;
  while (ifs >> courseId)
  {
    cout << "Course ID: " << courseId << endl;
    int courseIndex;
    for(int i = 0; i < Course::getNumCourses(); i++)
    {
      if(courses[i].getCName() == courseId)
      {
        courseIndex = i;
      }
    }
int numStudent;
    ifs >> numStudent;

    for(int i = 0; i < numStudent; i++)
    {
      int ID;
      string sname;
      char grade;
      double scores;
      ifs >> ID >> sname >> grade >> scores;
      Student s(ID, sname, grade, scores);
      courses[courseIndex].addStudent(s);
    }

    cout << "Updated Students list for the course: " << endl;
    cout << courses[courseIndex] << endl;
  }

