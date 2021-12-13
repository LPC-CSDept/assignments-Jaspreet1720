#include <iostream>
#include <fstream>
#include "Course.hpp"

using namespace std;

int binary_search(Course[], int, int);
int recursive_binary_search(Course[], int, int, int);

int main()
{
  ifstream data_file("data.txt"); // will open the file containing the input data

  if(data_file.fail())
  {
    cout << "Error!! Failed to open data.txt file..."<< endl;
    Cout << "Make sure data.txt file is present in the current working directory." << endl;
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

  for(int p = 0; p < n; p++)
  {
    for(int q = 0; q < n - p - 1; q++)
    {
      if(courses[q].getId() > courses[q+1].getId())
      {
        Course c  = course[q];
        courses[q] = courses[q+1];
        courses[q+1] = c;
      }
    }
  }

  while(true)
  {
    int id;

    cout << "Enter course id to search(-1 to exit): ";
    cin >> id;

    if(id == -1)
    {
      break;
    }
    int x = binary_search(courses, n, id); // search the course using binary search
    int y = recursive_binary_search(courses, 0, n - 1, id); // search the code using recursive binary search

    if(x!= -1)
    {
      cout << "Course found at index" << x << endl;
      cout << "\nResult from iterative binary search: ";
      courses[x].print();
      cout << "\nResult from recursive binary search: ";
      courses[y].print();
      cout << endl;
    }

    else
    {
      cout << "Course with id = " << id << " not found..." << endl;
    }
  }

  return 0;
}  

int binary_search(Course *courses, int n, int search_id)
{
  int l = 0;
  int r = n - 1;

  while(l <= r)
  {
    int mid = l+(r-l)/2;

    if(courses[mid].getid() == search_id)
    {
      return mid;
    }

    if(courses[mid].getid() < search_id)
    {
      l = mid + 1;
    }

    else
    {
      r = mid - 1;
    }
  }

  return -1;
}