// write a function that receives an integer array and add 5 to each number 
// stored in the array

#include <iostream>
using namespace std;

void addFive (int a[], int length)
{
	for (int k = 0; k < length; k++)
		a[k] += 5;
}

int main()
{
	int array[6] = { 56, 15, 34, 72, 11, 10
	};
	addFive(array, 6);
	for (int i = 0; i < 6; i++)
		cout << array[i] << " ";
	cout << endl;
	return 0;
}