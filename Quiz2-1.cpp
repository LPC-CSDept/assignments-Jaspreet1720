// IN this program, we made a memory space for 10 integer elements and fill up the memory slots with the random values between 0 and 99.

#include<iostream>
#include <stdlib.h>
using namespace std;
// we are using this function to fill the values
void fillupArray(int *arr){

  for(int i = 0; i<10; i++){

arr[i] = rand() % 100; // We used rand() function because it generates a random int 

  }
}
// this function will print the array
void printArray(int *arr){

for(int i = 0; i<10; i++)
   cout<< arr[i] << " ";

   return;
}

int main(){

  int *arr = new int[10]; // created space for 10 integer values

  fillupArray(arr); // fill the array randomly from 0-99

  printArray(arr); // print the array

  return 0;
}