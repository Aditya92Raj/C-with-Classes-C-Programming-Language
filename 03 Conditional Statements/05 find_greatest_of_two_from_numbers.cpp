// Write a program to input two number from user and find the greater of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if (a>b)
    {
        cout<<a<<" is greater.";
    }
    else if (b>a)
    {
        cout<<b<<" is Greater.";
    }
    else
    {
        cout<<"Both numbers are Equal.";
    }
    return 0;
}
