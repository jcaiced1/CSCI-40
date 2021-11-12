//Assignment 4.2

#include <iostream>
#include"Bag.h"
#include<iomanip>
using namespace std;

int main()
{
	Bag myBag;
	int a, x;
	for (int i = 0; i < 80; i++) {
		a = rand() % 100;
		myBag.add(a);
	}
	cout << "======\n";
	myBag.display();
	cout << "======\n";
	cout << "The min number in the Bag is " << myBag.getMin() << endl;
	cout << "The max number in the Bag is " << myBag.getMax() << endl;
	cout << "The index of the smallest number in the Bag is " <<  myBag.getPosition(myBag.getMin())<<endl;
	cout << "The index of the largest number in the Bag is " << myBag.getPosition(myBag.getMax()) << endl;
	myBag.remove(myBag.getMin());
	myBag.remove(myBag.getMax());
	cout << "======\n";
	myBag.display();
	cout << "======\n";
	cout << "The sum of the remaining numbers divided by 78 is " << myBag.getSum() / 78.0 << endl;
	return 0;
}