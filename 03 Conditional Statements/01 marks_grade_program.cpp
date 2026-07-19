// Write a program to input marks from user and print grade according to their marks.
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks (0-100):";
    cin>>marks;
    if (marks<0 || marks>100)
    {
        cout<<"Invalid Marks";
    }
    else if (marks >= 90)
    {
        cout<<"Grade:A+";
    }
    else if (marks>=80)
    {
        cout<<"Grade:A";
    }
    else if (marks>=70)
    {
        cout<<"Grade:B";
    }
    else if (marks>=60)
    {
        cout<<"Grade:C";
    }
    else if (marks>=50)
    {
        cout<<"Grade:D";
    }
    else if (marks >= 33)
    {
        cout<<"Grade:E";
    }
    else
    {
        cout<<"Grade:F (Fail)";
    }
    return 0;
}
