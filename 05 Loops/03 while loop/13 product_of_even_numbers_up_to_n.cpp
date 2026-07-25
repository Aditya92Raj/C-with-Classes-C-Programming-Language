//Write a program to input number from user and print product of all even numbers up to n.
#include <iostream>
using namespace std;
int main() {
    int a,s=1,i=2;
    cout<<"Enter a number:";
    cin>>a;
    while(i<=a)
    {
        s*=i;
        i+=2;
    }
    cout<<s;
    return 0;
}
