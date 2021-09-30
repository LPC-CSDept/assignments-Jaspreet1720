 #include <iostream>
using namespace std;

void getValue1( int & );
void getValue2( int * );

int main()
{

	int num=0;

	getValue1(num);
	cout << " Your input is " << num << endl;

	getValue2(&num);
	cout << " Your input is " << num << endl;

}
void getValue1(int &num)
{
	cout << "Enter your input : ";
	cin >> num;
}

void getValue2(int * num)
{
	cout << "Enter your input : ";
	cin >> *num;
}