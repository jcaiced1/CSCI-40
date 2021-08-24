#include<iostream>
using namespace std;

int  main()
{
	int score;
	cout << "Please enter your test score: \n";
	cin >> score;

	if (score < 70) {
		cout << "Please review Lecture 1 - Lecture 6 and redo the Assignment 1,2, and 3" << endl;
	}

	cout << "Have a great day!" << endl;

	return 0;
}