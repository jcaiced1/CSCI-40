// Write a program that performs following tasks: (A menu driven program is preferable)
// 
// 1. Ask a user to enter two integers and store them in two integer variables, say a and b.
//	  Then use a for loop statement to display the 3rd power of all the numbers between a and b with a and b included.
// 2. Use a for loop statement to produce and display a table of temperature conversions between Celsius and Fahrenheit.

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int x, a, b, d, n;
	double c;

	cout << "+===========================+" << endl;
	cout << "| 1. Calculate 3rd power    |" << endl;
	cout << "| 2. Temperature conversion |" << endl;
	cout << "| 3. Do nothing             |" << endl;
	cout << "+===========================|" << endl;

	cin >> x;
	switch (x) {
	case 1:
		cout << "This program calculates the 3rd power of 2 integers and the integers between them" << endl;
		cout << "First integer: ";
			cin >> a;
			cout << "Second integer: ";
			cin >> b;
			cout << endl;

			if (a > b) {   // in case of user entered a with higher value than b
				d = a;
				a = b;
				b = d;
			}

		for (int i = a; i <= b; i++) {
			cout << "3rd power of " << i << ": " << i * i * i << endl;
		}
		break;
	case 2:
		cout << "This program converts from Celsius to Fahrenheit" << endl;
		cout << "Please enter how many celsius degrees you want to convert: " << endl;
		cin >> n;
		cout << left;
		cout << "=============================" << endl;
		cout << setw(18)<<"Celsius"<<"Fahrenheit" << endl;
		cout << "=============================" << endl;
		for (int i = 0; i < n; i++) {
			cin >> c;
			cout << left;
			cout << "\033[F"; //transforms the cin into a cout from the previous line and then then displays it with the setw(18)
			cout << setw(18)<< c <<(9 / 5.0) * c + 32 << endl;
		}
		cout << "=============================" << endl;
		break;
	case 3:
		cout << "You chose not to do anything, the program is terminated." << endl;
		break;
	default:
		cout << "Invalid input, please enter 1, 2, or 3 " << endl;
}
	return 0;
}