//write a program to print sum of odd numbers from 1 to 100 using do-while loop in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int i=1,sum=0;
    while (i<=100)
    {
        sum=sum+i;
        i+=2;
    }
    cout<<"Sum of odd numbers="<<sum;
    return 0;
}
