//Lecture 2-7 An Example of Using While Loop
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int i = 1, a,b, ans, counter;
	cout << "How many questions do you wanto to practice?\n";
	cin >> counter;
	while (i <= counter) {
		cout << " Question " << i << endl;
		a = rand() % 100;
		b = rand() % 100;
		cout << a << " x " << b << " = ? \n";
		cin >> ans;
		if (ans == a * b) {
			cout << "Great! It is correct." << endl;
		}
		else {
			cout << "Sorry, it is incorrect." << endl;
		}
		cout << "==============================" << endl;
		i++;
	}
	return 0;
}