#include <iostream>
using namespace std;
int main()
{
    string going, lecture;
    cout << "Do you have a lecture today: ";
    cin >> lecture;
    cout << "Are your friends going also: ";
    cin >> going;
    if (lecture == "yes" && going == "yes")
    {

        cout << "Yes you are going";
    }

    return 0;
}