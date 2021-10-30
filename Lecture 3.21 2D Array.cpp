#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a[3][4] = { {3,5,1,4},{2,1,6,2},{4,1,0,2} };

	for (int k = 0; k < 3; k++) 
	{
		for (int i = 0; i < 4; i++)
			cout << setw(10) << a[k][i];
		cout << endl;
	}

	return 0;
}