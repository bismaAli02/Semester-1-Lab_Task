#include <iostream>
#include <fstream>
using namespace std;
int Identity[3][3];
bool IdentityOrNot()
{
    int Dcount = 0, Ncount = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col)
            {
                if (Identity[row][col] == 1)
                {
                    Dcount++;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                if (Identity[row][col] == 0)
                {
                    Ncount++;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    if (Dcount == 3 && Ncount == 6)
    {
        return 1;
    }
    return 0;
}
void Input()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter value: ";
            cin >> Identity[row][col];
        }
    }
}
main()
{
    Input();
    cout << IdentityOrNot();
}