//Write a program to input number from user and print product of numbers from 1 to 10 using for loop in C++.
#include <iostream>
using namespace std;
int main() {
    int s=1;
    for(int i=1;i<=10;i++)
    {
        s*=i;
    }
    cout<<s;
    return 0;
}
