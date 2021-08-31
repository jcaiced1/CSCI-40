// Example of using if-else statement and relational statement
// Following program calculates and displays the area of a rectangle
// The program asks a user to enter the length and the width of a rectangle, 
// then check if the numbers that user entered as the length and width are valid number,
// if they are, then calculates and displays the area of the rectangle. Otherwise, displays the warning message.

#include<iostream>
using namespace std;

int main()
{
	double lenght, width, area;
	cout << "Please enter the length and the width of a rectangle: ";
	cin >> lenght >> width;
	
	if (lenght >= 0 and width >= 0) {
		area = lenght * width;
		cout << "The area of such rectangle is " << area << endl;
	}
	else {
		cout << "Invalid data inputs" << endl;
		cout << "The lenght and the width a rectangle must be greater than or equal to 0" << endl;
	}
	return 0;
}