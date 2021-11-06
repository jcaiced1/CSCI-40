#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle rectangleA, rectangleB;
	rectangleA.setLength(7);
	rectangleA.setWidth(5);
	rectangleA.display();
	system("pause");
	return 0;
}