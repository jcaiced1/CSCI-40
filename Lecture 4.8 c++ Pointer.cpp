#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int* p = &a;
	*p = 15;
	cout << a << endl;
	a = 20;
	cout << *p << endl;
	p = new int;	//this "new" statement allocate a piece of memory cell to the program
					// and put the address of this memory inte the pointer p
	*p = 100;
	cout << *p << endl;
	cout << a << endl;

	return 0;
}