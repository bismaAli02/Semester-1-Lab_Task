#include <iostream>
using namespace std;
int digits(int n)
{
    int dig = 0;
    for (int i = n; i > 0; i = i / 10)
    {
        dig = dig + 1;
    }
    return dig;
}

main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    int dig;
    dig = digits(num);
    cout << dig;
}