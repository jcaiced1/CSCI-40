// printing asterisks backwards

#include<iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 4; i++) {
		for (int k = 0; k < 4 - i; k++)
			cout << " ";
		for (int k = 0; k < i; k++)
			cout << "*";
		cout << endl;
}
	return 0;
}

