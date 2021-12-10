#include <iostream>
using namespace std;

int binarySearch(int array[], int N, int target);
int binarySearch_recur(int array[], int, int, int);
void bubbleSort(int array[], int N);
void printArray(int array[], int N);

int main()
{
	const int N= 10;
    int array[N] = {10, 5, 15, 20, 25, 35, 40, 45, 50, 60};
    int target = 40;

	printArray(array, N);
	bubbleSort(array, N);
	printArray(array, N);
	int idx = binarySearch(array, N, target);
	cout << "Target is in " << idx << endl; 
	idx = binarySearch_recur(array, 0, N-1, target);
	cout << "Target is in " << idx << endl; 
}

void printArray(int array[], int N)
{
    for(int i=0; i<N; i++)
    {
        cout << array[i]  << "\t" ; 
    }
	cout << endl;
}

int binarySearch_recur(int array[], int first, int last,  int target)
{
	int mid, ret;

	if (first > last)
		return -1;
	mid = (first + last) / 2;
	if (array[mid] == target)
		return mid;
	if (array[mid] > target)
		ret = binarySearch_recur(array, first, mid - 1, target);
	else
		ret = binarySearch_recur(array, mid + 1, last, target);
	return ret;

}

int binarySearch(int array[], int N, int target)
{
    int first, last, mid;
    int idx = 0;

    first = 0;
    last = N-1;
    while ( first <= last) 
    {
        
        mid = (first + last) / 2;
        if ( array[mid] == target)
            return mid;
        if ( array[mid] > target)
            last = mid - 1;
        else 
            first = mid + 1;
    }
    return -1;
}


void bubbleSort(int array[], int N)
{
	int min, index;
	for(int i=0; i < N-1; i++)
	{
		for(int j=0; j<N-i-1; j++)
		{
			if ( array[j] > array[j+1])
				swap(array[j], array[j+1]);
		}
	}
}