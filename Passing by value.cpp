#include <iostream>
using namespace std;

void functionA(int a)
{
	a += 10;
	cout << a << endl;
}

int main()
{
	int x = 5;
	functionA(x);  // Displays 15
	cout << x << endl;  //  Displays 5
	return 0;
}