//LAB Assignment:

//Write a program that uses a nested looping statement to display 7 lines of asterisks
// with 10 asterisks per line and a space between them.

#include<iostream>
using namespace std;

int main() {

	for (int i = 0; i < 7;i++) {
		for (int j = 0; j < 10; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

