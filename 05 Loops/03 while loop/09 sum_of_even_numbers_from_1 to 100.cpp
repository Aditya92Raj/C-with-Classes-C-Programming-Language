//write a program to print sum of even numbers from 1 to 100 using while loop in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int a=0,i=2;
    while(i<=100)
    {
        a+=i;
        i+=2;
    }
    cout<<a;
    return 0;
}
