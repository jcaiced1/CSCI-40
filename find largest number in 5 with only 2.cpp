//Find the largest number among five integers user entered
//Note: The maximum number of variables can be used in the
//program is two

#include<iostream>
using namespace std;

int  main()
{
	int m, a;

	cout << "Please enter the first integer:\n";
	cin >> m;
	
	cout << "Please enter the second integer:\n";
	cin >> a;
	if (a > m) {
		m = a; //replace the value of m by the value of a
	}
	
	cout << "Please enter the third integer:\n";
	cin >> a;
	if (a > m) {
		m = a;
	}

	cout << "Please enter the fourth integer:\n";
	cin >> a;
	if (a > m) {
		m = a;
	}

	cout << "Please enter the last integer:\n";
	cin >> a;
	if (a > m) {
		m = a;
	}

	cout << "The largest number you entered is " << m << endl;

	return 0;
}