//Write a program to print f form star pattern in C++ language.
#include <iostream>
int main() {
    int a,i,j;
    cout<<"Enter a number:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if((j==a/2+1 && i!=1) || (i==1 && j>a/2+1) || i==a/2+1)
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
