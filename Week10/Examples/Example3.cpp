#include <iostream>
using namespace std;
int rollno[5] = {1, 2, 3, 4, 5};
float marks[5] = {25, 20, 32, 30, 18};
int idx;
float max_marks = marks[0];
void highest_marks()
{
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > max_marks)
        {
            max_marks = marks[i];
            idx = i;
        }
    }
}
main()
{
    highest_marks();
    cout << "Highest marks is " << marks[idx] << " and the roll no. is " << rollno[idx];
}
