#include <iostream>
using namespace std;
main()
{
    char friends;
    cout << "Are your friends going to university: (Press Y for yes) ";
    cin >> friends;
    if (friends == 'y' || friends == 'Y')
    {
        cout << "Go to university";
    }
}