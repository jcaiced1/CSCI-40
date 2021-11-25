#include <iostream>
using namespace std;

void display(int n){
	if (n != 0) {
		display(n-1);
		cout << n << endl;
	}
}

int sumSquares(int n){
	if (n == 1) {
		return 1;
	}
	int sum = (n * n) + sumSquares(n - 1);
	return sum;
}

bool containZero(int a[], int length) {
	if (length == 0) {
		return false;
	}
	if (a[length - 1] == 0) {
		return true;
	}
	length = length - 1;
	return containZero(a, length);
}

int min(int a[], int length){
	if (length > 0){
		if (a[length - 2] > a[length - 1]){
			a[length - 2] = a[length - 1];
		}
		min(a, length - 1);
	}
	return a[length - 2];
}

int main()
{
	int a[] = { 3, 2, 6, 0, 1 };
	int b[] = { 4, 7, 9, 12, 8, 1, 10 };
	cout << "== Question 1 ==\nPrints integers from 1 to 5\n\n";
	display(5);
	cout << endl;
	cout << "== Question 2 ==\nThe sum of the squares of all the numbers from 1 to 4 is: \n\n";
	cout << sumSquares(4) << endl;
	cout << endl;
	cout << "== Question 3 ==\nReturns \"true\" if the array contains 0 or returns \"false\" otherwise \nArray = [3, 2, 6, 0, 1]\n\n";
	cout << boolalpha << containZero(a, 5) << endl;
	cout << endl;
	cout << "== Question 4 ==\nReturns the minimum number in the array\nArray = [4, 7, 9, 12, 8, 1, 10]\n\n";
	cout << min(b, 7) << endl;
	return 0;
}