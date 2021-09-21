// Write a program that help a user to practice multiplication skill. The program will produce a certain number 
// of multiplication questions by using the random function and ask the user to enter the correct answers. If 
// the user enters the correct answer of a question, give the user a feedback and a point, otherwise, tell the user 
// the answer was wrong and provide the correct answer for that question.

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int a, b, ans, point=0, c=0, counter=0;

	while (c==0) {
		a = rand() % 10;
		b = rand() % 10;
		cout << a << " x " << b << " = ? \n";
		cin >> ans;
		if (ans == a * b) {
			cout << "Great! It is correct." << endl;
			point++;
		}
		else {
			cout << "Sorry, it is incorrect." << endl;
			cout << "The correct answer is " << a * b << endl;
		}
		counter++;
		cout << "Do you want to do another question?" << endl;
		cout << "Please enter 0 for yes, and anyother number for no." << endl;
		cin >> c;
	}
	cout << "Your score is " << point << "/" <<counter<< endl;
	return 0;
}