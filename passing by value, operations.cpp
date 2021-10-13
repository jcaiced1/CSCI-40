#include <iostream>
using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);

int main() {
	int x = 1, y = 2, z = 3;
	cout << sum(1, 2) << endl;
	cout << sum(1, 2, 3) << endl;
	return 0;
}

int sum(int a, int b) {
	return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

// prints  3
//         6