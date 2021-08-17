//Assume Tom wants to set aside certain amount of money at the end of each month for certain number of years. If he puts those money into a bank account, 
// the bank will pay him certain percent of interest. 
//
//        -                  -   S = total amount of money (lump sum)
//        |(1 + _r_ )**12t   |   R = monthly deposit
//        |     1200       -1|   r = interest rate
//S = R * | ---------------  |   t = number of years
//        |       _r_        |
//        -       1200       -
// 
// Inputs:
// 1. The amount of money will be set aside at the end of each month (the value of R)
// 2. The interest rate (The value of r)
// 3. The number of years (the value of t)


#include<iostream>
#include<iomanip> // to be able to use "setprecision"
using namespace std;

int main() {

	double monthlyDeposit, interestRate, numberOfYears;
	double x, y, total;

	cout << "Please enter the amount of money that you will set aside each month:\n";
	cin >> monthlyDeposit;
	cout << "Please enter the interest rate:\n";
	cin >> interestRate;
	cout << "Please indicate the number of years: \n";
	cin >> numberOfYears;
	
	x = interestRate / 1200;
	y = pow((1 + x), 12 * numberOfYears);
	total = monthlyDeposit * ((y - 1) / x);

	cout << "Your total amount of money after " << numberOfYears << " years is $" << fixed << setprecision(2) << total << endl;
		
	system("pause");
	return 0;
}