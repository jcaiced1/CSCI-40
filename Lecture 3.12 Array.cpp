// write a program that asks a user to enter 20 integers, then displays them. Then calculates
// the total number of the negative integers that user entered and display it.
// Finally, replaces all the negative numbers by 0 and then displays all the numbers again.

#include <iostream>
using namespace std;

int main()
{
	int a[20];
	int counter = 0;
	cout << "Please enter 20 integers: " << endl;
	for (int i = 0; i < 20; i++)
		cin >> a[i];
	for (int i = 0; i < 20; i++)
		cout << a[i] << " ";
	cout << endl;
	for(int i=0;i<20;i++)
		if (a[i] < 0) {
			counter++;
			a[i] = 0;
		}
	for (int i = 0; i < 20; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}