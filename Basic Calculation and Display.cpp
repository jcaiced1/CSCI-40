//Program that calculates the balances of savings to 5 years, asking original amount and interest rate.

//the information is displayed in two collumns one to 15 points from left to right and the other one to 20 points from left to right.

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	double deposit, interestRate;
	
	cout << "Please enter your deposit: " << endl;
	cin >> deposit;
	cout << "Please enter the interest rate: " << endl;
	cin >> interestRate;

	cout << right << setw(15) << "Year" << setw(20) << "Account Balance" << endl;
	cout << right << setw(15) << "1st" << setw(20) << deposit * (1 + interestRate * 1 / 100) << endl;
	cout << right << setw(15) << "2nd" << setw(20) << deposit * (1 + interestRate * 2 / 100) << endl;
	cout << right << setw(15) << "3rd" << setw(20) << deposit * (1 + interestRate * 3 / 100) << endl;
	cout << right << setw(15) << "4th" << setw(20) << deposit * (1 + interestRate * 4 / 100) << endl;
	cout << right << setw(15) << "5th" << setw(20) << deposit * (1 + interestRate * 5 / 100) << endl;

	system("pause");
	return 0;
}