#include<iostream>

using namespace std;

main()
{ 
    int num1, num2 ;
    num1 = 1;
    num2 = 2;
    int num3 = num1+num2;
    int num4 = num2+num3;
    int num5 = num3 +num4;
    int num6 = num4+num5;
    int num7 = num5+num6;
   cout<<"fibonacci series is: "<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<" "<<num6<<" "<<num7;
}