//write a program to print a square number pattern in c++ language.
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
