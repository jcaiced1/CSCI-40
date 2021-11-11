//
// Bag.h
// Bag
// 
// Created by Jin He 5/2/19.
// Copyright © 2019 Jin He. All rights reserved.
//

#ifndef Bab_h
#define Bag_h
#include<iostream>
using namespace std;

class Bag
{
private:
	int items[100];
	int itemCount;
public:
	Bag();
	int getItemCount();
	void add(int newItem);
	void display();
	bool contains(int anItem);
};
//Implentations
Bag::Bag()
{
	itemCount = 0;
}
int Bag::getItemCount()
{
	return itemCount;
}
void Bag::add(int newItem)
{
	items[itemCount] = newItem;
	itemCount++;
}
void Bag::display()
{
	for (int i = 0; i < itemCount; i++){
		cout << items[i] << endl;
	}
}
bool Bag::contains(int anItem)
{
	for (int i = 0; i < itemCount; i++) {
		if (items[i] == anItem)
			return true;
	}
	return false;
}

#endif /* Bag_h*/
