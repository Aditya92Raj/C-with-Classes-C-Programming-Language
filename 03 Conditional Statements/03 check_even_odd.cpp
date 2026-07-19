// Write a program to input number from user and check number is even or odd according to their marks.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if (a%2==0)
    {
        cout<<"Even number";
    }
    else
    {
        cout<<"Odd number";
    }
    return 0;
}
