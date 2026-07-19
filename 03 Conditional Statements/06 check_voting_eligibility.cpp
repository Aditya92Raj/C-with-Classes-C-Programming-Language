// Write a program to input age from user and check whether a person is eligible for vote.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if (age>=18)
    {
        cout<<"Eligible for Voting.";
    }
    else
    {
        cout<<"Not Eligible for Voting.";
    }
    return 0;
}
