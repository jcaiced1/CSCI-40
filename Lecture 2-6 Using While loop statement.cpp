//Lecture 2-6 Using While loop statements
#include<iostream>
using namespace std;

int main()
{
	int i = 0;				
	while (i <=10) {				// prints only even numbers in the range from 0-10
		cout << i << endl;
		i=i+2;
	}
	return 0;
}