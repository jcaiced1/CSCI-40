//
// Cylinders.h
// myProject01
//
// Created by Jose Caicedo on 11/05/21.
// Copyright © 2021 Jose Caicedo. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Cylinders
{
private:
	double radius;
	double height;
public:
	//Constructors
	Cylinders();
	void setRadius(double r);
	void setHeight(double h);
	double getRadius();
	double getHeight();
	void display();
};

// Implementations
Cylinders::Cylinders() 
{
	radius=0;
	height=0;
}

void Cylinders::setRadius(double r)
{
	radius = r;
}
void Cylinders::setHeight(double h)
{
	height = h;
}
double Cylinders::getRadius()
{
	return radius;
}
double Cylinders::getHeight()
{
	return height;
}
void Cylinders::display()
{
	cout << left << endl;
	cout << "==============================" << endl;
	cout << "This is a Cylinder \n";
	cout << "The radius is " << radius << endl;
	cout << "The height is " << height << endl;
	cout << "==============================" << endl;
}

#endif
