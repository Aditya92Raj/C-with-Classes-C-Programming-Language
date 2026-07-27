//Write a program to count odd numbers between 1 and N.
#include<iostream>
using namespace std;
int main()
{
    int a,count,i=1;
    cout<<"Enter a number:";
    cin>>a;
    while(i<=a)
    {
        if(i%2!=0)
        {
            count++;
        }
        i++;
    }
    cout<<"Total odd numbers from 1 and "<<a<<" = "<<count;
    return 0;
}
