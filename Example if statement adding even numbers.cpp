// Section 1 Lecture 16 (26 Minutes Video Lecture) More Selection Statement Examples: Adding Even Numbers and Sorting Numbers
// 
//  write a program that asks a user to enter 6 positive integers, then calculates and displays the sum
// of those even integers the user entered. Use no more than two variables in the program.

#include<iostream>
using namespace std;

int main() {
	int sum = 0, a;
	cout << "Please enter six positive integers: " << endl;
	
	cin >> a;
	if (a % 2 == 0) {
		sum += a;      // this statement is same as sum= sum+a
	}
	cin >> a;
	if (a % 2 == 0) {
		sum += a;
	}
	cin >> a;
	if (a % 2 == 0) {
		sum += a;
	}
	cin >> a;
	if (a % 2 == 0) {
		sum += a;
	}
	cin >> a;
	if (a % 2 == 0) {
		sum += a;
	}
	cin >> a;
	if (a % 2 == 0) {
		sum += a;
	}

	cout << "The sum of those even integers you entered is " << sum << endl;

	return 0;
}
