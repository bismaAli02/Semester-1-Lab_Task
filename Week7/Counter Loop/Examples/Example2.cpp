#include <iostream>
using namespace std;
int display()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    return sum;
}
main()
{
    int sum;
    sum = display();
    cout << sum;
}