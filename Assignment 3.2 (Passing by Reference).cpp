#include <iostream>
#include<cmath>	
using namespace std;

void solution(double A, double r, double t, double& R, int& T, int& i)      //passing by reference
{
	cout.setf(ios::fixed);
	cout.precision(3);
	R = A/((1 - pow(1 + (r / 1200), (-12 * t)))/(r/1200));
	T = R*(12 * t);
	i = T - A;
	}

int main() {
	int s = 0;
	do {
		double A, r, t, x;
		int y, z;
		cout << "=========================================\n";
		cout << "Please enter the loan amount: ";
		cin >> A;
		cout << "Please enter the interest rate: ";
		cin >> r;
		cout << "Please enter the term: ";
		cin >> t;
		cout << "=========================================\n";
		solution(A, r, t, x, y, z);
		cout << "Your monthly payment is  " << x << endl;   // return to the caller function
		cout << "Your total payment will be " << y << endl;   // return to the caller function
		cout << "Total interests paid will be " << z << endl;  //return to the caller function
		cout << "=========================================\n";
		cout << "Please enter any number to continue, and enter 0 to finish." << endl;
		cin >> s;
	}
	while (s != 0);
	return 0;
}

