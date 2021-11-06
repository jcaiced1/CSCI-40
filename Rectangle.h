//
// Rectangle.h
// myProject01
//
// Created by Jin He on 4/19/19.
// Copyright © 2019 Jin He. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	void setLength(double l);
	void setWidth(double w);
	double getLength();
	double getWidth();
	void display();
};

// Implementations
void Rectangle::setLength(double l)
{
	length = l;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
double Rectangle::getLength()
{
	return length;
}
double Rectangle::getWidth()
{
	return width;
}
void Rectangle::display()
{
	cout << "This is a rectangle \n";
	cout << "The lenth is " << length << endl;
	cout << "The width is " << width << endl;
}


#endif /* Rectangle_h */

