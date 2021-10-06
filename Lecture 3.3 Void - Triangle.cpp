// Lecture 3.3 Void - Triangle

#include <iostream>
using namespace std;

void displayTriangle(int base)
{
	for (int i = base; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << "* ";
		cout << endl;
	}
}

int main()
{
	int x;
	cout << "Please enter an integer for the base of the triange: " << endl;
	cin >> x;
	cout << "The triangle is displayed as following:\n";
	displayTriangle(x);
	return 0;
}