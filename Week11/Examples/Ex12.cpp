#include <iostream>
#include <fstream>
using namespace std;
char ch;
int count = 0;
void TotalCh()
{
    fstream File;
    File.open("english.txt", ios::in);
    while (!File.eof())
    {
        File >> ch;
        cout << ch << endl;
        count++;
    }
    File.close();
}
main()
{
    TotalCh();
    cout << "Total Characters: " << count;
}