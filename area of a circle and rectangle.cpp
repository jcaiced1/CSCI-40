//Write a program that calculates the area of a circle and the area of a rectangle

#include<iostream>
using namespace std;

int main() {
	double radius, areaOfCircle;
	cout << "CALCULATING AREA OF CIRCLE\n";
	cout << "=================================\n";
	cout << "Please enter the radius of a circle: ";
	cin >> radius;
	areaOfCircle = 3.1415926 * pow(radius,2);
	cout << "The area of the circle is " << areaOfCircle << endl;
	
	cout << "\n";
	cout << "CALCULATING AREA OF RECTANGLE\n";
	cout << "=================================\n";
	double rectangleLenght, rectangleWidth, areaOfRectangle;

	cout << "Please enter the length: ";
	cin >> rectangleLenght;
	cout << "Please enter the width: ";
	cin >> rectangleWidth;
	areaOfRectangle = rectangleLenght * rectangleWidth;
	cout << "The area of the rectangle is " << areaOfRectangle << endl;

	system("pause");
	return 0;

}