//A do...while loop executes the loop body at least once, because the condition is checked after execution.
#include <iostream>
using namespace std;
int main()
{
    int i=1;

    do
    {
        cout<<i<<"\n";
        i++;
    } while (i<=5);
    return 0;
}
