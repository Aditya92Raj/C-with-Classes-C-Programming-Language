//write a program to print a inverted right angle triangle star pattern in c++ language.
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=a-i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
