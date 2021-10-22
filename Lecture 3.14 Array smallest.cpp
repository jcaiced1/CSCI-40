// Write a function that receives an integer array along with its length (the number of elements
// in the array). The function will return the smallest number in the array the function receives

#include <iostream>
using namespace std;

int smallest(int a[], int length) {
	int t = a[0];
	for (int i = 0; i < length; i++) {
		if (a[i] < t) {
			t = a[i];
		}
	}
	return t;
}

int main()
{
	int anArray[5] = { 4,1,11,7,3 };
	int anotherArray[8] = { 2, 4,1,-4,5,-2,6,3 };
	cout << "The smallest number in the array is " << smallest(anotherArray, 8) << endl;
	return 0;
}