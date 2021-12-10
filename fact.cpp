

//  factorial numbers
// 	5! = 5 x 4 x 3 x 2 x 1 = 120

#include <iostream>
using namespace std;

int factorial(int );
int factorial_recursive(int );

int main()
{
	int n;
	int ret;

	cout << "Enter the number : ";
	cin >> n;

	ret = factorial(n);
	cout << " Factorial is " << ret << endl;

	ret = factorial_recursive(n); // 5
	cout << " Factorial(recursion) is " << ret << endl;
}

int factorial(int n)
{
	int f=1;
	for(int i=0; i<n; i++) // i = 0 .. n-1 
	{
		f = f * (i+1) ;  // i+1 : 1 .. n
	}
	return f;
}


int factorial_recursive(int n)
{

	if ( n == 1) 
		return 1;
	else 
		return n * factorial_recursive(n-1);

}