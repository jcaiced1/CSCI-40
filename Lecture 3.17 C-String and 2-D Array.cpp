#include <iostream>
#include<string>
using namespace std;

int main()
{
	string s = "Homework";
	char a[] = "Homework";

	int i = 0;
	while (s[i] != '\0') {
		cout << s[i] << endl;
		i++;
	}
	cout << "================\n";
	i = 0;
	while (a[i] != '\0') {
		cout << a[i] << endl;
		i++;
	}
	cout<< "================\n";
	i = 0;

	return 0;
}