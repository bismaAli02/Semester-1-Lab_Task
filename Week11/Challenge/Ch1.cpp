#include <iostream>
#include <fstream>
using namespace std;
void FindCh(int found, int location)
{
    if (found == 1)
    {
        cout << "Character Found at location: " << location << endl;
    }
    else
    {
        cout << "-1";
    }
}
main()
{
    char ch, ch2;
    int found = 0, location = 0;
    cout << "Enter the character you want to find out: ";
    cin >> ch;
    fstream File;
    File.open("english.txt", ios::in);
    while (!File.eof())
    {
        File >> ch2;
        if (ch2 == ch)
        {
            found = 1;
            break;
        }
        location++;
    }
    FindCh(found, location);
}