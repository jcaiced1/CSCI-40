#include <iostream>
using namespace std;

void swapA(int a, int b);
void swapB(int& a, int& b);

int main() {
	int x = 6, y = 11;
	swapA(x, y);
	cout << x << " " << y << endl;
	swapB(x, y);
	cout << x << " " << y << endl;
	return 0;
}

void swapA(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
}

void swapB(int& a, int& b) {
	int t;
	t = a;
	a = b;
	b = t;
}