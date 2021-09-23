// print the largest number

#include<iostream>
using namespace std;

int main() {

	int a, m, c;
	cout << "How many integers do you want to enter?" << endl;
	cin >> c;
	cout << "Please enter "<<c<< " integers:" << endl;
	cin >> m;
	for (int i = 0; i < c-1; i++) {
		cin >> a;
		if (a > m) {
			m = a;
		}
	}
	cout << "The largest number is " << m << endl;
	return 0;
}