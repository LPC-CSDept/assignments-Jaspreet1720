#include <iostream>
using namespace std; // not good habit 

int *getValue(int *); // 1st & ; Ref. 2nd Ref

int main()
{

	int *ptr;
	int num, ret;
	ptr = &num; 		// address

	ptr = getValue(&num);  // &num : address of num 
	ret = 10;	

}

int *getValue(int *n) // 
{
	static int local;
	cin >> *n; 
	return &local;
}

