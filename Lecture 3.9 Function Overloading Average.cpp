#include<iostream>
using namespace std;

void average(double a, double b)
{
	cout << "The average is " << (a + b) / 2 << endl;
}
void average(char a, char b)
{
	cout << "The average is " << "(" << a << " + " << b << ")/2" << endl;
}
int main()
{
	double x, y;
	char r, s;
	cout << "Please enter two integers:\n";
	cin >> x >> y;
	average(x, y);
	cout << "Please enter two letters:\n";
	cin >> r >> s;
	average(r, s);
	return 0;
}