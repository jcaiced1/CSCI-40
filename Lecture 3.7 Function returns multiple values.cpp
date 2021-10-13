#include <iostream>
#include<cmath>	
using namespace std;

bool solution(double a, double b, double c, double& s1, double& s2)      //passing by reference
{
	cout.setf(ios::fixed);
	cout.precision(2);
	double d = b * b - 4 * a * c;
	if (d < 0)
		return false;
	else {
		s1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		s2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		return true;
	}
}

int main() {
	double a, b, c, x1, x2;
	cout << "Please enter the coefficients of a quadratic equation:\n";
	cin >> a >> b >> c;
	if (solution(a, b, c, x1, x2)) {
		cout << "The solution is " << x1 << endl;   // return to the caller function
		cout << "The solution is " << x2 << endl;   // return to the caller function
	}
	else {
		cout << "The equation has no real solution." << endl;
	}
	return 0;
}

