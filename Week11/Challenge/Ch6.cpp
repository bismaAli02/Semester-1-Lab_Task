#include <iostream>
#include <fstream>
using namespace std;
fstream File;
int count = 0;
void display_words()
{
    string word;
    File.open("story.txt", ios::in);
    while (!File.eof())
    {
        count = 0;
        File >> word;
        for (int i = 0; word[i] != '\0'; i++)
        {
            count++;
        }
        if (count < 4)
        {
            cout << word << endl;
        }
    }
    File.close();
}
main()
{
    display_words();
}