//write a program to print a square star pattern in c++ language.
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
