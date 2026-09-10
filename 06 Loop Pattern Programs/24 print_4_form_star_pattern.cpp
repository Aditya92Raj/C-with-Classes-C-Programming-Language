//Write a program to print 4 form star pattern in C++ language.
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
            if (j==a/2+1 || j==a/2+2-i || i==a/2+1)
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
