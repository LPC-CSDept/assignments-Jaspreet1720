 #include <iostream>
using namespace std;

// The function returns the reference variable 

int &getValue(void);

int main()
{

	cout << "Return value is " << getValue() << endl;	

	getValue() = 200; 
	cout << "Return value is " << getValue() << endl;	

}

int &getValue()
{
	static int num = 100;
	cout << " Static num " << num << endl;
	return num;
}