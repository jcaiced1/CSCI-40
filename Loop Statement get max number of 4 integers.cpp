//Lecture 2-8 Loop Statement Get max number of 4 integers
#include<iostream>
using namespace std;

int main()
{
	int a, max;
	cout << "Please enter 5 integers:\n";
	cin >> a;
	max = a;
	int i = 0;
	while (i < 4) {
		cin>>a;
		if (a > max) {
			max = a;
		}
		i++;
	}
	cout << "The largest number is " << max << endl;
	return 0;
}