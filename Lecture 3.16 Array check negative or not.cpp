// Write a function that receives an integer array along with its length. The function
// returns true if the array contains a negative number, otherwise the function returns false

#include <iostream>
using namespace std;

bool containNegative(int a[], int length) {
	for (int i = 0; i < length; i++) {
		if (a[i] < 0)
			return true;
	}
	return false;
}

int main()
{
	int anArray[5] = { 4,2,-1,5,1 };
	int anotherArray[6] = { 1,2,3,4,5,6 };
	if (containNegative(anArray, 5)) {
		cout << "Yes it contains a negative number.\n";
	}
	else {
		cout << "No, it does not contain a negative number.\n";
	}
	if (containNegative(anotherArray, 5)) {
		cout << "Yes it contains a negative number.\n";
	}
	else {
		cout << "No, it does not contain a negative number.\n";
	}
	return 0;
}