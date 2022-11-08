#include <iostream>
using namespace std;
main()
{
    string word1, word2;
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;

    if (word1 == word2)
    {
        cout << "Yes! The words entered are same";
    }
    else
    {
        cout << "No! The words are different";
    }
}