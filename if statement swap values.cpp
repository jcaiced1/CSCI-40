//if value of a is higher than b, swap values

#include<iostream>
using namespace std;

int  main()
{
	int a, b, t;
	cout << "Please enter two integers: " << endl;
	cin >> a >> b;
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	cout << "a = " << a << " b= " << b << endl;
	return 0;
}