//Write a program to input number from user and print product of all even numbers up to n.
#include <iostream>
using namespace std;
int main() {
    int a,s=1;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=2;i<=a;i+=2)
    {
        s*=i;
    }
    cout<<s;
    return 0;
}
