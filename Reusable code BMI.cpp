//Returns the BMI

#include<iostream>
using namespace std;

double bodyMassIndex(double w, double h)
{
	double kilos, meters, bmi;
	kilos = w * 0.45359237;
	meters = h * 0.0254;
	bmi = kilos / (meters * meters);
	return bmi;
}

int main() 
{
	double weight, height;
	cout << "Please enter the body weight in pounds: ";
	cin >> weight;
	cout << "Please enter the height in inches: ";
	cin >> height;
	cout << "The BMI index is: " << bodyMassIndex(weight, height) << endl;
	return 0;
}