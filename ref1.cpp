 #include <iostream>
using namespace std;

int main()
{

	int num1 = 10;
	int num2 = 20;
	int &ref = num1;

	cout << ref << endl; // 10

	num1 = 20;
	cout << ref << endl; // 20

	ref = 30;
	cout << num1 << endl; // 30

	ref = num2;
	ref = 40;
	cout << num1 << endl; // 20 or 40? i think 40

	// ref = &num2; 
	// ref = num2; // not change the reference, change the value of num1 to num2

	// once we declare the ref variable, the ref value cannot be changed 
	
}