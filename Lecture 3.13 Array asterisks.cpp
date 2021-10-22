// write a program that declares an integer array. Initializes this array with positive
// integers, then print out a line of asterisks according to the value of each element of the
// array.

#include <iostream>
using namespace std;

int main() {
	int a[4] = { 3,2,11,7};
	for (int i = 0; i < 4; i++) {
		cout << a[i] << "   ";
		for (int k = 0; k < a[i]; k++)
			cout << "*  ";
		cout << endl;
	}
	return 0;
}