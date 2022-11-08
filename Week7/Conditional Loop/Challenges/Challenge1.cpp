#include <iostream>
using namespace std;
int mul1, mul2, x = 1, d;
int GCD(int n1, int n2)
{
    int a;

    while (a != 0)
    {
        if (n1 > n2)
        {
            a = n1 % n2;
            n1 = n2;
            if (a != 0)
            {
                n2 = a;
            }
        }
        else if (n2 > n1)
        {
            int arbit;
            arbit = n1;
            n1 = n2;
            n2 = arbit;
            a = n1 % n2;
            n1 = n2;
            if (a != 0)
            {
                n2 = a;
            }
        }

        // mul1 = a * b;
        // mul2 = mul1 % x;
        // x++;
        // if (mul2 != 0)
        // {
        //     d = 0;
        // }
        // else if (mul2 == 0)
        // {
        //     d = x;
        //     break;
        // }
        // cout << d << endl;
    }
    return n1;
}
int LCM(int a, int b)
{
    int result;
    result = (a * b) / d;
    return result;
}

main()
{
    int a, b;
    int lcm, gcd;
    cout << "Enter any number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    gcd = GCD(a, b);
    lcm = LCM(a, b);

    cout << "LCM is: " << lcm;
    cout << "\nGCD is: " << gcd;
}