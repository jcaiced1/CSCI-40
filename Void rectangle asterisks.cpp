// Write a C++ function with no return value, such function will receive two 
// integers as its inputs and display a rectangle with asterisks

#include<iostream>;
using namespace std;
void rectangle(int length, int width)
{
	for (int i = 0; i < length; i++) 
	{
		for (int j = 0; j < width; j++) 
		{
			if (i == 0 or i == length - 1 or j == 0 or j == width - 1)
				cout << "* ";
			else
				cout << "  ";
		}cout << endl;
	}
}
int main() 
{
	int l, w;
	cout << "Please enter the length: ";
	cin >> l;
	cout << "Please enter the width: ";
	cin >> w;
	rectangle(l, w);
	cout << endl;
	return 0;
}