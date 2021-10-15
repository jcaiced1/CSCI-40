#include<iostream>
using namespace std;

int a = 5;              // this is a global variable

void functionA()
{
	a += 10;            // we can use this variable in functionA()
	cout << a << endl;
}

int main()
{
	functionA();
	a += 10;           //we can also use this variable in the main() function
	cout << a << endl;

	return 0;
}


// 15
// 25