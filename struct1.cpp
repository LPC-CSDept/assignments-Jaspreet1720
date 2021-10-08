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

	Student *sptr;

	sptr =  new Student; // int + ptr = 4 + 8 = 12. 

	sptr->name = new char [20]; 

	sptr->id = 10;
	strcpy(sptr->name, "John");
	

}