#include <iostream>
#include <string>
#include "student.hpp"

using namespace std;

int main()
{
  int i = 10;
  studenta[10];

  for(int i = 0; i < n; i++)
  {
    cout << "enter student id: ";
    cin >> a[i].id;

    cout << "enter student name: ";
    cin >> a[i].name;

    cout << "enter score 1: ";
    cin >> a[i].score1;

    cout << "enter score 2: ";
    cin >> a[i].score2;

    cout << "enter score 3: ";
    cin >> a[i].score3;

    a[i].total_scores = a[i].score1 + a[i].score2 + a[i].score3;
  }
}