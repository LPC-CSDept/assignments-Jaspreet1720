 #include <iostream>
using namespace std;

int main()
{

	// int 	num[5] = {10, 20, 30, 40, 50};
	double 	num1, num2, num3, num4, num5;
	num1 = 10;
	num2 = 20;
	num3 = 30;
	num4 = 40;
	num5 = 50;

	double 	* ptr;
	ptr =  &num1;

	cout << *ptr << endl; // print value? 10
	cout << *(ptr+1) << endl; // print value? 20 
}