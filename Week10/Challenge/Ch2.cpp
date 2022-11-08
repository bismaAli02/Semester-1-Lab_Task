#include <iostream>
#include <conio.h>
using namespace std;
string Questions[10] = {"How many Wonders of world are there?", "29+20=?", "2+2=?", "How many fingers are there in a hand?", "1+1=?", "50-49=?", "40%10=?", "40/10=?", "100/2=?", "3*9=?"};
string Option1[10] = {"3", "49", "11", "5", "2", "40", "4", "4", "55", "24"};
string Option2[10] = {"7", "50", "4", "3", "11", "10", "0", "0", "10", "18"};
string Option3[10] = {"5", "59", "0", "7", "0", "1", "10", "10", "50", "27"};

string CorrectAnswer[10] = {"B", "A", "B", "A", "A", "C", "B", "A", "C", "C"};
string UserOption[10];
float marks[3];
string name[3];
int countCorrect = 0, countWrong = 0;
void QuestionDisplay()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Select any of the 3 available options" << endl;
        cout << "Q" << i + 1 << ": " << endl;
        cout << Questions[i] << endl;
        cout << "A." << Option1[i] << endl;
        cout << "B." << Option2[i] << endl;
        cout << "C." << Option3[i] << endl;
        cin >> UserOption[i];
        if (UserOption[i] == CorrectAnswer[i])
        {
            countCorrect = countCorrect + 1;
        }
        else
        {
            countWrong = countWrong + 1;
        }
        cout << "Enter any key to proceed next ";
        getch();
        system("cls");
    }
}
float MarksCalculator()
{
    float marks;
    marks = (countCorrect * 10) - (countWrong * 10 * 0.25);
    return marks;
}
void DisplayCorrect()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Q" << i + 1 << ": " << endl;
        cout << Questions[i] << endl;
        cout << "A." << Option1[i] << endl;
        cout << "B." << Option2[i] << endl;
        cout << "C." << Option3[i] << endl;
        cout << "Your option: ";
        cout << UserOption[i] << endl;
        if (UserOption[i] == CorrectAnswer[i])
        {
            cout << "You have entered correct option" << endl;
        }
        else
        {
            cout << "Wrong option!!!\n The correct answer is: " << CorrectAnswer[i] << endl;
        }
    }
    cout << "Enter any key to continue";
    getch();
    system("cls");
}
void Sorting()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (marks[i] < marks[j])
            {
                int temp;
                string tempName;
                temp = marks[j];
                tempName = name[j];
                marks[j] = marks[i];
                name[j] = name[i];
                marks[i] = temp;
                name[i] = tempName;
            }
        }
    }
}
main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        system("cls");
        cout << "Enter name of user " << i + 1 << ": ";
        cin >> name[i];
        QuestionDisplay();
        cout << "You have answered " << countCorrect << " correct " << endl;
        cout << "You have answered " << countWrong << " wrong " << endl;
        marks[i] = MarksCalculator();
        DisplayCorrect();
        cout << "Your marks are: " << marks[i] << endl;
        cout << "Enter any key to proceed next";
        getch();
    }
    system("cls");
    Sorting();
    cout << "Name\tMarks" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << "\t" << marks[i] << endl;
    }
}