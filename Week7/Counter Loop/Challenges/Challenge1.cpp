#include <iostream>
using namespace std;
void Table(int n)
{
    int mul;
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        cout << n << " * " << i << " = " << mul << endl;
    }
}

main()
{
    Table(24);
    Table(50);
    Table(29);
}