//write a program to print square numbers from 1 to 10 using do-while loop in c++ language.
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    do
    {
        cout<<i*i<<"\n";
        i++;
    } while (i<=10);
    return 0;
}
