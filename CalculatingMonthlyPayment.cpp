//Soppose one of your good friends is planning on purchasing a car and is shopping for a auto loan. He went to several banks and those banks
// offered different interest rates and different terms, but they all use the same formula for calculating the monthly payment
//
//  R =_______A_______       R = monthly payment
//    1-(1+ _r_)**-12t       A = loan amount
//          120              r = interest rate in decimal form
//   -----------------       t = term
//          _r_
//          120
//
// Partial calculations
// 
// x = (1 + _r_ )**-12t     y = _r_     z = _(1-x)_    monthlyPayment = _loanAmount_
//          120                 120            y                              z

#include <iostream>
#include <iomanip>  // is used to include "setprecision" which is used to set the decimal places
// #include <cmath> if macbook
using namespace std;

int main()
{
	double loanAmount, interestRate, term;
	double x, y, z, monthlyPayment;
	cout << "Please enter the loan amount:\n";
	cin >> loanAmount;
	cout << "Please enter the interest rate:\n";
	cin >> interestRate;
	cout << "Please enter the term:\n";
	cin >> term;

	x = pow(1 + interestRate / 120, -12 * term);
	y = interestRate / 120;
	z = (1 - x) / y;
	monthlyPayment = loanAmount / z;

	cout << "your monthly payment will be $" << fixed << setprecision(2) <<monthlyPayment << endl;
	cout << "==================================================" <<endl;
	cout << "Thank you for using this program! Bye now!" << endl;
	cout << "==================================================" << endl;

	system("pause");
	return 0;
}