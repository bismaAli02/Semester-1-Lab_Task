#include <iostream>
using namespace std;
void Positive()
{
    int num;
    cout << "Enter any positive number: ";
    cin >> num;
    while (num >= 0)
    {
        cout << "Enter another positive number: ";
        cin >> num;
    }
}

main()
{
    Positive();
}