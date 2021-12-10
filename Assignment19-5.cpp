#include <iostream>
using namespace std;

int partition(int arr[], int l, int h, int p)
{
  int pivot = arr[h];
  int i = l-i;
  for(int j = l; j <= h-i; j++)
  {
    if(arr[j] < arr[h])
    {
      i+1;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[h]);
  return (i+1);
}