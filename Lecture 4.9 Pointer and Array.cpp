#include <iostream>
using namespace std;

int main()
{
	int length;
	cout << "Please enter the length of the array you would like to create:\n";
	cin >> length;
	int* p = new int[length];			// the advantage is that we can use a variable as the lenght of an array.
	for (int i = 0; i < length; i++) {
		p[i] = rand() % 100;
	}
	for (int i = 0; i < length; i++) {
		cout << p[i] << endl;
	}
	return 0;
}