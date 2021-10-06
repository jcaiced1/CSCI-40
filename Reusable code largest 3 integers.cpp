//Returns the largest number of 3 integers

#include<iostream>
using namespace std;

int largest(int a, int b, int c) {
	int t = a;
	if(b>t)
		t=b;
	if (c > t)
		t = c;
	return t;
}
int main() {
	int x, y, z;
	cout << "Please enter any 3 integers: " << endl;
	cin >> x >> y >> z;
	cout << "The largest number is " << largest(x, y, z) << endl;
	return 0;
}