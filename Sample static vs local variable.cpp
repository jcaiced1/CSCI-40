#include<iostream>
using namespace std;

void functionA()
{
	int a = 5;
	a += 10;
	cout << a << endl;
}

void functionB()
{
	static int a = 5;
	a += 10;
	cout << a << endl;
}

int main()
{
	cout << "functionA() is called three times:\n";
	functionA();
	functionA();
	functionA();
	cout << "functionB() is called three times:\n";
	functionB();
	functionB();
	functionB();

	return 0;
}

// functionA() is called three times :
// 15
// 15
// 15
// functionB() is called three times :
// 15
// 25
// 35