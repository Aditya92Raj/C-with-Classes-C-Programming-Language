//Write a program to input number from user and print multiplication table of given number.
#include <iostream>
using namespace std;
int main() {
    int a,i=1;
    cout<<"Enter a number:";
    cin>>a;
    while(i<=10)
    {
        cout<<a*i<<"\n";
        i++;
    }
    return 0;
}
