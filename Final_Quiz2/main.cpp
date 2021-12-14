#include <iostream>
#include <fstream>
#include "Course.hpp"

using namespace std;

void quick_sort(Course *, int, int);

int main()
{
  ifstream data_file("data.txt");
  if(data_file.fail())
  {
    cout << "Error!! Failed to open data.txt file..." << endl;
    return 1;
  }

  Course courses[10];
  int n = 0;

  while(!data_file.eof())
  {
    int id, credit;
    string name;

    data_file >> id;
    data_file >> name;
    data_file >> credit;

    Course c(id, name, credit);
    courses[n++] = c;
  }

  data_file.close();

  cout << "Array Before Sorting: " << endl;

  for(int i = 0; i < n; i++)
  {
    courses[i].print();
  }

  quick_sort(courses, 0, n-1);

  cout << "\nArray After Performing the Quick Sort: " << endl;

  for(int i = 0; i < n, i++)
  {
    courses[i],print();
  }
    return 0;

}

void quick_sort(Course *courses, int l, int h)
{
  if(l>=h) return;

  int i = l - 1;
  int j = h + 1;
  Course course = courses[(l+h)/2];

  while(i < j)
  {
    while(courses[++i.getId() < course.getId()]);
    while(courses[--j.getId() > course.getId()]);
  }
}