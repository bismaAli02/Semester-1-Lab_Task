#include <iostream>
using namespace std;
void msg()
{
    char y = 'y';
    while (y == 'y')
    {
        cout << "I am happy" << endl;
        cout << "Enter y to continue or any other key to exit: ";
        cin >> y;
    }
}

main()
{
    msg();
}