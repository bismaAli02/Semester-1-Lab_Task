#include <iostream>
#include <fstream>
using namespace std;
struct marks
{
    string subject;
    float number;
    marks *next;
};
struct student
{
    string name;
    student *next;
    marks *m_next;
};
student *head = NULL;
marks *m_head = NULL;
void Input()
{
    cout << "Enter the name of Student: ";
    string name;
    cin >> name;
    student *temp = head;
    bool isfound = false;
    while (temp != NULL)
    {
        if (temp->name == name)
        {
            isfound = true;
            break;
        }

        temp = temp->next;
    }
    if (isfound)
    {
    }
    else
    {
        student *St = new student;
        St->name = name;
        St->m_next = new marks;
        cout << "Enter subject: ";
        cin >> St->m_next->subject;
        cout << "Enter marks: ";
        cin >> St->m_next->number;
        if (head == NULL)
        {
        }
    }
}
main()
{
    // while (true)
    // {

    // }
}