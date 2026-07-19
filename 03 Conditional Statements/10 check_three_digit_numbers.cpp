//Write a program to input number from user and check weather given number is three digit or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if (num>=100&& num<=999)
        cout<<"Three-digit number";
    else
        cout<<"Not a three-digit number";
    return 0;
}
