//write a program to print sum of numbers from 1 to 100 using do-while loop in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int i=1,sum=0;
    while (i<=100)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Sum="<<sum;
    return 0;
}
