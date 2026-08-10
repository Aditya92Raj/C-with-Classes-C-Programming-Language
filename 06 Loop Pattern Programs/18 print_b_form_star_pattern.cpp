//Write a program to print b form star pattern in C++ language.
#include <iostream>
using namespace std;
int main()
{
    int a,i,j;
    cout<<"Enter a number:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j==1 || (i==a/2+1 && j!=a) || (i==a && j!=a) || (j==a && i>a/2+1 && i<a))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
