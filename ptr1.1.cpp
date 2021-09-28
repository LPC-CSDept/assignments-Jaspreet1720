#include <iostream>
using namespace std;

int main()
{
	int 	num1 = 100;
	int 	num2 = 200;
	// int 	*iptr = &num1 ;

	int 	*iptr ;
	iptr = &num1;


	iptr = &num1;
	*iptr = *iptr + 10;

	// Direct value of pointer : Address
	// Indirect value (dereferenced) of pointer : The value that is located in the address of that pointer
	
	*iptr = &num1;

	cout << num1 << endl;  // 110 
}