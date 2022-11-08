#include <iostream>
#include <fstream>
using namespace std;
int Identical[4][3];
void input()
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter value: ";
            cin >> Identical[row][col];
        }
    }
}
// int IdenticalRows()
// {
//     // int temp = Identical[row][col];
// }
int CheckRows()
{
    int count = 0;
    int RowCount = 0;
    for (int row = 0; row < 4; row++)
    {
        count = 0;
        int Temp = Identical[row][0];
        for (int col = 0; col < 3; col++)
        {
            if (col != 0)
            {
                if (Identical[row][col] == Temp)
                {
                    count++;
                }
            }
        }
        if (count == 2)
        {
            RowCount++;
        }
    }
    return RowCount;
}
int Rows()
{
    int IdenticalRows = 0;
    int temp[3];
    int count = 0, tempCount = 0;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            temp[col] = Identical[row][col];
        }
        for (int i = 0; i < 4; i++)
        {
            count = 0;
            if (i != row)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (temp[j] == Identical[i][j])
                    {
                        count++;
                    }
                }
            }
            if (count == 3)
            {
                        }
        }
    }
    return IdenticalRows;
}
main()
{
    input();
    // cout << CheckRows();
    cout << Rows();
}