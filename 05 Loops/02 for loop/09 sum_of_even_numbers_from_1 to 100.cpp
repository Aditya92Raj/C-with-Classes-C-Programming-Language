//write a program to print sum of even numbers from 1 to 100 using for loop in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int a=0;
    for(int i=2;i<=100;i+=2)
    {
        a+=i;
    }
    cout<<a;
    return 0;
}
