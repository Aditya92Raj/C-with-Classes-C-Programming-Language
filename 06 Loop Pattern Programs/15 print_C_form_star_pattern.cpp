//Write a program to print C form star pattern in C++ language.
#include <iostream>
using namespace std;
int main() {
    int a,i,j;
    cout<<"Enter a number:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if((j==1 && i!=1 && i!=a) || (i==1 && j!=1) || (i==a && j!=1))
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
