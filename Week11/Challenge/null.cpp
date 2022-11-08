#include <iostream>
#include <fstream>
using namespace std;
void dispaly_words()
{
    string word;
    int count = 0;
    fstream newfile;
    newfile.open("story.txt", ios::in);
    while (!newfile.eof())
    {
        count = 0;
        newfile >> word;
        for (int x = 0; word[x] != '\0'; x++)
        {
            count++;
        }
        if (count < 4)
        {
            cout << word << endl;
        }
    }
}
main()
{
    dispaly_words();
}