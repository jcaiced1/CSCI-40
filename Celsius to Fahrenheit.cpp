#include<iostream>
#include<iomanip>
using namespace std;

int main() {


	cout << right << setw(15) << "Celsius" << setw(20) << "Fahrenheit" << endl;
	cout << right << setw(15) << 0 << setw(20) << (9 / 5.0) * 0 + 32 << endl;
	cout << right << setw(15) << 10 << setw(20) << (9 / 5.0) * 10 + 32 << endl;
	cout << right << setw(15) << 20 << setw(20) << (9 / 5.0) * 20 + 32 << endl;
	cout << right << setw(15) << 30 << setw(20) << (9 / 5.0) * 30 + 32 << endl;
	cout << right << setw(15) << 40 << setw(20) << (9 / 5.0) * 40 + 32 << endl;
	cout << right << setw(15) << 50 << setw(20) << (9 / 5.0) * 50 + 32 << endl;
	cout << right << setw(15) << 60 << setw(20) << (9 / 5.0) * 60 + 32 << endl;

	system("pause");
	return 0;
}