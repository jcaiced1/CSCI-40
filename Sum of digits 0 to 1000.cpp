// Write a C++ program that asks a user to enter an integer between 0 and 1000 and adds all the digits in the integer. 
// For example, if a user enter 932, then the program should display 14.

// Hint: Use the % operator to extract digits, and use the / operator to remove the extracted digit. 
// For example, 932%10 = 2 (the last digit) and 932/10 = 93 (the rest of digits after the extracted digit is removed)

#include<iostream>
using namespace std;

int main() {

	double w, x, y, z, total;
	int number;
	
	cout << "Enter a number between 0 and 1000:" << endl;
	cin >> number;

	w = number%10;
	number = number / 10;
	x = number % 10;
	number = number / 10;
	y = number % 10;
	number = number / 10;
	z = number % 10;

		total = w + x + y+ z;

		cout << "The sum of the digits is " << total << endl;

	system("pause");
	return 0;
}