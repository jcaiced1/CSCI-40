//Write a program that 

// 1. Asks a user to enter a score between 0 and 100 and your program shows the letter grade based on the score user entered.

// A: 90 - 100.   B : 80 - 89.  C : 70 - 79.  D : 60 - 69.  F : 0 - 59

// 2. Asks a user to enter 6 integers and save them in 6 different variables.Re - arrange the values of the variables in ascending order.

#include <iostream>
using namespace std;

int main() {

	double score;

	cout << "Enter a score between 0 and 100" << endl;

	cin >> score;

	if (90 <= score && score <= 100) {
		cout << "Your letter grade based on the score you entered is A" << endl;
	}
	if (80 <= score && score <= 89) {
		cout << "Your letter grade based on the score you entered is B" << endl;
	}
	if (70 <= score && score <= 79) {
		cout << "Your letter grade based on the score you entered is C" << endl;
	}
	if (60 <= score && score <= 69) {
		cout << "Your letter grade based on the score you entered is D" << endl;
	}
	if (0 <= score && score <= 59) {
		cout << "Your letter grade based on the score you entered is F" << endl;
	}

	int a, b, c, d, e,f, t;
	cout << "Please enter 6 integers: " << endl;
	cin >> a >> b >> c >> d>>e>>f;

	//-----------------------------------------
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	if (c > d) {
		t = c;
		c = d;
		d = t;
	}
	if (d > e) {
		t = d;
		d = e;
		e = t;
	}
	if (e > f) {
		t = e;
		e = f;
		f = t;
	}
	//-------------------------------------------
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	if (c > d) {
		t = c;
		c = d;
		d = t;
	}
	if (d > e) {
		t = d;
		d = e;
		e = t;
	}
	//-------------------------------------------
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	if (c > d) {
		t = c;
		c = d;
		d = t;
	}
	//----------------------------------------------
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	//------------------------------------------------
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}

	cout << a << " " << b << " " << c << " " << d << " " <<e<<" "<<f<<" " << endl;

	return 0;
}