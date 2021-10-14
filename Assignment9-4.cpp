#include <iostream>
#include <fstream>
using namespace std;
// pupose of the program is to understand the pointer variable that points to the structure array

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

Students *makeStudents(int );
void printStudents(Students * const, int);
void sortStudents(Students * const, int);


int main()
{
    const int N=10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    printStudents(ptr, N);
}


Students *makeStudents(int N)
{
	Students 	*ptr = new Students [10];

	ifstream 	ifs;

	ifs.open("students.txt");
	if ( ifs.fail())
    {
        cerr << "File open error\n";
        exit(0);
    }
	for(int i=0; i<N; i++)
	{
		ifs >> (ptr+i)->sid >> (ptr+i)->sname ;
		for(int j=0; j<NUM_SCORES; j++)
			ifs >> (ptr+i)->scores[j];
	}

	return ptr;

}
void printStudents(Students * const ptr, int N)
{
	for(int i=0;i<N;i++)    //printing student information using pointer variable
	{
		cout << (ptr+i)->sid << "\t" << (ptr+i)->sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  (ptr+i)->scores[j] << "\t";
		cout << endl;
	}
	cout << "==== End of Record === \n";
}
void sortStudents(Students *const ptr, int N)

{

   
    for(int i = 0; i<N; i++)    // using code from 9-3, purpose is to sort students in the ascending order
    {
      for(int j=0; j<N-i; j++)

      {
double sum1 = (ptr+j)->scores[0] + (ptr+j)->scores[1] + (ptr+j)->scores[2];
double sum2 = (ptr+j+1)->scores[0] + (ptr+j+1)->scores[1] + (ptr+j+1)->scores[2];

             if(sum1>sum2)          

             {
               swap(*(ptr+j), *(ptr+j+i));


             }


      }


    }

}



