// print the sum

#include<iostream>
using namespace std;

int main() {

	int s = 0, a;

	int c;
	cout << "How many integers do you want to enter?" << endl;
	cin >> c;
	cout << "Please enter " << c << " integers: " << endl;

	for (int i = 0; i < c; i++) {
		cin >> a;
		s += a;
	}
	cout << "The sum is " << s << endl;

	return 0;
}