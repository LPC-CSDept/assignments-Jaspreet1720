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

  ifs.close();

  for(int i = 0; i<Course::getNumCourses(); i++)
  {
    cout << courses[i] << endl;
  }
}

ifstream &operator>>(ifstream &ifs, Course &c)
{
  string cname;
  int credits;
  string semester;
  ifs >> cname >> credits >> semester;

  int numStudent;
  ifs >> numStudent;

  vector<Student> students;
  for(int i = 0; i<numStudent; i++)
  {
    int ID;
    string sname;
    char grade;
    double scores;
    ifs >> ID >> sname >> grade >> scores;
    Student s = Student(ID, sname, grade, scores);
    students.push_back(s);
  }
  c.setCourse(cname, credits, semester, students);
}

ostream &operator<<(ostream &os, Course &c)
{
  os << c.getCName() << "\t" << c.getCredits() << "\t" ;
  os << "StudentID\tcredit\tGrade\tScore\t" << endl;

  for(int i = 0; i<c.getStudent().size(); i++)
  {
    os << c.getstudent()[i].getID() << " \t\t " << c.getstudent()[i].getSName() << "\t\t" << c.getstudent()[i].getGrade() << "\t\t" << c.getstudent()[i].getScores() << "\t\t";
  }
  os << " ";
}

