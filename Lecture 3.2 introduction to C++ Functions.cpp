// Introduction to C++ Functions

//Question: Write a function that can be used for calculating the sum of a sequence of integers.
//          The function receives two positive integers and returns the sum of all the
//          integers between those two integers with tose two integers included.

#include<iostream>
using namespace std;

int sumBetween(int x, int y)
{
	int s = 0;
	for (int i = x; i <= y; i++)
		s += i;
	return s;
}

int main()
{
	int a, b;
	cout << "Please enter two positive integers:\n";
	cin >> a >> b;
	cout << "The power of a^b is " << pow(a, b) << endl;
	cout<< "The sum of the integers between those two numbers is "<<sumBetween(a, b) <<endl;

	system("pause");
	return 0;
}

