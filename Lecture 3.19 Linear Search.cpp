// Linear Search

// Write a function that receives an integer array with all integers in the array
// being distinctive. This function will also receive the length of the array. The 
// third input of this function a specific integer, then the function will search the
// array for such integer. If such integer is found in the array, return the index of the
// element that hold such integer, otherwise, return -1.

#include<iostream>
using namespace std;

int linearSearch(int a[], int key, int length);

int linearSearch(int a[], int key, int length) {
	int index = -1;
	for (int k = 0; k < length; k++) {
		if (a[k] == key) {
			index = k;
			break;
		}
		return index;
	}
}

int main() {
	int arrayA[7] = { -1,2,10,33,31,8,9 };
	int arrayB[11] = { 0,-2,1,30,52,-11,21,-3,20,25,-1 };
	int keyIndex = linearSearch(arrayA, 5, 7);
	if (keyIndex == -1)
		cout << "The key is not found!" << endl;
	else {
		cout << "The key is found, and its index is";
		cout << keyIndex << endl;
	}
	return 0;
}