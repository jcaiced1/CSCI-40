// Assignment 4.5 (Pointer and Array)

// Write a C++ function that receives a character array (a C-string, not a string). The function will 
// make a copy of the array it receives and removes all the blank spaces in the copy, then the function 
// returns the copy array. 

#include <iostream>
using namespace std;

char* removeBlank(char a[])
{
    int count = 0;
    for (int i = 0; a[i]; i++) {
        if (a[i] != ' ')
            a[count++] = a[i]; 
    }
    a[count] = '\0';
    return a;
}

int main()
{
    char a[] = "This is an Example";
    removeBlank(a);
    cout << a;
    return 0;
}