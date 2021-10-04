// Better Menu Driven Program to perform multiple tasks.

#include<iostream>
using namespace std;

int main() {
	int s = 0, a, b, sum = 0;
	do {
		cout << "Please select one of the following: " << endl;
		cout << "+------------------------------+\n";
		cout << "| 1. Display Messages          |\n";
		cout << "| 2. Calculate Sum of Squares  |\n";
		cout << "| 3. Exit the program          |\n";
		cout << "+------------------------------+\n";
		cin >> s;
		switch (s) {
		case 1:
			cout << "How many times do you want to see this message?\n";
			cin >> a;
			for (int i = 0; i < a; i++)
				cout << "Good Morning!\n";
			break;
		case 2:
			cout << "Please enter the first number: ";
			cin >> a;
			cout << "Please enter the second number: ";
			cin >> b;
			for (int i = a; i <= b; i++) {
				sum += i * i;
			}
			cout << "The sum is " << sum << endl;
			break;
		case 3:
			cout << "You choose to exit the program.\n";
			break;
		default:
			cout << "Invalid input, please enter only 1, 2, or 3\n";
		}
	} while (s != 3);
	return 0;
}