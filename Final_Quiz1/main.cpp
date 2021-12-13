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
}