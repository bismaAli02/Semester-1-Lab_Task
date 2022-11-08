#include <iostream>
using namespace std;
main()
{
    int num, mod;
    cout << "Enter any number to check if it is even or odd: ";
    cin >> num;
    mod = num % 2;
    if (mod == 0)
    {
        cout << "Given number is even";
    }
    else
    {
        cout << "Given number is odd";
    }
}