// Assignment 4.3

#ifndef Bag_h
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
	bool remove(int anItem);
	int getSum();
	int getMin();
	int getMax();
	int getPosition(int anItem);
	void sortItems();
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
	for (int i = 0; i < itemCount; i++) {
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
bool Bag::remove(int anItem)
{
	if (itemCount == 0) {
		return false;
		cout << "Item is not in the bag, removal failed.\n";
	}
	else {
		int index = 0;
		for (int i = 0; i < itemCount; i++) {
			if (items[i] == anItem) {
				index = i;
				for (int k = index; k < itemCount - 1; k++) {
					items[k] = items[k + 1];
				}
				itemCount--;
				return true;
			}
		}
		cout << "Item is not in the bag, removal failed.\n";
		return false;
	}
}
int Bag::getSum()
{
	int s = 0;
	for (int i = 0; i < itemCount; i++)
		s += items[i];
	return s;
}
int Bag::getMin() {
	int t = items[0];
	for (int i = 0; i < itemCount; i++) {
		if (items[i] < t) {
			t = items[i];
		}
	}
	return t;
}
int Bag::getMax() {
	int t = items[0];
	for (int i = 0; i < itemCount; i++) {
		if (items[i] > t) {
			t = items[i];
		}
	}
	return t;
}
int Bag::getPosition(int anItem) {
	int index = -1;
	for (int i = 0; i < itemCount; i++) {
		if (items[i] == anItem) {
			index = i;
			break;
		}
	}
	return index;
}
void Bag::sortItems()
{
	int c;
	for (int i = 0; i < itemCount; i++) {
		for (int j = i + 1; j < itemCount; j++) {
			if (items[i] > items[j]) {
				c = items[i];
				items[i] = items[j];
				items[j] = c;
			}
		}
	}
}

#endif /* Bag_h*/
