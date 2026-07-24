//Write a program to count numbers divisible by 3 between 1 and N.
#include<iostream>
using namespace std;
int main()
{
    int a,count;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i%3==0)
        {
            count++;
        }
    }
    cout<<"Total numbers whose divisible by 3 = "<<count;
    return 0;
}
