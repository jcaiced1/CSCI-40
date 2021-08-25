// conditional expression ? when numbers are sorted from lower to higher

#include <iostream>
using namespace std;

int main()
{
	cout << "Please write 3 numbers: \n";
	double x, y, z;
	cin >> x >> y >> z;

	cout << (x < y&& y < z ? "sorted" : "not sorted") << endl;

	return 0;
}