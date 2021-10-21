#include <iostream>
using namespace std;

int main()
{
	int a[5];
	cout << "Please enter five integers:" << endl;
	
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}

	return 0;
}