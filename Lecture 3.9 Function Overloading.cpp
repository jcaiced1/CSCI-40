#include<iostream>
using namespace std;

int largest(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int largest(int a, int b, int c)
{
	int t = a;
	if (b > t)
		t = b;
	if (c > t)
		t = c;
	return t;
}
int main()
{
	int x, y, z;
	cout << "Please enter two integers:\n";
	cin >> x >> y;
	cout << "The largest number is " << largest(x, y) << endl;
	cout << "Please enter three integers:\n";
	cin >> x >> y >> z;
	cout << "The largest number is " << largest(x, y, z) << endl;
	return 0;
}