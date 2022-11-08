#include <iostream>
#include <fstream>
using namespace std;
string line;
int count = 0;
void totalLines()
{
    fstream File;
    File.open("english.txt", ios::in);
    while (!File.eof())
    {
        getline(File, line);
        count++;
    }

    File.close();
}
main()
{
    totalLines();
    cout << "Total Lines: " << count;
}