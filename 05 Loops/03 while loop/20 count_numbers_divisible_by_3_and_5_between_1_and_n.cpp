//Write a program to count numbers divisible by 3 between 1 and N.
#include<iostream>
using namespace std;
int main()
{
    int a,count,i=1;
    cout<<"Enter a number:";
    cin>>a;
    while(i<=a)
    {
        if(i%3==0 && i%5==0)
        {
            count++;
        }
        i++;
    }
    cout<<"Total numbers whose divisible by 3 and 5 = "<<count;
    return 0;
}
