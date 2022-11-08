#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    if (name == "ali" || name == "Ali")
    {
        cout << "Welcome to UET! " << name;
    }
    else
    {
        cout << "Try again";
    }
}