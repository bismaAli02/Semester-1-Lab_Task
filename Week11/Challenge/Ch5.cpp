#include <iostream>
#include <fstream>
using namespace std;
fstream File;
int count = 0;
void LinesWithoutAlphabetT()
{
    string line;
    File.open("story.txt", ios::in);
    while (!File.eof())
    {
        getline(File, line);
        if (line[0] != 'T' && line[0] != 't')
        {
            cout << line[0] << endl;
            count++;
        }
    }
    File.close();
}
main()
{
    LinesWithoutAlphabetT();
    cout << "No. of lines without T are: " << count;
}