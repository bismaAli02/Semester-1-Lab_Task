#include <iostream>
using namespace std;
int main()
{
    string brand;
    int price;
    cout << "Enter the brand of dress: ";
    cin >> brand;
    cout << "Enter the price of dress: ";
    cin >> price;
    if (brand == "MTJ" && price < 1500)
    {

        cout << "Buy the dress";
    }

    return 0;
}