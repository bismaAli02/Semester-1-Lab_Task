#include <iostream>
#include <fstream>
using namespace std;
int FindFrequency(char ch)
{
    char ch2;
    int frequency = 0;
    fstream File;
    File.open("english.txt", ios::in);
    while (!File.eof())
    {
        File >> ch2;
        if (ch2 == ch)
        {
            frequency++;
        }
    }
    return frequency;
}
main()
{
    char ch;
    int frequency;
    cout << "Enter the character you want to find out: ";
    cin >> ch;
    frequency = FindFrequency(ch);
    cout << frequency << endl;
}