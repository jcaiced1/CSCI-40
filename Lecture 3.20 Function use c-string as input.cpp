// Write a function that receives a string and capitalizes the initial of 
// each word in the string.

// Write a function that receives a string and eliminates all the blank spaces in the string.

#include <iostream>
using namespace std;

void capitalInitial(char a[])
{
	if (isalpha(a[0])) {
		a[0] = toupper(a[0]);
	}
	int i = 1;
	while (a[i] != '\0') {
		if (a[i] == ' ') {
			if (isalpha(a[i + 1])) {
				a[i + 1] = toupper(a[i + 1]);
			}
		}
		i++;
	}
}

void removeBlanks(char a[]) {
	int k = 0;
	int index = 0;
	while (a[k] != '\0') {
		if (a[k] == ' ') {
			index = k;
			for (int i = index; i < strlen(a); i++) {
				a[i] = a[i + 1];
			}
		}
		k++;
	}
}


int main() {
	char aString[] = "Have a nice day!";
	capitalInitial(aString);
	removeBlanks(aString);
	cout << aString << endl;
	return 0;
}