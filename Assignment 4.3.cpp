//Assignment 4.3

// 1. declares an object of the class Bag
// 2. randomly generates 100 integers between 0 and 49. If the number randomly generated is already in the bag, ignore it, otherwise put it in the bag.
// 3. sort all the numbers in the bag
// 4. at the end of the program, display all the numbers in the bag.

#include <iostream>
#include"Bag.h"
#include<iomanip>
using namespace std;

int main()
{
	Bag myBag;

	int a;
	a = rand() % 50;
	myBag.add(a);
	for (int i = 0; i < 100; i++) {
		a = rand() % 50;
		if (myBag.contains(a) == false) {
			myBag.add(a);
		}
	}

	myBag.sortItems();

	myBag.display();

	return 0;
}