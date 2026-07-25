//Write a program to input number from user and print product of numbers from 1 to 10 using while loop in C++.
#include <iostream>
using namespace std;
int main() {
    int s=1,i=1;
    while(i<=10)
    {
        s*=i;
        i++;
    }
    cout<<s;
    return 0;
}
