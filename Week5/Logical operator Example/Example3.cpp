#include <iostream>
using namespace std;
int main()
{
    string name;
    int rollno;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your roll no.: ";
    cin >> rollno;

    if (name == "ali" && rollno == 501)
    {

        cout << "Welcome " << name;
    }

    return 0;
}