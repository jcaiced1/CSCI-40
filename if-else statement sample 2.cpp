#include<iostream>
using namespace std;

int main() 
{
	int a;
	cout << "Please enter your test score:" << endl;
	cin >> a;
	if (a >= 70) {
		cout << "You have passed the test\n" << endl;
		cout << "Congratulations!\n" << endl;
	}
	else {
		cout << "You failed the test\n" << endl;
		cout << "Please try again!\n" << endl;
	}
	return 0;
}