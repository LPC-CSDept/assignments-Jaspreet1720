
#include <iostream>
using namespace std;

int sum(int );

int main()
{
	int n;
	int ret;

	cout << "Enter the number : ";
	cin >> n;


	ret = sum( n ); 
	
	cout << " Sum is " << ret << endl;
}

int sum(int n)
{
	int tmp;

	if ( n == 1)
		return 1;
	else 
	{
		tmp = n + sum(n-1);
	}
	return tmp;

}