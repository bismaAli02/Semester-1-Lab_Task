#include <iostream>
using namespace std;
void display(int n1, float n2)
{
    cout << "The integer type is " << n1 << endl;
    cout << "The float type is " << n2;
}
int main()
{
    int num1, num2;
    cout << "Enter integer value: ";
    cin >> num1;
    cout << "Enter float value: ";
    cin >> num2;
    display(num1, num2);
    return 0;
}