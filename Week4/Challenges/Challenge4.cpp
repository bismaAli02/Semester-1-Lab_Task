#include <iostream>
using namespace std;
main()
{
    string Password, userEnter;
    Password = "Umair2398";
    cout << "Enter the Password: ";
    cin >> userEnter;

    if (Password == userEnter)
    {
        cout << "The Password you entered is correct";
    }
    else
    {
        cout << "Try Again!! the Password is incorrect";
    }
}