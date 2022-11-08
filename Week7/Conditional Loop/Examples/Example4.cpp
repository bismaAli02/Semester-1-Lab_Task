#include <iostream>
using namespace std;
void sum()
{
    int sum = 0;
    int i = 0;
    while (i <= 5)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
}

main()
{
    sum();
}