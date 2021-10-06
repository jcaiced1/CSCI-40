// Lecture 3.4

//Create a function that calculates and returns the greatest common factor of two given integers.

#include<iostream>
using namespace std;

int gcf(int a, int b)
{
	int t, g;
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	for (int i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0)
			g = i;
	}
	return g;
}

int main()
{
	int a, b;
	cout << "Please enter two integers:\n";
	cin >> a >> b;
	cout << "The Greatest Common Factor of "<<a<< " and "<<b<<" is: " << gcf(a, b) << endl;
		return 0;
}