#include <iostream>
using namespace std;

int main()
{
	int a[5];
	int s = 0;
	cout << "Please enter five integers:\n";
	
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	//Display those numbers on the screen:
	cout << "=============\n";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
	//Calculate and display the sum of those numbers:
	for (int i = 0; i < 5; i++) {
		s += a[i];
	}
	cout << "The sum of is " << s << endl;
	return 0;
}