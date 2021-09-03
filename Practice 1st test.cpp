#include<iostream>
using namespace std;
int main(){
	//------------- tell even or odd

	//int a;
	//cout<<"enter an integer"<<endl;
	//cin >> a;
	//if (a % 2 == 0) {
	//	cout << "its even" << endl;
	//}
	//else {
	//	cout << "its odd" << endl;
	//}

	//------------------------- save larger int in one variable

	//int a, b, c;
	//cout << "enter 2 variables" << endl;
	//cin >> a >> b;
	//if (a > b) {
	//	c = a;
	//}
	//if(b>a) {
	//	c = b;
	//}
	//cout << c << endl;

	//--------------------------- 3 variables and sort
	// 
	//int temp;
	//int a, b, c;
	//cout << "enter 3 variables" << endl;
	//cin >> a >> b>>c;
	//if (a > b) {
	//	temp = b;
	//	b = a;
	//	a = temp;
	//}
	//if(b > c) {
	//	temp = c;
	//	c = b;
	//	b = temp;
	//}
	////2nd round
	//if (a > b) {
	//	temp = b;
	//	b = a;
	//	a = temp;
	//}
	//cout << a<<" "<< b <<" "<< c << endl;
	
	//--------------------- re write with if -else statements

	int a;
	cout << "Please enter 1 or 2: \n";

	cin >> a;
	if (a == 1) {
		cout << "Go to class. \n";
	}
	else if (a == 2) {
		cout << "Do Homework. \n";
	}
	else {
		cout << "Do nothing.\n";
	}

	return 0;
}