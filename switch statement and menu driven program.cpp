// CSCI 40 Sample Program 6 (switch statement)
#include<iostream>
using namespace std;

int main() {
	double lenght, width;
	int a, x, y , w;
	cout << "Please select a task from the following menu: " << endl;
	cout << "+-----------------------------+" << endl;
	cout << "| 1. Find area of rectangle   |" << endl;
	cout << "| 2. See a message            |" << endl;
	cout << "| 3. Practice multiplication  |" << endl;
	cout << "| 4. Do Nothing               |" << endl;
	cout << "+-----------------------------+" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Please enter the lenght and the width of a rectangle: " << endl;
		cin >> lenght >> width;
		cout << "The area of this rectangle is " << lenght * width << endl;
		break;
	case 2:
		cout << "Good Morning!" << endl;
		break;
	case 3:
		x = rand() % 100;
		y = rand() % 100;
		cout << x << " * " << y << " = ?" << endl;
		cin >> w;
		if (w == x * y) {
			cout << "Great! It is correct." << endl;
		}
		else {
			cout << "Sorry, it was wrong, the correct answer is " << x * y << endl;
		}
		break;
	case 4:
		cout << "You choose not to do anything, bye!" << endl;
		break;
	default:
		cout << "Invalid input, please enter 1, 2, 3, or 4." << endl;
	};
	return 0;
}