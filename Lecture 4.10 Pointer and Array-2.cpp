#include <iostream>
using namespace std;

int main()
{
    int a[5] = { 3,4,1,3,2 };
    int* p;
    p = a;
    for (int i = 0; i < 5; i++) {
        cout << p[i] << endl;
    }
    cout << "==================" << endl;
    p = new int[3];
    p[0] = 7;
    p[1] = 5;
    p[2] = 4;
    for (int i = 0; i < 3; i++) {
        cout << p[i] << endl;
    }
    return 0;
}