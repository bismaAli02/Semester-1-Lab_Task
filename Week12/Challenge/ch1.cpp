#include <iostream>
#include <fstream>
using namespace std;
int mat[3][3];
int sum = 0;
main()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter value: ";
            cin >> mat[row][col];
            sum = sum + mat[row][col];
        }
    }
    cout << "The sum of matrix is: " << sum;
}