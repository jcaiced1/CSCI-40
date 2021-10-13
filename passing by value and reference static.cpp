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
	static int a = 0;  // Preserves the value even when the function called is completed
	a += 10;
	cout << a << endl;
}

//prints  10
//        20
//        30