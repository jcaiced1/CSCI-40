//
// main.cpp
// Bag
//
// Created by Jin He on 5/2/19.
// Copyright © 2019 Jin He. All rights reserved.
//

#include <iostream>
#include"Bag.h"
using namespace std;

int main()
{
	Bag myBag;
	for (int i = 0; i < 10; i++) {
		myBag.add(rand() % 100);
	}
	myBag.display();
	if (myBag.contains(24)) {
		cout << "Yes, it is in the bag.\n";
	}
	else {
		cout << "No, it is not in the bag\n";
	}
	return 0;
}