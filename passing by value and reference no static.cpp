#include <iostream>
using namespace std;

void aFunction(void);

int main() {
	aFunction();
	aFunction();
	aFunction();
	return 0;
}

void aFunction(void) {
int a = 0;  // Doesnt preserve the value, always starts from 10
	a += 10;
	cout << a << endl;
}

//prints  10
//        10
//        10