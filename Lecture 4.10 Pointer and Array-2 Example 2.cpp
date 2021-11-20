#include <iostream>
using namespace std;

int* getCopyof(int a[], int length)
{
    int* c = new int[length];
    for (int i = 0; i < length; i++) {
        c[i] = a[i];
    }
    return c;
}

int main()
{
    int a[5] = { 3,4,1,3,2 };
    int* p;
    p = getCopyof(a, 5);
    for (int i = 0; i < 5; i++) {
        cout << p[i] << endl;
    }
    cout << "===================" << endl;
    for (int i = 0; i < 5; i++) {
        p[i] = 100;
    }
    cout << "===================" << endl;
    for (int i = 0; i < 5; i++) {
        cout << p[i] << endl;
    }
    cout << "===================" << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    return 0;
}