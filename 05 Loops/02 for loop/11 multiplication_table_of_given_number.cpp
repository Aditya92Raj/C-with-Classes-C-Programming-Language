//Write a program to input number from user and print multiplication table of given number.
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=1;i<=10;i++)
    {
        cout<<a*i<<"\n";
    }
    return 0;
}
