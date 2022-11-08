#include <iostream>
using namespace std;
int rollno[5] = {1, 2, 3, 4, 5};
float cgpa[5] = {2.66, 2.75, 3.00, 3.50, 3.75};
void CGPA(int n)
{
    for (int i = 0; i < 5; i++)
    {
        if (rollno[i] == n)
        {
            cout << "CGPA of roll no. " << rollno[i] << " is " << cgpa[i];
        }
        if (i == 4 && rollno[i] != n)
        {
            cout << "No such record found";
        }
    }
}
main()
{
    cout << "Enter the roll no. whose cgpa you want to find out: ";
    int n;
    cin >> n;
    CGPA(n);
}