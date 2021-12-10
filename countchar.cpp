#include <iostream>
#include <string>
using namespace std;

int countChar(string, char);
int main()
{

	string name = "aabbbcccddd";

	// cout << name << endl;
	// cout << name.substr(1) << endl; 

	char 	target = 'a';

	cout << "The number of char " << target << " is " << countChar(name, target) << endl;


}

int countChar(string n, char c)
{
    if(n.length()==0)
        return 0;
    else 
	{
		if(n[0]==c)
			return 1 + countChar(n.substr(1),c);
		else
			return countChar(n.substr(1),c);
	}
}