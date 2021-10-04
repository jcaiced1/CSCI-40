// Better Menu Driven Program to perform multiple tasks.

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main() {
	int s = 0;
	do {
		cout << "Please select one of the following by entering 1, 2, or 3: " << endl;
		cout << "+----------------------------+\n";
		cout << "| 1. Display a triangle      |\n";
		cout << "| 2. Find the sum            |\n";
		cout << "| 3. Exit                    |\n";
		cout << "+----------------------------+\n";
		cin >> s;
		switch (s) {
		case 1:
			int a;
			cout << "Please enter the base of the triangle\n";
			cin >> a;
			for (int i = 0; i < a; i++) {
				for (int j = 0; j < a - i; j++) {
					cout << left;
					cout << setw(2) << "*";
				}
				cout << endl;
			}
			break;
		case 2:
			// Open a file
		{ifstream input("integers.txt"); //needs a file in the same folder name integers.txt with integers.
		double sum = 0;
		double number;
		while (!input.eof()) // Continue if not end of file
		{
			input >> number; //Read data
			sum += number;
		}
		input.close();
		cout << "\nThe sum of the integers in the file is " << sum << endl; }
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