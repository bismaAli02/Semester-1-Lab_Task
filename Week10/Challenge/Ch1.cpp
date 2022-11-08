#include <iostream>
using namespace std;

main()
{
    system("cls");
    int n;
    int m;
    cout << "Enter how many student's data you want to enter: ";
    cin >> n;
    cout << "Enter no. of subjects: ";
    cin >> m;
    string name[n];
    float marks[m];
    float Avg[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of stuent " << i + 1 << ": ";
        cin >> name[i];
        for (int j = 0; j < m; j++)
        {
            cout << "Enter marks of Subject " << j + 1 << ": ";
            cin >> marks[j];
            sum = sum + marks[j];
        }
        for (int j = 0; j < n; j++)
        {
            Avg[i] = sum / m;
        }
        sum = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << "\t" << Avg[i] << endl;
    }
}