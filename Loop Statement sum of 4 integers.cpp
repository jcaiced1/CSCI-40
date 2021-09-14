//Lecture 2-8 Loop statement Sum of 4 integers
#include<iostream>
using namespace std;

int main()
{
	int a, sum = 0;
	cout << "Please enter 4 integers:\n";
	int i = 0;
	while (i < 4) {
		cin >> a;
		sum = sum + a;
		i++;
	}
	cout << "The sum of those numbers is " << sum << endl;
	return 0;
}