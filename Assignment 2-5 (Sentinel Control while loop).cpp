// Write a C++ program that is using a sentinel control while loop statement (Sentinel Control Loop is covered in the Lecture 2-9) 
// and if statements to write a program that can be used at a department store’s register that records the number of customers who 
// spent between $0.00 - $200.00, and the number of customers who spent between $200.01 - $800.00, and the number of customers who 
// spent $800.01 or more.At the end of a day, the program will print out the number of customers in each of categories and total 
// spending of the customers in each categories.

#include<iostream>
using namespace std;

int main()
{
	int c=0, cust1=0, cust2=0, cust3=0;
	double spending, spending1=0.0, spending2=0.0, spending3=0.0;

	while (c==0) {
		cout << "Please enter the customer's spending:" << endl;
		cin >> spending;
		if (spending <= 200) {
			spending1 = spending1+spending;
			cust1++;
		}
		if (spending > 200 && spending <= 800) {
			spending2 = spending2 + spending;
			cust2++;
		}
		if (spending > 800) {
			spending3 = spending3 + spending;
			cust3++;
		}
		cout << "Continue the program?" << endl;
		cout << "Please enter 0 for yes, and anyother number for no." << endl;
		cin >> c;
	}
	cout << "The total number of customers with their spending between $1 and $200: "<<cust1 << endl;
	cout << "Total spending is: " << spending1 << endl;
	cout << "The total number of customers with their spending between $200 and $800: " << cust2 << endl;
	cout << "Total spending is: " << spending2 << endl;
	cout << "The total number of customers with their spending more than $800: " << cust3 << endl;
	cout << "Total spending is: " << spending3 << endl;
	return 0;
}