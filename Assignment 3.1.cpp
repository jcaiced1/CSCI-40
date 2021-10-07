// Assignment 3.1 (C++ Functions)

//Write a C++ program that contains following 2 functions (which are not main() functions)

//1.  A function that can be used for calculating the sum of a sequence of squares. The
// function receives two positive integers as its inputsand returns the sum of all the squares of those
// integers between those two integers with those two integers included.You may name this
// function as sumSquares() For example, in a C++ program, if the function is called with following statement :
// int s = sumSquares(5, 11);
// 
// then the value of s will be the sum of the squares of 5, 6, 7, 8, 9, 10, 11, which is 476

// 2. A function that receives a positive integers as its input.The function will call a built - in 
// random function rand() a certain number of times based on the input of the function. 
// Each time the function rand() is called, it will randomly generate two numbers 0 or 1 (use rand() % 2).
// If rand() % 2 produce 0, the function display T.If rand() % 2 produce 1, the function display H.
// The function also display the total number of Tsand the total number of Hs.
// This function has no return value.You may name this function as "flipCoin".



#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void Menu()
{
	cout << "+=================================+\n";
	cout << "| 1. Sum of sequence of squares   |\n";
	cout << "| 2. Random T and H               |\n";
	cout << "| 3. Do nothing                   |\n";
	cout << "+=================================+\n";
}

int sumSquares(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++)
		sum = sum + (i * i);
	return sum;
}

void flipCoin(int c) {
		int d = 0, e = 0;
	for (int i = 0; i < c; i++) {
		if (rand() % 2 == 0) {
			cout<<'T';
			d++;
		}
		else {
			cout<<'H';
			e++;
		}
	}
	cout << endl;
	cout << " Ts " << d << " Hs: " << e << endl;
}

int main() {
	int s = 0;
	do {
		Menu();
		cin >> s;
		switch (s) {
		case 1:
			int y, z;
			cout << "Please enter two integers: " << endl;
			cin >> y >> z;
			cout << "The sum of squares is: " << sumSquares(y, z) << endl;
			break;
		case 2: 
			int x;
			cout << "Please enter an integer: ";
			cin >> x;
			flipCoin(x);
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