//00 01 02 03 04
//10 11 12 13 14
//20 21 22 23 24

#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << i << j << " ";
		}
		cout << endl;
	}
	return 0;
}

