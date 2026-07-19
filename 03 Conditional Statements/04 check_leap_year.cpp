// Write a program to input year from user and check whether year is leap year or not.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a number:";
    cin>>year;
    if (year%4==0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not leap year";
    }
    return 0;
}
