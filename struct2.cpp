#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    int     id;
    char    *name=nullptr; // risky field;
};

int main()
{
	Student s1, s2;

	s1.id = 10;
	s1.name = new char [20];
	strcpy(s1.name, "John");

	cout << " S1 \n";
	cout << " ID : " << s1.id << endl;
	cout << " name : " << s1.name << endl;


	s2 = s1;
	s2.id = 20;
	cout << " S2 \n";
	cout << " ID : " << s2.id << endl;
	cout << " name : " << s2.name << endl;

	strcpy(s2.name, "Bill");
	cout << " After changing S2 \n";
	cout << " ID : " << s2.id << endl;
	cout << " name : " << s2.name << endl;


	cout << " After changing S2, S1's value \n";
	cout << " ID : " << s1.id << endl;
	cout << " name : " << s1.name << endl;

}

