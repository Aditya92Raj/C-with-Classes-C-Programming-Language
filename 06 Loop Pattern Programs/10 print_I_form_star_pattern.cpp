//write a program to print I form star pattern in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i==1||i==n||j==(n+1)/2)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
