//A while loop checks the condition before executing the loop body. If the condition is false initially, the loop body will not execute even once.
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while (i<=5)
    {
        cout<<i<<"\n";
        i++;
    }
    return 0;
}
