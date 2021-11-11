
#include <iostream>
#include"remove getSum.h"
#include<iomanip>
using namespace std;

int main()
{
	Bag myBag;
	int a;
	for (int i = 0; i < 5; i++) {
		a = rand() % 100;
		myBag.add(a);
	}
	cout << "======\n";
	myBag.display();
	cout << "Please enter the number you want to remove from the bag:\n";
	cin >> a;
	myBag.remove(a);
	cout << "======\n";
	myBag.display();
	cout << "The sum is " << myBag.getSum() << endl;
	return 0;
}