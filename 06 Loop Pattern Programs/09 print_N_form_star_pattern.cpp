//write a program to print N form star pattern in c++ language.
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
            if(j==1 || j==a || i==j)
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
