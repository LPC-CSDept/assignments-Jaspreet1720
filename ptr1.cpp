#include <iostream>
using namespace std;

int main()
{
	int 	num = 100;
	int 	*ptr;	// Pointer var. declaration

	cout << " Address of num " <<  &num << endl;


	ptr = &num;

	cout << "The vlaue of ptr " << ptr << endl;

	cout << *ptr << endl; // 100 



}

