#include<iostream>
using namespace std;

int main() 
{
	char a;
	cout << "Have you studied C++ before? (Enter y for yes, and enter n for no)" << endl;
	cin >> a;
	if (a == 'y') {
		cout << "Skip Chapter 1" << endl;
		cout << "Directly do Assignment 2" << endl;
	}
	else {
		cout << "Study Chapter 1 first" << endl;
		cout << " and then do Assignment 2" << endl;
	}
	cout << "Begin Chapter 2" << endl;
	return 0;
}