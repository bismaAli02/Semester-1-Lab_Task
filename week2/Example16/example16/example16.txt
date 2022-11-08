 #include<iostream>

using namespace std;

main()

{  
    int num1, num2, sum1, sum2, Tsum;
    cout<< "Enter a number ";
    cin>> num1;
    cout<< "Enter a number ";
    cin>> num2;
    cout<<"series is: " << num1 <<"  "<< num1+num1<<" " <<num1+num1+num1<<" "<<num1+num1+num1+num1<<" "<<num1+num1+num1+num1+num1 <<endl ;
    cout<<"series is: " << num2 <<"  "<< num2+num2<<" " <<num2+num2+num2<<" "<<num2+num2+num2+num2<<" "<<num2+num2+num2+num2+num2<<endl;
     sum1 = num1 + (num1+num1) + (num1+num1+num1)+ (num1+num1+num1+num1) +(num1+num1+num1+num1+num1);
     sum2= num2 + (num2+num2) + (num2+num2+num2)+ (num2+num2+num2+num2) +(num2+num2+num2+num2+num2);
     Tsum = sum1 +sum2;
     cout<< Tsum;

   }