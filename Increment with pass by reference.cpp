#include <iostream>
using namespace std;

void increment(int& n)			// & is used to store values from functions to main functions, otherwise the values will be forgoten once the function is declared an executed
{
	n++;
	cout << "n inside the function is " << n << endl;
}

int main()
{
	int x = 1;
	cout << "Before the call, x is " << x << endl;
	increment(x);
	cout << "After the call, x is " << x << endl;

	return 0;
}