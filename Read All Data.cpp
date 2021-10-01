//Example Read all Data

#include<iostream>
#include <fstream>
using namespace std;

int main() {
	// Open a file
	ifstream input("score.txt");

	double sum = 0;
	double number;
	while (!input.eof()) // Continue if not end of file
	{
		input >> number; //Read data
		cout << number << " "; // Display data
		sum += number;
	}
	input.close();
	cout << "\nSum is " << sum << endl;

	return 0;
}