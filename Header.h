//
// StudentRecord.h
// Created by J He on 2019/4/11.
// Copyright © 2019 J He. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class StudentRecord
{
private:
	string lastName;
	string firstName;
	string idNumber;
	double GPA;
public:
	//Constructors
	StudentRecord();
	StudentRecord(string last, string firs, string iD, double gpa);
	//Set and Get Functions
	void setLastName(string last);
	string getLastName();
	void setFirstName(string first);
	string getFirstName();
	void setID(string id);
	string getID();
	void setGPA(double gpa);
	double getGPA();
	//Utility Functions
	void display();
};

// Implementation of Member Functions
StudentRecord::StudentRecord()
{
	lastName="None";
	firstName = "None";
	idNumber = "----";
	GPA = 0;
}
StudentRecord::StudentRecord(string last, string first, string iD, double gpa)
{
	lastName = last;
	firstName = first;
	idNumber = iD;
	GPA = gpa;
}
void StudentRecord::setLastName(string last)
{
	lastName = last;
}
string StudentRecord::getLastName()
{
	return lastName;
}
void StudentRecord::setFirstName(string first)
{
	firstName = first;
}
string StudentRecord::getFirstName()
{
	return firstName;
}
void StudentRecord::setID(string iD)
{
	idNumber = iD;
}
string StudentRecord::getID()
{
	return idNumber;
}
void StudentRecord::setGPA(double gpa)
{
	GPA = gpa;
}
double StudentRecord::getGPA()
{
	return GPA;
}
void StudentRecord::display()
{
	cout << left << endl;
	cout << "============================================" << endl;
	cout << setw(30) << "Student Last Name:" << setw(10) << lastName << endl;
	cout << setw(30) << "Student First Name:" << setw(10) << firstName << endl;
	cout << setw(30) << "Student ID:" << setw(10) << idNumber << endl;
	cout << setw(30) << "Student GPA:" << setw(10) << GPA << endl;
	cout << "============================================" << endl;
}
#endif  /* Header_h */