//Write a program to count odd numbers between 1 and N.
#include<iostream>
using namespace std;
int main()
{
    int a,count;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            count++;
        }
    }
    cout<<"Total odd numbers from 1 and "<<a<<" = "<<count;
    return 0;
}
