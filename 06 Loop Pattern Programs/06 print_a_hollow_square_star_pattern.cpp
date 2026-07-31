//write a program to print a hollow square pattern in c++ language.
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i==1 || i==a || j==1 || j==a)
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
