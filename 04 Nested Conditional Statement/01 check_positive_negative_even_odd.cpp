//Write a program to input number from user and check whether given number is positive even, positive odd, negative even, negative odd.
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if (a%2==0)
    {
        if (a>0)
        {
            cout<<"positive even";
        }
        else
        {
            cout<<"negative even";
        }
    }
    else
    {
        if (a>0)
        {
            cout<<"positive odd";
        }
        else
        {
            cout<<"negative odd";
        }
    }
    return 0;
}
