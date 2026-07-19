// Write a program to input number from user and check number is positive,negative or zero according to their marks.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if (a<0)
    {
        cout<<"negative number";
    }
    else if (a>0)
    {
        cout<<"positive number";
    }
    else
    {
        cout<<"zero";
    }
    return 0;
}
