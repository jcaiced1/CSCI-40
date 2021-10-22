// write a program that randomly generates 200 numbers from 1 to 6 (simulating rolling a die for 200 times).
//Declares an integer array with 6 elements, and uses each element of the array as a counter for storing the number 
// of ocurrences of each number that the random function generated. At the end, the program should display
// the number of occurrences of each number the function generated.

#include <iostream>
using namespace std;

int main() {

	int a;
	int counter[6] = { 0 };
	for (int i = 0; i < 200; i++) {
		a = rand() % 6 + 1;
		counter[a - 1]++;
	}

	for (int j = 0; j < 6;j++) {
		cout << j + 1 << ": " << counter[j] << endl;
	}

}