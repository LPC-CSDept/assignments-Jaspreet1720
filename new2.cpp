#include <iostream>
using namespace std;

double *makeArray(int bunch);

int main()
{
	double *ptr;

	ptr = makeArray(20);
	for(int i=0;i<20;i++)
		cout << *(ptr+i) << "\t";
	cout << endl;

}


double *makeArray(int bunch){
  double *apple =  new double[bunch];
  for(int i = 0; i < bunch; i++){
    apple[i] = i;
  }
  return apple;
}