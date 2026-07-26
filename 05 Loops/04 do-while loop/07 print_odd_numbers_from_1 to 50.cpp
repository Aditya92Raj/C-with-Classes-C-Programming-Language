//write a program to print odd numbers from 1 to 50 using do-while loop in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    do
    {
        cout<<i<<"\n";
        i+=2;
    }
    while (i<=50);
    return 0;
}
