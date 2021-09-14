//Assignment 2-4 (while loop statement)
//
// Write a SINGLE program that perform following programming tasks:
// 
// 1. Use only two variables and a while loop statement to ask a user enter 
//    500 integers and then produce and display the smallest number that user entered.
// 
// 2. Use only two variable and a while loop statement to ask a user to enter 
//    200 integers and produce and display the average of those numbers that user entered.
// 
// 3. Use a while loop statement to allow a user to calculate 
//    20 persons' body mass indices (BMI) based on their body weights and heights


#include<iostream>
using namespace std;

int main()
{
	int x, i = 0;
	double sum = 0.0, weight, height, BMI;
	cout << "Please select one of following: " << endl;
	cout << "+=========================================+" << endl;
	cout << "| 1. Smallest number out of 500 integers  |" << endl;
	cout << "| 2. Average of 200 integers              |" << endl;
	cout << "| 3. BMI of 20 people                     |" << endl;
	cout << "| 4. Do nothing                           |" << endl;
	cout << "+=========================================+" << endl;
	cin >> x;
	switch (x) {
	case 1: 
		int a, min;
		cout << "Please enter 500 integers:\n";
		cin >> a;
		min = a;
		while (i <499) {                    //value needed -1
			cin >> a;
			if (a < min) {
				min = a;
			}
			i++;
		}
		cout << "The smallest number that you entered is: " << min << endl;
		break;
	case 2:
		int b;
		cout << "Please enter 200 integers:\n";
		while (i <200) {					 //number needed
			cin >> b;
			sum = sum + b;
			i++;
		}
		cout << "The average of the 200 integers is: " << sum/i<< endl;
		break;
	case 3:
		cout << "You chose to calculate the BMI of 20 people: " << endl;
		cout << endl;
		while (i < 20) {				//number needed
			cout << "Person #" << i +1 << endl;
			cout << "Please enter the body weight in pounds: " << endl;
			cin >> weight;
			cout << "Please enter the body height in inches: " << endl;
			cin >> height;
			weight = weight * 0.45359237;
			height = height * 0.0254;
			BMI = weight / (height * height);
			cout << endl;
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
			cout << "============================" << endl;
			cout << endl;
			i++;
		}
		break;
	case 4:
		cout << "You choose no to do anything, the program is terminated." << endl;
		break;
	default:
		cout << "Invalid input, please enter 1, 2, 3, or 4" << endl;
	}
	return 0;
}