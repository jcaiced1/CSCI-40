// Assignment 1-6 (Menu Driven Program)
// Use "if" statement or use "switch" statement to write a menu driven program that allow a user to selectively perform one of the following tasks:
// 1. Display a to do list
// 2. Calculating Body Mass Index(BMI) and display the interpretation
// 3. Practice Integer Multiplication

#include<iostream>
using namespace std;

int main() {
	double weight, height, BMI;
	int x, a, b;
	int r;
	cout << "Please select one of following: " << endl;
	cout << "+====================================+" << endl;
	cout << "| 1. Display to-do list              |" << endl;
	cout << "| 2. Calculate BMI                   |" << endl;
	cout << "| 3. Practice Multiplication         |" << endl;
	cout << "| 4. Do nothing                      |" << endl;
	cout << "+====================================+" << endl;

	cin >> x;
	switch (x) {
	case 1:
		cout << "+====================================+" << endl;
		cout << "| 1. Wash my car                     |" << endl;
		cout << "| 2. Go gym for one hour             |" << endl;
		cout << "| 3. Complete CSCI Assignment 5      |" << endl;
		cout << "| 4. Install new hard drive          |" << endl;
		cout << "+====================================+" << endl;
		break;
	case 2:
		cout << "Please enter the body weight in pounds: " << endl;
		cin >> weight;
		cout << "Please enter the body height in inches: " << endl;
		cin >> height;
		weight = weight * 0.45359237;
		height = height * 0.0254;
		BMI = weight / (height * height);
		cout << "Your body index is " << BMI << endl;
		if (BMI < 18.5) {
			cout << "You are Underweight" << endl;
			cout << "Eat more" << endl;
		}
		if (BMI >= 18.5 && BMI < 25.0) {
			cout << "You are Normal" << endl;
			cout << "Keep regular exercise and normal diet" << endl;
		}
		if (BMI >= 25.0 && BMI < 30.0) {
			cout << "You are Overweight" << endl;
			cout << "Try to eat a little less and excercise more" << endl;
		}
		if (BMI >= 30.0) {
			cout << "You are Obese" << endl;
			cout << "Stop eating! Get up off your couch and walk!" << endl;
		}
		break;
	case 3: 
		a = rand() % 100;
		b = rand() % 100;
		cout << a << " x " << b << " ? " << endl;
		cin >> r;
		if (r == a * b) {
			cout << "Great! it is correct." << endl;
		}
		else {
			cout << "Sorry, it was wrong, the correct answer is " << a * b << endl;
		}
		break;
	case 4:
		cout << "Your choose not to do anything, the program terminated." << endl;
		break;
	default:
		cout << "Invalid input, please enter 1, 2, 3, or 4." << endl;
	};
	return 0;
}