// Write a program that asks a user to enter 4 integers, save them in for variables. 
// Then, re-arrange the value of those variables in ascending order. (Sorting Numbers)

#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, t;
	cout << "Please enter 4 integers: " << endl;
	cin >> a >> b >> c >> d;
	
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
	//-------------------------------------------
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}

	cout << a << " " << b << " " << c << " " << d << " " << endl;
	return 0;
}