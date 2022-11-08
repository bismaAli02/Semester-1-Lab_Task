#include <iostream>
using namespace std;
int rollno[5] = {1, 2, 3, 4, 5};
int age[5] = {20, 21, 22, 23, 24};
void ParallelArray()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Roll no.[ " << i << " ] is " << rollno[i] << endl;
        cout << "Age[ " << i << " ] is " << age[i] << endl;
    }
}
main()
{
    ParallelArray();
}