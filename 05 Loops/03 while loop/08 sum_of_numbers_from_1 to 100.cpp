//write a program to print sum of numbers from 1 to 100 using while loop in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int a=0,i=1;
    while(i<=100)
    {
        a+=i;
        i++;
    }
    cout<<a;
    return 0;
}
