#include <iostream>
#include <fstream>
using namespace std;
const int size = 5;
string BattleSplash[size][size] = {
    {".", ".", "*", ".", "*"},
    {".", "*", ".", "*", "."},
    {".", ".", ".", ".", "*"},
    {"*", ".", ".", "*", "."},
    {".", ".", "*", ".", "*"}};
int rowInput(char row)
{
    for (int i = 97; i < i + size; i++)
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
string Fire(string position)
{
    int Row, Col;
    Row = rowInput(position[0]);
    Col = colInput(position[1]);
    if (BattleSplash[Row][Col] == ".")
    {
        return "Splash";
    }
    else
    {
        return "Boom";
    }
}
void Display()
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout << BattleSplash[row][col] << "\t";
        }
        cout << endl;
    }
}
main()
{
    Display();
    string position;
    cout << "Enter the position in which you want to Fire: ";
    cin >> position;
    cout << Fire(position);
}