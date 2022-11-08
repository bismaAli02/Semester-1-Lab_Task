#include <iostream>
using namespace std;
int idx = 5;
int age[5];
// char Code[idx] = {'A', 'B', 'C', 'D', 'E'};
string name[5];

void Sorting()
{
    for (int i = 0; i < idx; i++)
    {
        for (int j = i + 1; j <= idx; j++)
        {
            if (age[i] < age[j])
            {
                int temp;
                string tempName;
                temp = age[j];
                tempName = name[j];
                age[j] = age[i];
                name[j] = name[i];
                age[i] = temp;
                name[i] = tempName;
            }
        }
    }
}
main()
{
    for (int i = 0; i < idx; i++)
    {
        cout << "Enter name of Person 1: ";
        cin >> name[i];
        cout << "Enter age of Person 1: ";
        cin >> age[i];
    }
    Sorting();
    cout << "Name\tAge" << endl;
    for (int i = 0; i < idx; i++)
    {
        cout << name[i] << "\t" << age[i] << endl;
    }
}