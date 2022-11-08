#include <iostream>
using namespace std;
char Code[5] = {'a', 'b', 'c', 'd', 'e'};
float Discount[5] = {.25, .10, .20, .30, .50};
float Price(int item, int price)
{
    float Total = item * price * 1.0;
    return Total;
}
float disc(char code)
{
    int x;
    for (int i = 0; i < 5; i++)
    {
        if (code == Code[i])
        {
            x = i;
            break;
        }
    }
    if (code == Code[x])
    {
        return Discount[x];
    }
    else
    {
        return 0;
    }
}
float DiscountPrice(float discount, float total)
{
    float Discount = total * discount;
    Discount = total - Discount;
    return Discount;
}
main()
{
    int items, price;
    char code;
    float Total, DiscPrice;
    cout << "Enter total no. of items: ";
    cin >> items;
    cout << "Enter price per item: ";
    cin >> price;
    cout << "Enter code: ";
    cin >> code;
    Total = Price(items, price);
    float discount;
    discount = disc(code);
    DiscPrice = DiscountPrice(discount, Total);
    cout << "Total amount to be paid: " << DiscPrice;
}