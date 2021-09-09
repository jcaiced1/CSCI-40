// (Student major and status) Write a program that prompts the user to enter two
// characters and displays the major and status represented in the characters. The first
// character indicates the major and the second is number character 1, 2, 3, 4, which 
// indicates wheter a student is a freshman, sophomore, junior, or senior. Suppose
// the following characters are used to denote the majors:

// M: Mathematics
// C: Computer Science
// I: Information Technology

#include<iostream>
#include <string>
using namespace std;

int main() {

	string a = " Freshman";
	string b = " Sophomore";
	string c = " Junior";
	string d = " Senior";

	string result;
	string major;

	cout << "Enter two characters: ";
	
	string characters;
	cin >> characters;
	
	if (characters.at(0) == 'M') {
		major = "Mathematics";
		switch (characters.at(1)) {
		case '1':
			result = major + a;
			break;
		case '2':
			result = major + b;
			break;
		case '3':
			result = major + c;
			break;
		case '4':
			result = major + d;
			break;
		default: 
			cout << "Invalid status code" << endl;
			break;
		}
		cout << result << endl;
	}
	if (characters.at(0) == 'C') {
		major = "Computer Science";
		switch (characters.at(1)) {
		case '1':
			result = major + a;
			break;
		case '2':
			result = major + b;
			break;
		case '3':
			result = major + c;
			break;
		case '4':
			result = major + d;
			break;
		default:
			cout << "Invalid status code" << endl;
			break;
		}
		cout << result << endl;
	}
	if (characters.at(0) == 'I') {
		major = "Information Technology";
		switch (characters.at(1)) {
		case '1':
			result = major + a;
			break;
		case '2':
			result = major + b;
			break;
		case '3':
			result = major + c;
			break;
		case '4':
			result = major + d;
			break;
		default:
			cout << "Invalid status code" << endl;
			break;
		}
		cout << result << endl;
	}
	else if ((characters.at(0) != 'M') && (characters.at(0) != 'C') && (characters.at(0) != 'I')) {
		cout << "Invalid major code" << endl;
	}
	return 0;
}