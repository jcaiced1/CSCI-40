//MENU DRIVEN PROGRAM
// If a program performs several tasks and a user is not necessarily to perform all the tasks, 
// then we may need to write a program that includes a menu to allow a user to perform one of the tasks selectively. 
// Study following sample program which shows how to write a menu driven program:

#include<iostream>
using namespace std;

int main(void) {
	int choice;
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "What would you like to do?" << endl;
	cout << "Make your selection by entering 1, 2, 3, or 4." << endl;
	cout << "+----------------------------+" << endl;
	cout << "|1. Calculate area of a rectangle" << endl;
	cout << "|2. Calculate area of a triangle" << endl;
	cout << "|3. Calculate area of a circle" << endl;
	cout << "|4. Nothing" << endl;
	cout << "+----------------------------+" << endl;
	cin >> choice;

	if (choice == 1) {
		int lenght, width;
		cout << "Enter the lenght: ";
		cin >> lenght;
		cout << "Enter the width: ";
		cin >> width;
		cout << "The area of this rectangle is " << lenght*width;
	}

	if (choice == 2) {
		float base, height;
		cout << "Enter the base: ";
		cin >> base;
		cout << "Enter the height: ";
		cin >> height;
		cout << "The area of this triangle is " << 0.5 * base * height << endl;
	}

	if (choice == 3) {
		float radius;
		cout << "Enter the radius: ";
		cin >> radius;
		cout << "The area of this circle is " << 3.1415 * radius * radius << endl;
	}

	if (choice == 4) {
		cout << "You did not want to do anything, thak you and come back again!" << endl;
	}

	cout << "\n\nProgram is terminated, exit the program by closing the window." << endl;

	return 0;
}