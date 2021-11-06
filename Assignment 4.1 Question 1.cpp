#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	Cylinders cylinderA;
	Cylinders cylinderB;
	cylinderB.setRadius(7);
	cylinderB.setHeight(5);
	cylinderA.display();
	cylinderB.display();
	system("pause");
	return 0;
}