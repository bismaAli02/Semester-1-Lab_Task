#include <iostream>
#include <fstream>
using namespace std;
string Goal[7][9] = {
    {" ", "#", " ", " ", " ", " ", " ", "#", " "},
    {" ", "#", " ", " ", " ", " ", " ", "#", " "},
    {" ", "#", " ", " ", " ", " ", " ", "#", " "},
    {" ", "#", "#", "#", "#", "#", "#", "#", " "},
    {" ", " ", " ", " ", "#", " ", " ", " ", " "},
    {" ", " ", " ", " ", "#", " ", " ", " ", " "},
    {" ", " ", " ", " ", "#", " ", " ", " ", " "}};
int rowInput(char row)
{
    for (int i = 97; i < i + 7; i++)
    {
        if (char(i) == row || char(i - 32) == row)
        {
            if (char(i) == row)
            {
                return i - 97;
            }
            else
            {
                return i - 65 - 32;
            }
        }
    }
    return 0;
}
int colInput(char col)
{
    string column;
    column = col;
    int Column = stoi(column);
    return Column;
}
void Display()
{
    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            cout << Goal[row][col];
        }
        cout << endl;
    }
}
string IsGoal(string position)
{
    int Row, Col;
    Row = rowInput(position[0]);
    Col = colInput(position[1]);
    Goal[Row][Col] = "0";
    Display();
    if ((Row == 0 || Row == 1 || Row == 2) && (Col == 2 || Col == 3 || Col == 4 || Col == 5 || Col == 6))
    {
        return "Goal";
    }
    return "Not This Time";
}
main()
{
    Display();
    string position;
    cout << "Enter the position in which you want to Goal: ";
    cin >> position;
    cout << IsGoal(position);
}