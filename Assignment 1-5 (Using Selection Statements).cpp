// Write a C++ program that perform following two tasks:

// 1. Conduct a quiz that contains 4 questions.Each question has 4 possible answers.Ask a user to choose 
// the correct answer for each question.If the user choose the correct answer, add 1 point.Display the total 
// points user earned at the end of the quiz.
// 
// 2. Use only two variables to ask a user to enter any 4 integers and then display the largest number
// that user entered

#include<iostream>
using namespace std;

int main()
{
	cout << "========================\n";
	cout << "  Quiz\n";
	cout << "========================\n";

	int s = 0;
	char a;

	cout << " 1. What is the value of the folowing Boolean expression: 5!=5?" << endl;
	cout << " a) 5   b) 1   c) 0   d) 10\n";
	
	cin >> a;
	if (a == 'c') {
		cout << "Great! it is correct.\n";
		s= s +1;
	}
	if (a!='c') {
		cout << "Sorry, it is incorrect.\n";
	}

	cout << "--------------------------------\n";
	
	cout << " 2. What is the value of 12%6?" << endl;
	cout << " a) 0   b) 2   c) 12   d) 6\n";

	cin >> a;
	if (a == 'a') {
		cout << "Great! it is correct.\n";
		s = s + 1;
	}
	if (a != 'a') {
		cout << "Sorry, it is incorrect.\n";
	}

	cout << "--------------------------------\n";
	
	cout << " 3. What is the capital city of P. R. China?" << endl;
	cout << " a) Tokyo   b) Bankok   c) Shanghai   d) Beijing\n";

	cin >> a;
	if (a == 'd') {
		cout << "Great! it is correct.\n";
		s = s + 1;
	}
	if (a != 'd') {
		cout << "Sorry, it is incorrect.\n";
	}

	cout << "--------------------------------\n";
	
	cout << " 4. Which of the followings translates a program from C++ to machine language?" << endl;
	cout << " a) RAM   b) Compiler   c) Monitor   d) Keyboard\n";

	cin >> a;
	if (a == 'b') {
		cout << "Great! it is correct.\n";
		s = s + 1;
	}
	if (a != 'b') {
		cout << "Sorry, it is incorrect.\n";
	}

	cout << "--------------------------------\n";
	cout << "The total points: " << s << endl;

	cout << "========================\n";
	int x, y;
	cout << "Please enter 4 integers:" << endl;
	
	cin >> x >> y;
	if (x > y) {
		y = x;
	}

	cin >> x;
	if (y > x) {
		x = y;
	}

	cin >> y;
	if (x > y) {
		y = x;
	}
	cout << "The largest number you entered is " << y << endl;

	system("pause");
	return 0;
}