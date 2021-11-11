//
// Write a program that uses a random function to generate 50 integers between 0 and 99,
// and only display those numbers on the screen without showing the duplicates
//

#include <iostream>
#include"Numbers Const.h"
#include<iomanip>
using namespace std;

int main()
{
	Bag myBag;
	int a;
	int k = 0;
	for (int i = 0; i < 50; i++) {
		a = rand() % 100;
		if (!myBag.contains(a)) {
			cout << setw(5) << a;
			k++;
			if (k % 10 == 0)
				cout << endl;
			myBag.add(a);
		}
	}
	cout << endl;
	return 0;
}