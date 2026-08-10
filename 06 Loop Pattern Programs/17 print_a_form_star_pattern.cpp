//Write a program to print a form star pattern in C++ language.
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
            if((i==1 && j!=a) || (j==a && i!=1) || (i==a/2+1 && j!=1) || (i==a && j!=1) || (j==1 && i>a/2+1 && i<a))
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
