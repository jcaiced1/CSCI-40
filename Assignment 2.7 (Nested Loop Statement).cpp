// Assignment 2.7 (Nested Loop Statement)
// 
// Write a program that uses nested looping statements to perform following two programming tasks:
//  1. Asks a user to enter an integer and based on the user input, display a triangle with asterisks.
//  2. Asks user to enter two integers, and use those two integers as the length and the width to
//     display a rectangle with asterisks.

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int x, a, h, l;
	cout << "+===========================+" << endl;
	cout << "| 1. Draw triangle with *   |" << endl;
	cout << "| 2. Draw Square with *     |" << endl;
	cout << "| 3. Do nothing             |" << endl;
	cout << "+===========================+" << endl;
	cin >> a;
	switch (a){
	case 1:
		cout << "Please enter an integer: " << endl;
		cin >> x;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < i; j++) {
				cout << left;
				cout << setw(2) << " ";
			}
			for (int j = 0; j < x - i; j++) {
				cout << left;
				cout << setw(2) << "*";
			}
			cout << endl;
		}
		break;
	case 2:
		cout << "Please enter the height: ";
		cin >> h;
		cout << "Please enter the length: ";
		cin >> l;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < l; j++)
				if (i == 0 or i == (h - 1) or j == 0 or j == (l - 1)) {
					cout << "* ";
				}
				else
					cout << "  ";
			cout << endl;
		}
		break;
	case 3:
		cout << "You choose not to do anything, bye!" << endl;
		break;
	default:
		cout << "Invalid input, please enter 1, 2, 3, or 4." << endl;
	}
	return 0;
}